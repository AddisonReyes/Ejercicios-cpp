// Fig. 3.3: fig03_03.cpp
// Creacion y empleo de una funcion definida por el usuario
#include <iostream>

using namespace std;

int square( int );

int main() {
    for ( int x = 1; x <= 10; x++ ) {
        cout << square(x) << " ";
    }

    cout << endl;

    return 0;
}

int square( int y ) {
    return y * y;
}