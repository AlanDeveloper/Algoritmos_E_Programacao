#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Digite um número entre 1 e 7: ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Segunda-feira");
        break;
    case 2:
        printf("Terça-feira");
        break;
    case 3:
        printf("Quarta-feira");
        break;
    case 4:
        printf("Quinta-feira");
        break;
    case 5:
        printf("Sexta-feira");
        break;
    case 6:
        printf("Sábado");
        break;
    case 7:
        printf("Domingo");
        break;
    }
}