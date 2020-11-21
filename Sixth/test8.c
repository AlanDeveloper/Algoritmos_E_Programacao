#include <stdio.h>

int main()
{
    int a[10], v, c = 0;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Escreva um valor: ");
        scanf("%d", &a[i]);
    }
    printf("Escreva um valor a ser procurado: ");
    scanf("%d", &v);

    for (size_t i = 0; i < 10; i++)
    {
        if(a[i] == v) 
        {
            c++;
        }
    }
    printf("Foi encontrado o valor %d: %d vezes", v, c);

    return 0;
}