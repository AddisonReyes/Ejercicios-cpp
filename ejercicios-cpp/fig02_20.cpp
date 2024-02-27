// Fig. 2.20: fig02_20.cpp
// Suma con for
#include <iostream>

using namespace std;

int main(){
    int sum = 0;

    for ( int number = 2; number <= 100; number += 2 )
        sum += number;
    
    cout << "La suma es " << sum << endl;

    return 0;
}