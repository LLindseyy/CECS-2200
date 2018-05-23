#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
    float oceanlevel = 1.5, years = 1;
    cout<<setw(5)<<"years\t" <<"oceanlevel"<<endl;

    while (years <= 25) {
        cout << years <<setw(15) << oceanlevel << endl;
        years++;
        oceanlevel = years * 1.5;
    }
}//int main end