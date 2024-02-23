#include <stdio.h>

int main(){
    int n = 20;

    if (n > 10 && n < 20)
        printf("El numero es mayor a 10, pero es menor a 20");
    
    else if (n == 10)
        printf("El numero es 10");

    else if (n > 20)
        printf("El numero es mayor a 20");

    else if (n < 10)
        printf("El numero es menor a 10");

    else
        printf("Error no hay numero");

    return 0;
}