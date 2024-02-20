#include <stdio.h>


int opt1 = 0;
int opt2 = 2;


int main(){
    // Este programa genera menus segun lo que el usuario elija
    if (opt1 == 0){
        printf("Usted eligio la opcion 0, vera nuestro menu de bebidas elija una: ");

        printf("\n\n1 ~ CocaCola cero\n2 ~ CocaCola\n3 ~ ZevenUp\n\n");
        
        if (opt2 == 0)
            printf("Usted eligio una CocaCola cero.");

        else if (opt2 == 1)
            printf("Usted eligio un CocaCola.");

        else if (opt2 == 2)
            printf("Usted eligio un ZevenUp.");

        else
            printf("Opcion invalida.");
    }


    return 0;
}