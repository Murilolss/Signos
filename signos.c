#include <stdio.h>

void signos(int dia, int mes){
    if ((dia >= 21 && mes == 03) || (dia <= 19 && mes == 04)){
        printf("Aries");
    }
    if ((dia >= 20 && mes == 04) || (dia <= 20 && mes == 05)){
        printf("Touro");
    }
    if ((dia >= 21 && mes == 05) || (dia <= 20 && mes == 06)){
        printf("Gemios");
    }
    if ((dia >= 21 && mes == 06) || (dia <= 22 && mes == 07)){
        printf("Cancer");
    }
    if ((dia >= 23 && mes == 07) || (dia <= 22 && mes == 8)){
        printf("Leao");
    }
    if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)){
        printf("Virgem");
    }
    if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)){
        printf("Libra");
    }
    if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)){
        printf("Escorpiao");
    }
    if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)){
        printf("Sagitario");
    }
    if ((dia >= 22 && mes == 12) || (dia <= 20 && mes == 01)){
        printf("Capricornio");
    }
    if ((dia >=21  && mes == 01) || (dia <= 18 && mes == 02)){
        printf("Aquario");
    }
    if ((dia >=19  && mes == 02) || (dia <= 20 && mes == 03)){
        printf("Peixes");
    }
}