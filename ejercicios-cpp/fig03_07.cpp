// Fig. 3.7: fig03_07.cpp
// Enteros desplazados y escalados generados con 1 + rand() % 6
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

int main() {
    for ( int i = 1; i <= 20; i++ ) {
        cout << setw( 10 ) << ( 1 + rand() % 6 );

        if ( i % 5 == 0 ) {
            cout << endl;
        }
    }

    return 0;
}