#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
    char choice;

    const char
            air='a',
            water='b',
            steel='c';
    const int aird=1100,
            waterd=4900,
            steeld=16400;
    double times,
            distance;

    cout<<"\t\tchoose what you want to calculate\n\n"
          <<"a.Air\n"
            <<"b.Water\n"
              <<"c.Steel\n"
                <<"enter the distance you would like to calculate: ";
    cin>>distance;

    cout<<"choose how you want to calculate your distance:";
    cin>>choice;

    if (distance<0) {
        cout<<"error negative distances will not be accepted please restartprogram."
              <<"use positive distances.";
    }

    cout<<fixed<<showpoint<<setprecision(4);

    switch (choice){
        case air:
            times=distance/aird;
            cout<<"your travel time for air is: "<<time<<endl;
            break;
        case water:
            times=distance/waterd;
            cout<<"your travel time for water is: "<<time<<endl;
            break;
        case steel:
            times=distance/steeld;
            cout<<"your travel time for steel is: "<<time<<endl;
            break;

        default:
            cout<<"the valid options are between a-c,"
                  <<"restart program and choose the available options.";
    }


}//int main end