#include <iostream>
#include <iomanip>
using namespace::std;

int main() {
    int count = 1, total,value;
    while (count <= 100) {
        total += count;
        cout << "The sum of the numbers 1-100 is ";
        cin>>value;
        cout << total << endl;
    }
}