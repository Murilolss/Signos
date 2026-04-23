#include <stdio.h>

void signo(int dia, int mes){
    if ((dia >= 21 && mes == 3) || (dia <= 19 && mes == 4)){
        return printf("Aries");
    }
}