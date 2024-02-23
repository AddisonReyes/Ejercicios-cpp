#include <iostream>

using namespace std;

int main(){
    int grade = 60;

    // If #1
    if ( grade >= 60 )
        cout << "Aprobado" << endl;
    else
        cout << "Reprobado" << endl;
    
    // If #2
    cout << ( grade >= 60 ? "Aprobado" : "Reprobado" ) << endl;

    // If #3
    grade >= 60 ? cout << "Aprobado" << endl : cout << "Reprobado" << endl;

    return 0;
}