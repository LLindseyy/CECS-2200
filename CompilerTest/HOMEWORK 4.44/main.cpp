#include <iostream>
#include <iomanip>
#include <cmath>
using namespace::std;

int main() {

    const int quantity = 703;
    double weight;
    int feet,
            inches;
    double BMI,
            totalinches,
            inchconversion;

    cout << "please enter weight: ";
    cin >> weight;

    cout << "please enter feet: ";
    cin >> feet;

    cout << "please enter your remaining inches: ";
    cin >> inches;

    inchconversion = feet * 12;

    totalinches = inchconversion + inches;

    BMI = weight * quantity / (pow(totalinches, 2.0));

    cout << setprecision(2) << fixed;

    cout << "your BMI is: " << BMI;

    if (BMI < 18.5) {

        cout << "you are underweight";

    } else if (BMI >= 18.5 && BMI <= 25) {

        cout << "your BMI is well balanced";
    } else {
        cout << "you are overweight";
    }
}//int main end


