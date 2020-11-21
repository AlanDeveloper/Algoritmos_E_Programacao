#include <stdio.h>

int main()
{
    int q[10], max = 0, pos = 0;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &q[i]);

        if(q[i] <= 0)
        {
            i--;
        }
    }

    for (size_t i = 0; i < 10; i++)
    {
        if(q[i] >= max)
        { 
            max = q[i];
            pos = i;
        }
    }

    printf("Q(%d): %d", pos, max);

    return 0;
}