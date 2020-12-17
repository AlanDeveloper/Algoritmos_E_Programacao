#include <stdio.h>

int main()
{
    int n = 5, A[n][n], B[n][n], i, j;

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
            if(A[i][j] % 2 == 0){
                B[i][j] = 0;
            } else {
                B[i][j] = 1;
            }
        }
    }

    printf("Vetor B: \n");
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}