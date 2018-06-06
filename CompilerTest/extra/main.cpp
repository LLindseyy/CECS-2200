#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
    int v_speed;
    float distance,v_hour;

    cout<<"Enter speed of the vehicle: ";
    cin>>v_speed;
    cout<<setprecision(2)<<fixed;
    while(v_speed!=-1)
    {
        cout<<"Enter hours vehicle traveled: ";
        cin>>v_hour;
    if(v_speed>40){
        distance=v_speed*v_hour;

        cout<<"distance is " << setw(5)<<distance<<endl;
    }else{
        distance=v_speed*v_hour;
        cout<<"distance is: " <<setw(5)<<distance <<endl;
    }
    cout<<": ";
    cin>>v_speed;
    }
}//end int main
