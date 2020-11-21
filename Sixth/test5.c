#include <stdio.h>

int main()
{
    int d[10], e[10];

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &d[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        e[i] = d[i];
    }
    

    for (size_t i = 0; i < 10; i++)
    {
        printf("D(%d) - %d\n", i, d[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        printf("E(%d) - %d\n", i, d[i]);
    }

    return 0;
}