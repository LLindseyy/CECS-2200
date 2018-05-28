#include <iostream>
#include <iomanip>

using namespace::std;

int main () {
    float commission,sales,count=0;
    const int SALE=200;

    cout<<"Enter your sale (end with -1): ";
    cin>>sales;
    while(sales != -1) {
        commission= SALE*.09;
        commission=commission+SALE;
        count++;
    
        cout<<"Your salary is: "<<commission<<endl;
        cout<<"Enter your sale (end with -1): ";
        cin>>sales;
    }
}//end int main


