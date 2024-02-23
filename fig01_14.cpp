// Fig 1.14: fig01_14.cpp
// Empleo de instrucciones if, operadores relacionales
// y operadores de igualdad
#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cout << "Teclee dos numeros enteros y le dire las relaciones que complen.";
    cout << "\n#1: "; cin >> num1;
    cout << "#2: "; cin >> num2;

    cout << endl;

    if (num1 == num2)
        cout << num1 << " es igual a " << num2 << endl;

    if (num1 != num2)
        cout << num1 << " no es igual a " << num2 << endl;

    if (num1 < num2)
        cout << num1 << " es menor que " << num2 << endl;

    if (num1 > num2)
        cout << num1 << " es mayor que " << num2 << endl;

    if (num1 <= num2)
        cout << num1 << " es menor que o igual a " << num2 << endl;

    if (num1 >= num2)
        cout << num1 << " es mayor que o igual a " << num2 << endl;
    
    return 0;
}