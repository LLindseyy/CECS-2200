#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
    float tax = 0.04;
    int year = 1;
    double cost;
    cout << showpoint << fixed;

    do {
        cout << "insert cost: ";
        cin >> cost;


    if(cost < 0){
    cout << "Please enter positive amount.\n";

}
    }while(cost < 0);
     cout<<setw(5)<<"year"<<setw(15)<<"cost"<<endl;
    do{
        cout <<setw(5)<< year <<setw(15)<<setprecision(2)<<cost<<endl;
        year++;
        cost = cost+ tax * cost;
    } while (year <= 6);
}//int main end