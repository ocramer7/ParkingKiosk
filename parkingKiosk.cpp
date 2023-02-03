/* Owen Cramer
 * FRCC CSC2034
 * February 5, 2023
 * Program that calculates rates for vehicle parking.
 */


#include <iostream>
using namespace std;

int main() {
    unsigned char input; // User input
    float hours; // Defines how long a vehicle has stayed at parking spot
    float price;

    do { // Repeats until the user wants to quit the program.
        cout << "\nWhat type of vehicle are you using? Or q to quit program.\n";
        cout << "Options:\n[c] Car\n[b] Bus\n[t] Truck\n[q] Quit\n";
        cout << "Input:";
        cin >> input;
        input = tolower(input);

        if (input == 'q') { // Checks if the input is to quit
            cout << "Goodbye!";
            break;
        }
        cout << "How many hours parked?:"; // Asks the user to enter how many hours vehicle was parked for
        cin >> hours;

        switch (input) { // Runs the appropriate calculations for each vehicle type and price per hour
            case 'c':
                price = 2 * hours; // Car: $2 per hour
                printf("Total to be charged: $%.2f", price);
                break;
            case 'b':
                price = 3 * hours; // Bus: $3 per hour
                printf("Total to be charged: $%.2f", price);
                break;
            case 't':
                price = 4 * hours; // Truck: $4 per hour
                printf("Total to be charged: $%.2f", price);
                break;
            default:
                cout << "[WARN]: Please enter a valid input [c, b, t, q]!\n";
                break;
        }
    } while (input != 'q');

    return 0;
}
