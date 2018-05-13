#include <iostream>
#include <iomanip>
using namespace:: std;

int main()
{
    char choice;
    cout<< "enter a,b, or c:";
   cin>> choice;
   switch (choice) {
       case 'a':
       case 'A':
           cout << "air, aird=1100\n";
           break;
       case 'b':
       case 'B':
           cout << "water, waterd=4900\n";
           break;
       case 'c':
       case 'C':
           cout << "steel, steeld=16400\n";
           break;
       default:
           cout << "you did not enter a, b, or c!\n";
   }
    const double
            aird = 1100,
            waterd = 4900,
            steeld = 16400;

    double
            time,
            distance;

    cout << "\t\tchoose what you want to calculate\n\n"
         << "a.air\n"
         << "b.water\n"
         << "c.steel\n"
         << "enter the distance you would like to calculate"
         << "enter your choice: ";
    cin>>choice,


    cout << fixed << showpoint<<setprecision(2);
           {
               case A:
                   time = distance / aird;

               cout << "your travel time for air is: " << time << endl;
               break;

               case B:

                   time = distance / waterd;

               cout << "your travel time for water is: " << time << endl;
               break;

               case C:
                   time = distance / steeld;
               cout << "your travel time for steal is: " << time << endl;
               break;

               default:
                   cout << "the valid options are between a through c. run the \n"
                        << "restart program and choose the available options.\n";

}//int main end
