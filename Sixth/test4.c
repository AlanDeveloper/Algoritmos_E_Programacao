#include <stdio.h>

int main()
{
    int c[10];

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &c[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        if(c[i] < 0)
        {
            c[i] = 0;
        }
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d - %d\n", i, c[i]);
    }

    return 0;
}