#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Número é par");
    } else if (number % 2 != 0) {
        printf("Número é ímpar");
    }
    return 0;
}