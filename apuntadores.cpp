#include <iostream>

using namespace std;

int main(){
    int direccion = 3509;
    int direccionDos = 1337;

    int* apuntadorADir;

    apuntadorADir = &direccion;
    *apuntadorADir = 3;

    apuntadorADir = &direccionDos;

    cout << *apuntadorADir << endl;

    return 0;
}