#include <stdio.h>

int main()
{
    int i, j, x = 12, y = 13, max[x];
    float a[x][y];

    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            printf("Digite valor para A(%d,%d): ", i, j);
            scanf("%f", &a[i][j]);
            if(max[i] < a[i][j]) {
                max[i] = a[i][j];
            } else {
                max[i] = a[i][j];
            }
        }
    }
    
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            a[i][j] = a[i][j]/ max[i];
        }
    }

    // Visualizar matriz
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            printf("%.2f ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}