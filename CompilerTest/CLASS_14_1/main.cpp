#include <iostream>
using namespace std;

int main() {
    int c_store1, c_store2, c_store3, c_store4, c_store5, a;

    cout << "Enter today's sale for store 1: ";
    cin >>c_store1;

    cout << "Enter today's sale for store 2: ";
    cin >>c_store2;

    cout << "Enter today's sale for store 3: ";
    cin >>c_store3;

    cout << "Enter today's sale for store 4: ";
    cin >>c_store4;

    cout << "Enter today's sale for store 5: ";
    cin >>c_store5;

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