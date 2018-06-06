#include <iostream>
using namespace std;

int main() {
    int speed_1, speed_2, speed_3, speed_4, c_store5, a;

    cout << "Enter vehicles speed mph: ";
    cin >>speed_1;

    cout << "Enter vehicles speed mph: ";
    cin >>speed_2;

    cout << "Enter vehicles speed mph: ";
    cin >>speed_3;

    cout << "Enter vehicle speed mph: ";
    cin >>speed_4;


    cout << "\tSALES BAR CHART " << endl;
    cout << "\t(Each * = 100) " << endl;

    cout<< "Store 1: ";
    for ( a = 0;a < (c_store1/100); a++) {
        cout<<"*";
    }
    cout<<endl;

    cout<< "Store 2: ";
    for ( a = 0; a <(c_store2/100); a++){
        cout<<"*";
    }
    cout<<endl;

    cout<< "Store 3: ";
    for ( a = 0 ; a<(c_store3/100); a++){
        cout<<"*";
    }
    cout<<endl;

    cout<< "Store 4: ";
    for ( a = 0; a <(c_store4/100); a++){
        cout<<"*";
    }
    cout<<endl;

    cout<< "Store 5: ";
    for ( a = 0;a <(c_store5/100); a++){
        cout<<"*";
    }
    cout<<endl;

}//int end mainz