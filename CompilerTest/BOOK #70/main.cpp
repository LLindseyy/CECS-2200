// This program displays the sum of the numbers 1-100.
#include <iostream>
using namespace:: std;

int main() {

    int count = 1, total=0, limit=100;

      cout<<"between the value to be sum 1-100 ";
    while (count <= limit)
    {
        cout <<  count << "+" << total << "=" << (count + total) << endl;
        total = total + count;

        count++;
    }
}//int main end
