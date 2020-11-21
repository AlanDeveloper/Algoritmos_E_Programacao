#include <stdio.h>

int main()
{
    int c[10], a, cont = 0;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &c[i]);
    }
    printf("Escreva um valor a ser procurado: ");
    scanf("%d", &a);

    for (size_t i = 0; i < 10; i++)
    {
        if(c[i] == a)
        {
            cont = 1;
        }
    }

    if (cont == 1)
    {
        printf("Achei");
    } else
    {
        printf("Não achei");
    }
    

    return 0;
}