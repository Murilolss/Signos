#include <stdio.h>
#include <stdlib.h>
#include "signos.c"

// Programa para saber qual é o signo do Usuário 
// Dupla: Murilo Leandro e Liliane Perim
// Data de Criação: 22/04/2026
// Ultima Modificação: 23/04/2026

void menu();

int main()
{
    int dia, mes, escolha;

    do
    {
        system("cls");
        menu();
        printf("\nSelecione uma Opcao: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            system("cls");
            printf("Digite seu dia de nascimento: ");
            scanf("%d", &dia);

            printf("Digite seu mes de nascimento: ");
            scanf("%d", &mes);

            // Função Prara saber o Signo
            signos(dia, mes);

            break;

        case 2:
            printf("Programa Encerrado");
            break;

        default:
            system("cls");
            printf("Opcao Invalida\n");
            break;
        }

    } while (escolha != 2);
    return 0;
}

void menu()
{
    printf("------------- Menu -------------");
    printf("\nDigite 1 para Saber seu Signo");
    printf("\nDigite 2 para Encerrar o Programa");
}