#include <stdio.h>

int main()
{
    int x[10], y[10];

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");   
        scanf("%d", &x[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        if(i % 2 == 0) {
            y[i] = x[i] * 2;
        } else 
        {
            y[i] = x[i] * 3;
        }
    }

    for (size_t i = 0; i < 10; i++)
    {
        printf("Y(%d) - %d\n", i, y[i]);
    }

    return 0;
}