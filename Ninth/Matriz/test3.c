#include <stdio.h>

int main()
{
    int n = 5, A[n][n], A2[n][n], vet[n], vet2[n], aux = 0, i, j, d1 = 0, d2 = 4, max = 0, min = 1000;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("Digite um valor: ");
            scanf("%d", &A[i][j]);
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(A[i][j] < 0){
                vet[aux] = i;
                vet2[aux] = j;
                aux++;
            }
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(A[i][j] < 0) {
                A2[i][j] = A[i][j] * -1;
            } else {
                A2[i][j] = A[i][j];
            }

            if(j == d1 && A2[i][j] > max) {
                max = A2[i][j];
            }
            if(j == d2 && A2[i][j] < min) {
                min = A2[i][j];
            }
        }
        d1++;
        d2--;
            
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d ", A2[i][j]);
        }
        printf("\n");
    }
    printf("\nValor maximo: %d", max);
    printf("\nValor minimo: %d", min);

    return 0;
}