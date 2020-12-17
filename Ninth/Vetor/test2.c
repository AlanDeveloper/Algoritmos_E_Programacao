#include <stdio.h>

int main()
{
    int n = 20, vetor[n], aux[n], cnt = 0, i;

    for (size_t i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        if (vetor[i] % 2 != 0) {
            cnt++;
            aux[i] = i;
        } else {
            aux[i] = -1;
        }
    }
    
    printf("Numero de impares: %d\n", cnt);
    for (size_t i = 0; i < n; i++)
    {
        if(aux[i] != -1) {
            printf("Posicao: %d\n", aux[i]);
        }
    }
    

    return 0;
}