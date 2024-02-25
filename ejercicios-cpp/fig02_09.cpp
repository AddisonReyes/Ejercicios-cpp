// Fig. 2.9: fig02_09.cpp
// Programa de promedio de grupo con repeticion controlada por centinela
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int total,
        gradeCounter,
        grade;
    float average;

    gradeCounter = 0;
    total = 0;

    cout << "Introduzca la calificacion, -1 para terminar: ";
    cin >> grade;

    while ( grade != -1 ){
        total += grade;
        gradeCounter += 1;
        cout << "Introduzca la calificacion, -1 para terminar: ";
        cin >> grade;
    }

    if ( gradeCounter != 0 ){
        average = static_cast< float >( total ) / gradeCounter;
        cout << "\nEl promedio del grupo es: " << setprecision( 2 )
             << setiosflags( ios::fixed | ios::showpoint )
             << average << endl;
    }
    else
        cout << "\nNo se teclearon calificaciones. " << endl;

    return 0;
}