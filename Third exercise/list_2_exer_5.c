#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Digite sua nota: ");
    scanf("%d", &number);

    if (number >= 70) {
        printf("Aprovado");
    }
    if (number >= 30 && number < 70) {
        printf("Exame");
    }
    if(number < 30) {
        printf("Reprovado");
    }
    return 0;
}