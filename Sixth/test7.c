#include <stdio.h>

int main()
{
    int z[10], w[10];

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &z[i]);
    }

    for (size_t i = 9, c = 0; i != -1; i--, c++)
    {
        w[c] = z[i];
    }
    

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d - %d\n", i, w[i]);
    }

    return 0;
}