// Fig. 2.7; fig02_07.cpp
//Programa del promedio de grupo con repeticion controlada por contador
#include <iostream>

using namespace std;

int main(){
    int total,
        gradeCounter,
        grade,
        average;
    
    total = 0;
    gradeCounter = 1;

    while( gradeCounter <= 10 ){
        cout << "Introduzca la calificacion: ";
        cin >> grade;
        total += grade;
        gradeCounter += 1;
    }

    average = total / 10;
    cout << "\nEl promedio del grupo es: " << average << endl;

    return 0;
}