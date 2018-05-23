#include <iostream>
#include <iomanip>

using namespace::std;

int main () {
    float commission,sales,count=0;
    const int sale=200;

    cout<<"enter your sale (end with -1):";
    cin>>sales;
    while(sales != -1) {

    commission= sale*.09;
    commission=commission+sale;
    count++;

    cout<<"your salary is:"<<commission<<endl;

    cout<<"enter your sale (end with -1):";

    cout<<"enter your sale (end with -1):";
    cin>>sales;
    }
}//end int main


