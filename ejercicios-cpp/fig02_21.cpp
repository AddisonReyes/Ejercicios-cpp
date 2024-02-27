// Fig. 2.21: fig02_21.cpp
// Calculo de interes compuesto
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
    double amount,
           principal = 1000.0,
           rate = .05;

    cout << "Año" << setw( 21 )
         << "Cantidad depositada" << endl;
    
    for ( int year = 1; year <= 10; year++ ){
        amount = principal * pow( 1.0 + rate, year );
        cout << setw(4) << year
             << setiosflags( ios::fixed | ios::showpoint )
             << setw(21) << setprecision(2)
             << amount << endl;
    }

    return 0;
}