#include <iostream>
using namespace::std;
//Page 297 #22

int main() {
    int Integer_E,i,j;
    char Character_E,ch;

    cout<<"Enter positive integer no greater than 15:"<<endl;
    cin>>Integer_E;

    while (Integer_E>15||Integer_E<0){


        cout<<"Please enter a positive number make sure its not greater than 15:";
        cin>>Integer_E;
    }

    cout<<"Enter the character:"<<endl;
    cin>>Character_E;

    for (i=0;i<Integer_E;i++){

        for (j=0;j<Integer_E;j++){

            cout<<Character_E;
        }
        cout<<endl;
    }

}