#include <iostream>

using namespace std;


float esfera(float);
float area(float);

float pi = 3.1416;


int main(){
    float radio, areaResultado, esferaResultado;

    cout << "Digita el radio de la circunferencia: ";
    cin >> radio;

    areaResultado = area(radio);
    cout << "El area de tu circunferencia es: " << areaResultado << endl;

    esferaResultado = esfera(radio);
    cout << "La esfera de tu circunferencia es: " << esferaResultado << endl;

    return 0;
}


float esfera(float radio){
    float resultado;

    resultado = (4 * pi) * (radio * radio);
    return resultado;
}


float area(float radio){
    float resultado;

    resultado = pi * (radio * radio);
    return resultado;
}