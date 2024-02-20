#include <stdio.h>

int main(){
    for (int i = 0; i <= 6; i++){
        printf("pipipi ");//*i;
        //printf("\n");

        if (i == 3)
            continue;

        printf("su\n");
    }
    
    return 0;
}