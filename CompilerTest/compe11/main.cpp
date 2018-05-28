#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
    int h_worked;
    float h_rate,salary,e_hour,e_rate;

    cout<<"Enter hours worked (-1 to end): ";
    cin>>h_worked;
    cout<<setprecision(2)<<fixed;
    while(h_worked!=-1)
    {
        cout<<"Enter hour rate of the employee: ";
        cin>>h_rate;
    if(h_worked>40){
        salary=h_worked*h_rate;
        e_hour=h_worked-40;
        e_rate=(e_hour/2) * h_rate;
        salary=salary+e_rate;
        cout<<"Salary is " << setw(5)<<salary<<endl;
    }else{
        salary=h_worked*h_rate;
        cout<<"Salary is $" <<setw(5)<<salary<<endl;
    }
    cout<<"Enter h worked (-1 to end): ";
    cin>>h_worked;
    }
}//end int main
