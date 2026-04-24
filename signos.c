#include <stdio.h>
#include <stdlib.h>

// Função para calculo de Signos

// Função system("start ...."): É uma função da linguagem C da biblioteca <stdlib.h> que serve para realizar funções do
// sistema operacional no caso para as imagens eu estou mandando o sistema iniciar(start) a imagem no caminho que eu passei para ele

void signos(int dia, int mes)
{
    if ((dia >= 21 && mes == 03) || (dia <= 19 && mes == 04))
    {
        system("start \"\" \"..\\images\\1.png\"");
    }

    if ((dia >= 20 && mes == 04) || (dia <= 20 && mes == 05))
    {
        system("start \"\" \"..\\images\\5.png\"");
    }

    if ((dia >= 21 && mes == 05) || (dia <= 20 && mes == 06))
    {
        system("start \"\" \"..\\images\\7.png\"");
    }

    if ((dia >= 21 && mes == 06) || (dia <= 22 && mes == 07))
    {
        system("start \"\" \"..\\images\\4.png\"");
    }

    if ((dia >= 23 && mes == 07) || (dia <= 22 && mes == 8))
    {
        system("start \"\" \"..\\images\\6.png\"");
    }

    if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9))
    {
        system("start \"\" \"..\\images\\11.png\"");
    }

    if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10))
    {
        system("start \"\" \"..\\images\\9.png\"");
    }

    if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11))
    {
        system("start \"\" \"..\\images\\2.png\"");
    }

    if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12))
    {
        system("start \"\" \"..\\images\\10.png\"");
    }

    if ((dia >= 22 && mes == 12) || (dia <= 20 && mes == 01))
    {
        system("start \"\" \"..\\images\\8.png\"");
    }

    if ((dia >= 21 && mes == 01) || (dia <= 18 && mes == 02))
    {
        system("start \"\" \"..\\images\\12.png\"");
    }

    if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3))
    {
        system("start \"\" \"..\\images\\3.png\"");
    }
}