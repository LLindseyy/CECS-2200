#include <iostream>
#include <string>
using namespace std;


int main() {
    int age = 18; //Enteros
    float exactAge = 19309.05241999; //Enteros y Racionales
    double exactAgeOfTheUniverse = 19309.05241999; // Lo mismo que float but with bigger capacity.
    long int agep = 18; //Int data type but with bigger capacity.
    unsigned int agepp = 18; // Unsigned int data type. No negatives or positives.
    unsigned long int ageppp = 18; // Duh
    char Middle = 'N'; //One character from the ascii table. Use single quotes.
    string Name = "Lauren";
    string LastName = "Lindsey";
    bool pretty = true; //Boolean Math = Binary. Binary = 1, 0. 1 = [True, ON, Yes]. 0 = [False, OFF, No].

    cout.precision(8);
    cout.setf(ios::fixed);
    cout << "Person: " << Name << " " << Middle << " "<< LastName << endl << "Age: " << age << endl << "Is pretty? " << pretty << endl << "She thinks the universe is this old: " << exactAgeOfTheUniverse << endl;
    return 0;
}