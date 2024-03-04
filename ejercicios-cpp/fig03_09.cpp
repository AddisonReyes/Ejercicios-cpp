// Fig. 3.9: fig03_09.cpp
// Aleatorizacion del programa de lanzamiento de dados
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {
    unsigned seed;

    //cout << "Teclee la semilla: ";
    //cin >> seed;
    srand( time( 0 ) );

    for ( int i = 1; i <= 10; i++ ) {
        cout << setw( 10 ) << 1 + rand() % 6;

        if ( i % 5 == 0 )
            cout << endl;
    }

    return 0;
}