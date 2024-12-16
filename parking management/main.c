#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char vehicleType[20];
    char regNumber[20];
    int hours;
    int charge;
} Vehicle;

void addVehicle(FILE *file);
void viewVehicles(FILE *file);
void calculateEarnings(FILE *file);

int main() {
    int choice;
    FILE *file;

    printf("Opening the parking details file...\n");

    file = fopen("parking_details.txt", "a+"); // Open file in append+read mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("\n========== Car Parking Management ==========\n");
        printf("1. Add a vehicle\n");
        printf("2. View parked vehicles\n");
        printf("3. Show total earnings\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addVehicle(file);
            break;
        case 2:
            viewVehicles(file);
            break;
        case 3:
            calculateEarnings(file);
            break;
        case 4:
            printf("Exiting the program...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    fclose(file); // Close the file before exiting
    return 0;
}

void addVehicle(FILE *file) {
    Vehicle vehicle;

    printf("\nEnter vehicle type (Car/Bike/Truck): ");
    scanf("%s", vehicle.vehicleType);
    printf("Enter registration number: ");
    scanf("%s", vehicle.regNumber);
    printf("Enter parking hours: ");
    scanf("%d", &vehicle.hours);

    // Calculate parking charge based on vehicle type
    if (strcmp(vehicle.vehicleType, "Car") == 0) {
        vehicle.charge = 50 * vehicle.hours;
    } else if (strcmp(vehicle.vehicleType, "Bike") == 0) {
        vehicle.charge = 20 * vehicle.hours;
    } else if (strcmp(vehicle.vehicleType, "Truck") == 0) {
        vehicle.charge = 100 * vehicle.hours;
    } else {
        printf("Invalid vehicle type! Setting charge to 0.\n");
        vehicle.charge = 0;
    }

    fprintf(file, "%s %s %d %d\n", vehicle.vehicleType, vehicle.regNumber, vehicle.hours, vehicle.charge);
    fflush(file); // Ensure data is written to the file immediately

    printf("Vehicle added successfully!\n");
}

void viewVehicles(FILE *file) {
    Vehicle vehicle;

    rewind(file); // Move file pointer to the beginning
    printf("\n========== Parked Vehicles ==========\n");
    printf("Type       Registration No.       Hours       Charge\n");
    printf("-----------------------------------------------------\n");

    while (fscanf(file, "%s %s %d %d", vehicle.vehicleType, vehicle.regNumber, &vehicle.hours, &vehicle.charge) == 4) {
        printf("%-10s %-20s %-10d %-10d\n", vehicle.vehicleType, vehicle.regNumber, vehicle.hours, vehicle.charge);
    }
}

void calculateEarnings(FILE *file) {
    Vehicle vehicle;
    int totalEarnings = 0;

    rewind(file); // Move file pointer to the beginning
    while (fscanf(file, "%s %s %d %d", vehicle.vehicleType, vehicle.regNumber, &vehicle.hours, &vehicle.charge) == 4) {
        totalEarnings += vehicle.charge;
    }

    printf("\n========== Total Earnings ==========\n");
    printf("Total earnings from parking: %d\n", totalEarnings);
}
