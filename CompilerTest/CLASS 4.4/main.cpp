#include <iostream>
using namespace::std;

int main() {
    double commission;
    double amount;
    cout << "enter the amount sold:";
    cin >> amount;
    if (amount <= 10000) {
        commission = amount * .10;
        cout << "receive 10% commission" << endl;
    }//end
    else {
        if (amount >= 10000 && amount <= 15000) {
            commission = amount * .15;
            cout << "receive 15% commission" << endl;
        }//end
        else {
            if (amount > 15000) {
                commission = amount * .28;
                cout << "receive 28% commission:" << endl;
            }
        }//end
    }
    cout << "the commission is:" << commission << endl;
}//end main

