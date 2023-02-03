/* Owen Cramer
 * FRCC CSC2034
 * February 5, 2023
 * Program that calculates rates for vehicle parking.
 */


#include <iostream>
using namespace std;

float price;
// Functions for each vehicle type and their calculation rates.
int c(float hours) {
    price = 2 * hours; // Car: $2 per hour
    printf("Total to be charged: $%.2f", price);
    return 0;
}

int b(float hours) {
    price = 3 * hours; // Bus: $3 per hour
    printf("Total to be charged: $%.2f", price);
    return 0;
}

int t(float hours) {
    price = 4 * hours; // Truck: $4 per hour
    printf("Total to be charged: $%.2f", price);
    return 0;
}

int main() {
    int input = 1; // User input
    float hours; // Defines how long a vehicle has stayed at parking spot


    do {
        cout << "What type of vehicle are you using?\n";
        cout << "[1] Car\n[2] Bus\n[3] Truck\n";
        cout << "Input: ";
        cin >> input;
        if (input > 3) { // Checks if the user enters a valid input
            cout << "[WARN]: Please enter a valid input [1 - 3]!\n";
        } else {
            break;
        }
    } while (input > 3); // Repeats until the input is less than 3


    cout << "How many hours parked?: "; // Asks the user to enter how many hours vehicle was parked for
    cin >> hours;

    switch (input) { // Calls functions for each vehicle type
        case 1:
            c(hours);
            break;
        case 2:
            b(hours);
            break;
        case 3:
            t(hours);
            break;
        default:
            break;
    }

    return 0;
}
