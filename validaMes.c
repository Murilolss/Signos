#include <stdio.h>
#include <stdlib.h>

int validaDia(int dia, int mes)
{   
    // Validação de dias para Fevereiro
    if ((dia < 1 || dia > 28) && mes == 2)
    {
        printf("Dia Invalido!");
        return 0;
    }

    // Validação de dias de Abril/Junho/Setembro/Novembro
    else if ((dia < 1 || dia > 30) && (mes == 4 || 6 || 9 || 11))
    {
        printf("Dia Invalido!");
        return 0;
    }
    // Validação de dias para Janeiro/Março/Maio/Julho/Agosto/Outubro/Dezembro
    else if ((dia < 1 || dia > 31) && (mes == 1 || 3 || 5 || 7 || 8 || 10 || 12))
    {
        printf("Dia Invalido!");
        return 0;
    }

    return 1;
}