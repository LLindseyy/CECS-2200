#include <iostream>
#include <iomanip>
#include <cmath>

using namespace:: std;

int main() {

    const int quantity = 703;
    double weight;

    int feet,
            inches;

    double bmi,
            totalinches,
            inchconversion;

    cout << "Please enter weight: ";
    cin >> weight;

    cout << "Please enter feet: ";
    cin >> feet;

    cout << "Please enter your remaining inches: ";
    cin >> inches;

    inchconversion = feet * 12;

    totalinches = inchconversion + inches;

    bmi = weight * quantity / (pow(totalinches, 2.0));

    cout << setprecision(2) << fixed;

    cout << "your bmi is: " << bmi;

    if (bmi < 18.5) {

        cout << "you are underweight";
    } else if (bmi >= 18.5 <= 25) {

        cout << "your bmi is well balanced";
    } else {
        cout << "you are overweight";
    }
} //int main end