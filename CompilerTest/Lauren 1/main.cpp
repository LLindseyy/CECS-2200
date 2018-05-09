#include <iostream>
#include <cmath>
#include <iomanip>
using namespace::std;
//Program displays a menu & asks the user to make a selection, CECSS 2200 Lauren Lindsey #113093

int main() {
    int choice;
    double area_lauren, area_sebi, area_nic, friendship, length, width, base, height;

    const int
            lauren_choice=1,
            sebi_choice=2,
            nic_choice=3,
            quit_choice=4;
    const double
            pi=3.14159;

    cout
            <<"relationship indicator"<<endl
            <<"1. Lauren"<<endl
            <<"2. Sebi"<<endl
            <<"3. Nic"<<endl
            <<"4. Quit"<<endl
            <<"enter your choice: "<<endl;
    cin>>choice;
    cout<<fixed<<showpoint;switch(choice){

        case lauren_choice:
            cout << "enter the amount friendship of lauren: " << endl;
        cin >> friendship;
        area_lauren=pi*pow(friendship, 2);
        cout << "the amount of friendship of lauren is " << area_lauren << endl;
        break;

        case sebi_choice:

        cout<<"enter the length of sebi: "<<endl;
        cin>>length;
        cout<<"enter the width of sebi: "<<endl;
        cin>>width;
        area_sebi =length * width;
        cout<<"the area of the rectangle is "<< area_sebi<<endl;
        break;

        case nic_choice:

        cout<<"enter the base of nic: "<<endl;
        cin>>base;
        cout<<"enter the height of nic: "<<endl;
        cin>>height;
        area_nic=base*height* .5;
        cout<<"the area of the triangle is: "<<area_nic<<endl;
        break;

        case quit_choice:

        cout<<"program ending. "<<endl;
        break;

        default:

        cout<<"ERROR, the valid choices are 1-4."<<endl
            <<"Please run the program again and choose one of the valid choices"<<endl;

    }

} //end main
