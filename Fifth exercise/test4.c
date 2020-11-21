#include <stdio.h>

int main()
{
    float x[100];
    int len = 100;

    for (size_t i = 0; i < len; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", &x[i]);
    }

    for (size_t i = len - 1, len = -1; i != len; i--)
    {
        printf("%d - %.2f\n", i, x[i]);
    }

    return 0;
}