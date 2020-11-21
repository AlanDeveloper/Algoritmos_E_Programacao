#include <stdio.h>

int main()
{
    int m[10], aux;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &m[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        aux = m[i + 5];
        m[i + 5] = m[i];
        m[i] = aux;
    }

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", m[i]);
    }

    return 0;
}