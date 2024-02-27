// Fig. 2.26: fig02_26.cpp
// Empleo de la instruccion break en una estructura for
#include <iostream>

using namespace std;

int main(){
    int x;

    for ( x = 1; x <= 10; x++ ){
        if ( x == 5 )
            break;
        
        cout << x << " ";
    }

    cout << "\nSalida del ciclo con el valor de x en: " << x << endl;
    return 0;
}