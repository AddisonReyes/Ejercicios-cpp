// Fig. 2.11: fig02_11.cpp
// Analisis de resultado de examen
#include <iostream>

using namespace std;

int main(){
    int passes = 0,
        failures = 0,
        studentCounter = 1,
        result;
    
    while ( studentCounter <= 10 ){
        cout << "Introduzca el resultado (1 = Aprobado, 2 = Reprobado): ";
        cin >> result;

        if ( result == 1 )
            passes += 1;
        else 
            failures += 1;
        
        studentCounter += 1;
    }

    cout << "\nAcreditados: " << passes << endl;
    cout << "Reprobados: " << failures << endl;

    if ( passes > 8 )
        cout << "Aumente la colegiatura" << endl;

    return 0;
}