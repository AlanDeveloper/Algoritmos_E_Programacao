#include <stdio.h>

int main()
{
    int n = 20, vetor[n], aux[n], cnt = 0, i, total = 1, total2 = 1;

    for (size_t i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            cnt++;
            aux[i] = i;
            total *= vetor[i];
            total2 *= aux[i];
        }
        else
        {
            aux[i] = -1;
        }
    }

    printf("Numero de impares: %d\n", cnt);
    for (size_t i = 0; i < n; i++)
    {
        if (aux[i] != -1)
        {
            printf("Posicao: %d\n", aux[i]);
        }
    }
    if(cnt == 0) {
        total = 0;
        total2 = 0;
    }
    printf("Produtorio dos impares: %d", total);
    printf("Produtorio de posicao: %d", total2);

    return 0;
}