#include <iostream>
#include <cmath>
#include <iomanip>
using namespace::std;
//Program displays a menu & asks the user to make a selection, CECSS 2200 Lauren Lindsey #113093

int main() {
    int choice;
    double area_circle, area_rectangle, area_triangle, radius, length, width, base, height;

    const int
            circle_choice=1,
            rectangle_choice=2,
            triangle_choice=3,
            quit_choice=4;
    const double
            pi=3.14159;

    cout<<setprecision(8)<<"Geometry Calculator"<<endl
        <<setprecision(10)<<"1. Calculate the area of a circle"<<endl
        <<setprecision(10)<<"2. Calculate the area of a rectangle"<<endl
        <<setprecision(10)<<"3. calculate the area of a triangle"<<endl
        <<setprecision(10)<<"4. Quit"<<endl
        <<setprecision(10)<<"enter your choice: "<<endl;
    cin>>choice;
    cout<<fixed<<showpoint<<setprecision(2);
    if (choice==circle_choice) {
        cout << "enter the radius of the circle: " << endl;
        cin >> radius;
        area_circle=pi*pow(radius, 2);
        cout << "the area of the circle is " << area_circle << endl;
    }
    else if (choice==rectangle_choice)
    {
        cout<<"enter the length of the rectangle: "<<endl;
        cin>>length;
        cout<<"enter the width of the rectangle: "<<endl;
        cin>>width;
        area_rectangle =length * width;
        cout<<"the area of the rectangle is "<< area_rectangle<<endl;
    }
    else if (choice==triangle_choice)
    {
        cout<<"enter the base of the triangle: "<<endl;
        cin>>base;
        cout<<"enter the height of the triangle: "<<endl;
        cin>>height;
        area_triangle=base*height* .5;
        cout<<"the area of the triangle is: "<<area_triangle<<endl;
    }
    else if (choice==quit_choice)
    {
        cout<<"program ending. "<<endl;
    }
    else
    {
        cout<<"ERROR, the valid choices are 1-4."<<endl
            <<"Please run the program again and choose one of the valid choices"<<endl;

    }

} //end main