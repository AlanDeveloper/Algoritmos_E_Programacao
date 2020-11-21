#include <stdio.h>
#include <stdlib.h>

int main()
{
    int exit = 1, day;

    while(exit) {
        printf("Digite um valor de 1 a 7: ");
        scanf("%d", &day);

        switch (day)
        {
        case 1:
            printf("Domingo!\n");
            break;
        case 2:
            printf("Segunda-feira!\n");
            break;
        case 3:
            printf("Terça-feira!\n");
            break;
        case 4:
            printf("Quarta-feira!\n");
            break;
        case 5:
            printf("Quinta-feira!\n");
            break;
        case 6:
            printf("Sexta-feira!\n");
            break;
        case 7:
            printf("Sábado!\n");
            break;
        
        default:
            printf("Valor inválido!\n");
            break;
        }

        printf("Deseja sair do programa?\n0 - Sim\n1 -Não: ");
        scanf("%d", &exit);
    }
}