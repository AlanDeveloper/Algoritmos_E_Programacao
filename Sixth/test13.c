#include <stdio.h>

int main()
{
    int r[5], s[10], x[15];

    for (size_t i = 0; i < 5; i++)
    {
        printf("Escreva um valor para o vetor R: ");
        scanf("%d", &r[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor para o vetor S: ");
        scanf("%d", &s[i]);
    }

    for (size_t i = 0; i < 15; i++)
    {
        if(i < 5) {
            x[i] = r[i];
        } else
        {
            x[i] = s[i-5];
        }
    }

    for (size_t i = 0; i < 15; i++)
    {
        printf("%d  ", x[i]);
    }
    

    return 0;
}