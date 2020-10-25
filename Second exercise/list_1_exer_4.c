#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y;
    int x1, y1;

    printf("Digite o primeiro valor: ");
    scanf("%f", &x);

    printf("Digite o segundo valor: ");
    scanf("%f", &y);

    printf("Soma de %.1f + %.1f = %.1f", x, y, x + y);
    printf("\nDivisão de %.1f / %.1f = %.1f", x, y, x / y);
    x1 = x;
    y1 = y;
    printf("\nResto da divisão de %.1f / %.1f = %d", x, y, x1 % y1);
    return 0;
}