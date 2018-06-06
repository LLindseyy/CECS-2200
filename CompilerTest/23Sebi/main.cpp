#include <iostream>
using namespace::std;

int main() {
    int rows=0,i,j;
    char character_e=' ';
    cout<<"Enter the number of rows cannot be greater than 15: ";
    cin>>rows;
    cout<<"Enter the character to use as character_e: ";
    cin>>character_e;

    for ( i=0; rows > i; i++){
        for ( j=0;j<rows-i; j++)
            cout<<character_e;
        cout<<endl;
    }
}// the end tah dahhh

