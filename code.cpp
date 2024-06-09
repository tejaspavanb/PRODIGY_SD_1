#include <iostream>
#include <iomanip>

using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

// Function to convert temperature based on the unit
void convertTemperature(double value, char unit) {
    double converted1, converted2;

    switch (unit) {
        case 'C':
            converted1 = celsiusToFahrenheit(value);
            converted2 = celsiusToKelvin(value);
            cout << fixed << setprecision(2);
            cout << value << " degrees Celsius is equal to " << converted1 << " degrees Fahrenheit and " << converted2 << " Kelvin." << endl;
            break;
        case 'F':
            converted1 = fahrenheitToCelsius(value);
            converted2 = fahrenheitToKelvin(value);
            cout << fixed << setprecision(2);
            cout << value << " degrees Fahrenheit is equal to " << converted1 << " degrees Celsius and " << converted2 << " Kelvin." << endl;
            break;
        case 'K':
            converted1 = kelvinToCelsius(value);
            converted2 = kelvinToFahrenheit(value);
            cout << fixed << setprecision(2);
            cout << value << " Kelvin is equal to " << converted1 << " degrees Celsius and " << converted2 << " degrees Fahrenheit." << endl;
            break;
        default:
            cout << "Invalid unit of measurement." << endl;
    }
}

int main() {
    double value;
    char unit;

    cout << "Enter the temperature value: ";
    cin >> value;
    cout << "Enter the unit of measurement (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin >> unit;
    unit = toupper(unit);

    convertTemperature(value, unit);

    return 0;
}
