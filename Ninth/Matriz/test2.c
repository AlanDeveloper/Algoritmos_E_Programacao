#include <stdio.h>

int main()
{
    int n = 2, A[n][n], i, j, d1 = 0, d2 = 1, d1_total = 1, d2_total = 1;

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
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(j == d1) {
                d1_total *= A[i][j];
            } else if (j == d2) {
                d2_total *= A[i][j];
            }
        }
        d1++;
        d2--;
    }
    printf("Determinante: %d", d1_total - d2_total);

    return 0;
}