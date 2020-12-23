#include <stdio.h>

int main()
{
    int n = 5, v1[n][n], v2[n][n], v3[n][n], i, j;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("Digite um valor: ");
            scanf("%d", &v1[i][j]);
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            
            if((j == 2 && i != 2) || (j != 2 && i == 2)) {
                v2[i][j] = 1;
            } else if(j == 2 && i == 2) {
                v2[i][j] = -1;
            } else {
                v2[i][j] = 0;
            }
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            v3[i][j] = v1[i][j] * v2[i][j];
        }
        
    }
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d ", v3[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}