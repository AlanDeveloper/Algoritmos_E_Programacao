#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, number3;

    printf("Digite um número: ");
    scanf("%d", &number1);
    printf("Digite um número: ");
    scanf("%d", &number2);
    printf("Digite um número: ");
    scanf("%d", &number3);

    if((number1 - number2) < (number1 - number3)) {
        printf("Valor da diferença: %d", number1 - number2);
    } else {
        printf("Valor da diferença: %d", number1 - number3);
    }

    return 0;
}