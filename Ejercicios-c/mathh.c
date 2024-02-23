#include <stdio.h>
#include <math.h>

int main(){
    int x;

    float sinX;

    printf("Digita el valor de X: "); 
    scanf("%d", &x);
    printf("var: %d", x);

    sinX = sin(x);
    printf("\nSeno de X: %f", sinX);


    return 0;
}