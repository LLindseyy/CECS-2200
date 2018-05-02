#include <iostream>
#include <iomanip>
using namespace::std;
/* Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge. CECS2200 Lauren Lindsey #113093 */


int main() {
    float sum;
    float taxes;
    float mealcost;
    const float tax=0.0675;
    const float tip=0.20;
    cout<<setprecision(2)<<fixed;
    cout << "calculate meal cost #1,";
    cin >> mealcost;
    sum = mealcost*tax;
    cout<< "tip "<< sum<<endl;
    taxes =(mealcost+sum)*tip;
    cout<<"taxes"<< taxes<<endl;
    cout << "bill " << taxes+(mealcost+sum) << endl;
} //end main
