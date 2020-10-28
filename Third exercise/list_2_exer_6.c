#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, number3, number4, number5, number6;
    int total = 0;

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


    if(number1 % 2 == 0) {
        total += number1;
    }
    if(number2 % 2 == 0) {
        total += number2;
    }
    if(number3 % 2 == 0) {
        total += number3;
    }
    if(number4 % 2 == 0) {
        total += number4;
    }
    if(number5 % 2 == 0) {
        total += number5;
    }
    if(number6 % 2 == 0) {
        total += number6;
    }
    printf("Soma dos números pares: %d", total);

    return 0;
}