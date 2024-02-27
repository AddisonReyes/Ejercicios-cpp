// Fig. 2.16; fig02_16.cpp
// Repeticion controlada por contador
#include <iostream>

using namespace std;

int main(){
    int counter;

    while ( ++counter <= 10 )
        cout << counter << endl;

    return 0;
}