#include <iostream>
#include <iomanip>
using namespace:: std;

int main() {
    int choice;

    const int
            air = 1,
            water = 2,
            steel = 3,
            aird = 1100,
            waterd = 4900,
            steeld = 16400;

    double
            time,
            distance;

    cout << "\t\tchoose what you want to calculate\n\n"
         << "1.air\n"
         << "2.water\n"
         << "3.steel\n"
         << "enter your choice: ";
    cin >> choice;

    cout << fixed << showpoint << setprecision(4);

    if (choice == air) {
        cout << "enter your distance: ";
        cin >> distance;

        time = distance / aird;

        cout << "your travel time for air is: " << time << endl;
    } else if (choice == water) {
        cout << "enter your distance: ";
        cin >> distance;

        time = distance / waterd;

        cout << "your travel time for water is: " << time << endl;
    } else if (choice == steel) {
        cout << "enter your distance: ";
        cin >> distance;

        time = distance / steeld;

        cout << "your travel time for steal is: " << time << endl;
    } else {
        cout << "the valid options are between 1-3, "
             << "restart program and choose the available options.";
    }
}//int main end