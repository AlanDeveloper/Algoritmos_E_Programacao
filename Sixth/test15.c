#include <stdio.h>

int main()
{
    int u[10], aux;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &u[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        aux = u[10 - 1 - i];
        u[10 - 1 - i] = u[i];
        u[i] = aux;
    }

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", u[i]);
    }

    return 0;
}