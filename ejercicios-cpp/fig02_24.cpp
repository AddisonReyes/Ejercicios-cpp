// Fig. 2.24: fig02_24.cpp
// Empleo de la estructura de repeticion do/while
#include <iostream>

using namespace std;

int main(){
    int counter = 1;

    do {
        cout << counter << " ";
    } while ( ++counter <= 10 );

    cout << endl;

    return 0;
}