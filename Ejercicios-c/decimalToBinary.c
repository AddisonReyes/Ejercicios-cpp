#include <stdio.h>
#include <stdlib.h>

int array[12];
int num, i;

int main(){
    system("cls");
    system("color 6F");

    printf("Digita un valor decimal: "); scanf("%d", &num);

    for (i = 0; num > 0; i++){
        array[i] = num % 2;
        num /= 2;
    }

    printf("\nConversion: ");
    for (i = i -1; i >= 0; i--){
        printf("%d", array[i]);
    }
    
    return 0;
}