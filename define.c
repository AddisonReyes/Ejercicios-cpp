#include <stdio.h>

#define PIZZACOST 1.6
const char NEWLINE = '\n';

int main(){
    float numberOfSlices = 3;
    float costoPizzas;

    costoPizzas = PIZZACOST * numberOfSlices;

    printf("%c", NEWLINE);
    printf("El costo de la pizzas es: %f", costoPizzas);
    printf("%c", NEWLINE);

    return 0;
}