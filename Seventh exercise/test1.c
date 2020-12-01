#include <stdio.h>

int main()
{
    int i, j, n = 5, m[n][n];

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("Digite um valor para M(%d,%d): ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    // Visualizar matriz
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    // Somas
    int row3 = 0, column2 = 0, mainDiagonal = 0, secDiagonal = 0, total = 0;
    int aux = 4;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(i == 3) {
                row3 += m[i][j];
            }
            if(j == 2) {
                column2 += m[i][j];
            }
            if(i == j) {
                mainDiagonal += m[i][j];
            }
            if(j == aux) {
                secDiagonal += m[i][j];
                aux--;
            }
            total += m[i][j];
        }
    }
    printf("Linha 3: %d\nColuna 2: %d\nDiagonal Principal: %d\nDiagonal Secundaria: %d\nTotal: %d", row3, column2, mainDiagonal, secDiagonal, total);    
    
    return 0;
}