#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
    int a, b, c;
    double s, area;

    // Display a welcome message
    cout << "Welcome to the Triangle Area Calculator!" << endl;
    cout << "-----------------------------------------" << endl;

    // Ask for the length of the sides
    cout << "Enter the length of the three sides of the triangle:" << endl;
    cout << "Side 1: ";
    cin >> a;
    cout << "Side 2: ";
    cin >> b;
    cout << "Side 3: ";
    cin >> c;

    // Calculate the semi-perimeter
    s = (a + b + c) / 2.0;

    // Calculate the area
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display the result
    cout << "The area of the triangle is: " << area << " square units" << endl;

    // Ask the user to press a key to exit
    cout << "Press any key to exit..." << endl;
    getch();

    return 0;
}