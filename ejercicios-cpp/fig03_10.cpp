// Fig. 3.10: fig03_10.cpp
// Juego de dados
#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int rollDice( void );


int main() {
    enum Status { CONTINUE, WON, LOST };
    Status gameStatus;
    int sum, myPoint;

    srand( time( NULL ) );
    sum = rollDice();

    switch ( sum ) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        
        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;
    
        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            cout << "El puntaje es: " << myPoint << endl;
            break;
    }

    while ( gameStatus == CONTINUE) {
        sum = rollDice();

        if ( sum == myPoint )
            gameStatus = WON;
        
        else
            if ( sum == 7 ) 
                gameStatus = LOST;
    }

    if ( gameStatus == WON )
        cout << "\nEl jugador gana" << endl;
    
    else
        cout << "\nEl jugador pierde" << endl;

    return 0;
}


int rollDice( void ) {
    int die1, die2, worksum;

    die1 = 1 + rand() % 6;
    die2 = 1 + rand() % 6;
    worksum = die1 + die2;

    cout << "\nTirada del jugador '" << die1 << "' + '" << die2
         << "' = " << worksum << endl;

    return worksum;
}