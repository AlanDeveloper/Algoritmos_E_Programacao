#include <stdio.h>

int main()
{
    int b[10], x, y[10];

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &b[i]);
    }
    printf("Escreva um valor a ser procurado: ");
    scanf("%d", &x);

    for (size_t i = 0; i < 10; i++)
    {
        if(b[i] == x)
        {
            y[i] = i;
        } else
        {
            y[i] = 0;
        }
        
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        if(y[i] != 0 || i == 0) {
            printf("Encontrado na posição: %d\n", y[i]);
        }
    }
    

    return 0;
}