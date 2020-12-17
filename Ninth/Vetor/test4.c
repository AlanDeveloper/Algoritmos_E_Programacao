#include <stdio.h>

int main()
{
    int n, n2 = 40, pos[n2], i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (size_t i = 0; i < n2; i++)
    {
        switch (i % 4)
        {
        case 0:
            pos[i] = n;
            break;
        
        default:
            pos[i] = 0;
            break;
        }
    }

    for (size_t i = 0; i < n2; i++)
    {
        printf("Posicao: %d | Valor: %d\n", i, pos[i]);
    }

    return 0;
}