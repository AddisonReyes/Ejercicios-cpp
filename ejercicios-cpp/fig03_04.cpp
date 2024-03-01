// Fig. 3.4: fig03_04.cpp
// Busqueda del mas grande de tres numeros
#include <iostream>

using namespace std;

int maximun( int, int, int );

int main() {
    int a, b, c;

    cout << "Teclee tres numeros: ";
    cin >> a >> b >> c;

    cout << "\nEl mayor es: " << maximun(a, b, c) << endl;

    return 0;
}

int maximun( int x, int y, int z ) {
    int max = x;

    if ( y > max ) {
        max = y;
    }

    if ( z > max ) {
        max = z;
    }

    return max;
}