#include <stdio.h>

int main()
{
    int n = 20, vetor[n], cnt = 0, i;

    for (size_t i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        if(vetor[i] % 2 != 0) {
            cnt++;
        }
    }
    printf("Numero de impares: %d", cnt);

    return 0;
}