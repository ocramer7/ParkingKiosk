/* Owen Cramer
 * FRCC CSC2034
 * February 5, 2023
 * Program that calculates rates for vehicle parking.
 */


#include <iostream>
using namespace std;

int main() {
    unsigned int input; // User input
    float hours; // Defines how long a vehicle has stayed at parking spot
    float price;

    enum CarType {Car, Bus, Truck, Quit};

    CarType carType;

    do { // Repeats until the user wants to quit the program.
        cout << "\nWhat type of vehicle are you using?\n";
        cout << "Options:\n Car\n Bus\n Truck\n Quit\n";
        cout << "Input: ";
        cin >> input;
        carType = (CarType)input;

        if (input == Quit) { // Checks if the input is to quit
            cout << "Goodbye!";
            break;
        }
        cout << "How many hours parked?:"; // Asks the user to enter how many hours vehicle was parked for
        cin >> hours;

        switch (carType) { // Runs the appropriate calculations for each vehicle type and price per hour
            case Car:
                price = 2 * hours; // Car: $2 per hour
                printf("Total to be charged: $%.2f", price);
                break;
            case Bus:
                price = 3 * hours; // Bus: $3 per hour
                printf("Total to be charged: $%.2f", price);
                break;
            case Truck:
                price = 4 * hours; // Truck: $4 per hour
                printf("Total to be charged: $%.2f", price);
                break;
            default:
                cout << "[WARN]: Please enter a valid input!\n";
                break;
        }
    } while (input != Quit);

    return 0;
}
