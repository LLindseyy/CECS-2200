#include <iostream>
using namespace::std;
/* Programa que calcula el promedio de 5 numeros CECS2200 Lauren Lindsey #113093 */


int main() {
    int num1, num2, num3, num4, num5, suma;
    float promedio;
    cout << "Entre el numero #1,";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    suma = num1+ num2 + num3 + num4 + num5;
    promedio = suma/5.0;
    cout << "El promedio es" << promedio << endl;
} //end main
