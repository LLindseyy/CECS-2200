#include <iostream>
using namespace::std;

int main() {
    int Row,i,j;
    char character_e, ch;

    cout<<"Enter positive row no greater than 15:"<<endl;
    cin>>Row;

    while (Row>15||Row<0){


        cout<<"Please enter a positive number make sure its not greater than 15:";
        cin>>character_e;
    }

    cout<<"Enter the character:"<<endl;
    cin>>character_e;

    for (i=0;i<Row;i++){

        for (j=0;j<i;j++){

            cout<<"*";
        }
        cout<<endl;
    }

}

