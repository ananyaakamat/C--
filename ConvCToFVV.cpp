#include <iostream>

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    int choice;
    double temperature;

    std::cout << "Temperature Conversion Script" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "1. Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Fahrenheit to Celsius" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temperature;
        std::cout << temperature << "°C is equal to " << celsiusToFahrenheit(temperature) << "°F" << std::endl;
    } else if (choice == 2) {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temperature;
        std::cout << temperature << "°F is equal to " << fahrenheitToCelsius(temperature) << "°C" << std::endl;
    } else {
        std::cout << "Invalid choice. Please try again." << std::endl;
    }

    return 0;
}