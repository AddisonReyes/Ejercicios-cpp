#include <stdio.h>


int power(int base, int n);


int main(){
    for (int i = 0; i < 10; i++)
        printf("n = %d es el resultado de la potencia \'%d\'\n", i, power(2, i));
    
    return 0;
}


int power(int base, int n){
    int aux = 1;

    for (int i = 0; i < n; i++){
        aux *= base;
    }
    
    return aux;
}