// Fig. 2.22: fig02_22.cpp
// Conteo de calificaciones indicadas con letras
#include <iostream>

using namespace std;

int main(){
    int grade,
        aCount = 0,
        bCount = 0,
        cCount = 0,
        dCount = 0,
        fCount = 0;
    
    cout << "Introduzca las calificaciones indicadas con letras." << endl
         << "Teclee el caracter \'X\' para terminar la entrada de datos." << endl;
    
    while ( ( grade = cin.get() ) != 'X' ){
        switch ( grade ){
            case 'A':
            case 'a':
                ++aCount;
                break;
            
            case 'B':
            case 'b':
                ++bCount;
                break;
            
            case 'C':
            case 'c':
                ++cCount;
                break;

            case 'D':
            case 'd':
                ++dCount;
                break;

            case 'F':
            case 'f':
                ++fCount;
                break;

            case '\n':
            case '\t':
            case ' ':
                break;

            default:
                cout << "\nCalificacion literal incorrecta. "
                     << "Introduzca una nueva calificacion." << endl;
                break;
        }
    }

    cout << "\n\nLos totales para cada calificacion literal son:"
         << "\nA: " << aCount
         << "\nB: " << bCount
         << "\nC: " << cCount
         << "\nD: " << dCount
         << "\nf: " << fCount
         << endl;

    return 0;
}