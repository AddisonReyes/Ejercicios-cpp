#include <stdio.h>
#include <time.h>

time_t secods;

int main(){
    secods = time( NULL );
    printf("El numero de horas desde EPOCH, 1ro de enero de 1970 a las 0:00 es: %ldn\n", secods/3600);


    return 0;
}