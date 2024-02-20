#include <stdio.h>


int main(){
    int opt = 1;

    switch (opt){
        case 1:
            printf("Se selecciono la opcion #1.");
            break;
    
        default:
            printf("Opcion invalida.");
            break;
    }

    return 0;
}