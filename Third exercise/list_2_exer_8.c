#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, number3, number4, number5, number6;
    int pair = 0, odd = 0;

    printf("Digite um número: ");
    scanf("%d", &number1);
    printf("Digite um número: ");
    scanf("%d", &number2);
    printf("Digite um número: ");
    scanf("%d", &number3);
    printf("Digite um número: ");
    scanf("%d", &number4);
    printf("Digite um número: ");
    scanf("%d", &number5);
    printf("Digite um número: ");
    scanf("%d", &number6);

    if (number1 % 2 != 0) {
        odd++;
    } else {
        pair++;
    }
    if (number2 % 2 != 0) {
        odd++;
    } else {
        pair++;
    }
    if (number3 % 2 != 0) {
        odd++;
    } else {
        pair++;
    }
    if (number4 % 2 != 0) {
        odd++;
    } else {
        pair++;
    }
    if (number5 % 2 != 0) {
        odd++;
    } else {
        pair++;
    }
    if (number6 % 2 != 0) {
        odd++;
    } else {
        pair++;
    }
    printf("Números ímpares: %d\nNúmeros pares: %d", odd, pair);

    return 0;
}