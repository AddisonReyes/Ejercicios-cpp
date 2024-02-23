#include <stdio.h>
#include <string.h>

int main(){
    char string1[60];
    char string2[60];

    printf("Escribe una frase: ");
    gets(string1);

    printf("Escribe otra frase: ");
    gets(string2);

    if (strcmp(string1, string2) == 0)
        printf("Ambos strings son iguales.");
    else{
        printf("Los strings son distintos.");

        strcat(string1, string2);
        printf("\nLa concatenacion de los dos string es: %s", string1);
    }

    return 0;
}