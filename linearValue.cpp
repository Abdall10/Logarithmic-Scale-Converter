#include <iostream>
#include <cmath>    // Includes the math library for functions like log10 and pow
#include <iomanip>  // Includes the iomanip library for controlling output format

using namespace std;

// Function to convert a linear value to a logarithmic scale
double linearToLogarithmic(double linearValue) {
    return log10(linearValue);
}

// Function to convert a logarithmic value to a linear scale
double logarithmicToLinear(double logarithmicValue) {
    return pow(10, logarithmicValue);
}

int main() {
    char choice;
    double value, result;

    cout << fixed << setprecision(4); // Sets the output format to fixed-point with 4 decimal places

    do {
        cout << "Logarithmic Scale Converter" << endl;
        cout << "1. Convert Linear to Logarithmic" << endl;
        cout << "2. Convert Logarithmic to Linear" << endl;
        cout << "Enter your choice (1/2): ";
        cin >> choice;

        // Handling user's choice
        if (choice == '1') {
            cout << "Enter the linear value: ";
            cin >> value;
            if (value <= 0) {
                cout << "Error: Linear value must be positive for logarithmic conversion." << endl;
            } else {
                result = linearToLogarithmic(value);
                cout << "Logarithmic value (base 10) of " << value << " is: " << result << endl;
            }
        } else if (choice == '2') {
            cout << "Enter the logarithmic value: ";
            cin >> value;
            result = logarithmicToLinear(value);
            cout << "Linear value of 10^" << value << " is: " << result << endl;
        } else {
            cout << "Invalid choice. Please enter 1 or 2." << endl;
        }

        cout << "Do you want to perform another conversion? (y/n): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Thank you for using the Logarithmic Scale Converter!" << endl;

    return 0;
}
