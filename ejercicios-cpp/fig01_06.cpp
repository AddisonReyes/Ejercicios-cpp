// Fig. 1.6: fig01_06.cpp
// Programa de suma
#include <iostream>

using namespace std;

int main(){
    int integer1, integer2, sum;

    cout << "Teclee el primer numero entero: "; cin >> integer1;
    cout << "Teclee el segundo numero entero: "; cin >> integer2;

    sum = integer1 + integer2;
    cout << "La suma es " << sum << endl;

    return 0;
}