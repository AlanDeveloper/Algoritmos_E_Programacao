#include <stdio.h>

int main()
{
    int x[10], r[10], c = 0;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &x[i]);
    };

    for (size_t i = 0; i < 10; i++)
    {
        if(x[i] < 0) 
        {
            r[c] = x[i];
            c = i + 1;
        }
        
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        if(r[i] < 0)
        {
            printf("%d ", r[i]);
        }
    }

    return 0;
}