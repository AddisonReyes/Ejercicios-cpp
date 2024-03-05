// Fig. 3.12: fig02_12.cpp
// Ejemplo de alcance
#include <iostream>

using namespace std;

void a( void );
void b( void );
void c( void );

int x = 1;


int main() {
    int x = 5;

    cout << "La variable local x en el alcance de main es " << x << endl;

    {
        int x = 7;
        cout << "La variable local x en el alcance interno es " << x << endl;
    }

    cout << "La variable local x en el alcance externo de main es " << x << endl;

    a();
    b();
    c();
    a();
    b();
    c();

    cout << "La variable local x en main es " << x << endl;

    return 0;
}


void a( void ) {
    int x = 25;

    cout << endl << "La variable local x en la funcion a es " << x << " despues de entrar a a" << endl;

    ++x;

    cout << endl << "La variable local x en la funcion a es " << x << " antes de salir de a" << endl;
}


void b( void ) {
    static int x = 50;

    cout << endl << "La variable local estatica x a es " << x << " al entrar a la funcion b" << endl;

    ++x;

    cout << endl << "La variable local estatica x a es " << x << " al salir de la funcion b" << endl;
}


void c( void ) {
    cout << endl << "La variable global x es " << x << " despues de entrar a la funcion c" << endl;

    x *= 10;

    cout << endl << "La variable global x es " << x << " al salir de c" << endl;
}