#include <stdio.h>

int main()
{
    int i, j, x = 4, y = 6, a[x][y], b[x][y], s[x][y], d[x][y];

    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            printf("Digite valor para A(%d,%d): ", i, j);
            scanf("%d", &a[i][j]);
            printf("Digite valor para B(%d,%d): ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
            d[i][j] = a[i][j] - b[i][j];
        }
        
    }
    printf("\n");

    // Visualizar matriz
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }

    return 0;
}