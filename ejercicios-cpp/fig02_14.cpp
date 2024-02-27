// Fig. 2.14: fig02_14.cpp
// Preincremento y posincremento
#include <iostream>

using namespace std;

int main(){
    int c;

    c = 5;
    cout << "Posincremento" << endl;
    cout << c << endl;
    cout << c++ << endl;
    cout << c << endl;

    c = 5;
    cout << "\nPreincremento" << endl;
    cout << c << endl;
    cout << ++c << endl;
    cout << c << endl;

    return 0;
}