#include <iostream>
using namespace::std;
//Triangle pattern #23 B

int main() {
    int Row,i,j;
    char Character_E,ch;

    cout<<"Enter positive integer no greater than 15:"<<endl;
    cin>>Row;

    while (Row>15||Row<0){


        cout<<"Please enter a positive number make sure its not greater than 15:";
        cin>>Row;
    }

    cout<<"Enter the character:"<<endl;
    cin>>Character_E;

    for (i=0;i<Row;i++){
        for (j=0;j<i;j++){
            cout <<"*";

            cout << endl;
        }

    }

}



