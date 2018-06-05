#include <iostream>
using namespace::std;

int main() {
    int Integer_E, i = 0, j;
    char Character_E, ch;

    cout << "Enter positive integer no greater than 15:" << endl;
    cin >> Integer_E;

    while (Integer_E > 15 || Integer_E < 0) {


        cout << "Please enter a positive number make sure its not greater than 15:";
        cin >> Integer_E;
    }

    cout << "Enter the character:" << endl;
    cin >> Character_E;

    while(i <Integer_E){
        j = 0;
        do{
            cout << Character_E;
            j++;
        }while(j<Integer_E);
        cout << endl;
        i++;
    }

}