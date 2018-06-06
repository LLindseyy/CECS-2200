#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
    int hour=1;
    float v_speed;
    int v_hour;
    double distance;
    cout << showpoint << fixed;

    do {
        cout << "insert vehicle speed: ";
        cin >> v_speed;


        if (v_speed <0) {

            cout << "Please enter positive amount.\n";

        }
    }while(v_speed<0);

        cout << "insert hours traveled: ";
        cin >> v_hour;

    while (v_hour <1){

        cout << "Hours cannot be less than 1 please enter a valid number: ";
        cin >> v_hour;

    }


    cout << setw(5) << "hour" << setw(15) << "distance" << endl;
    do {
        distance=hour*v_speed;
        cout << setw(5) << hour << setw(15) << setprecision(2) << distance << endl;
        hour++;
    } while (hour<=v_hour);
}

