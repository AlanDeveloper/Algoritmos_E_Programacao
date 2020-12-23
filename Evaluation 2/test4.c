#include <stdio.h>

int main()
{
    int n = 5, n2 = 3, n3 = 4, i, j, v1[n][n], v2[n2][n2], v3[n3][n3];
 
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("Digite um valor: ");
            scanf("%d", &v1[i][j]);
        }
    }

    for (size_t i = 0; i < n2; i++)
    {
        for (size_t j = 0; j < n2; j++)
        {
            v2[i][j] = 1;
        }
    }

    for (size_t i = 0; i < n3; i++)
    {
        for (size_t j = 0; j < n3; j++)
        {
            if(j == 3 || i == 3) {
                v3[i][j] = v1[i][j];
            } else {
                v3[i][j] = v1[i][j] * v2[i][j];
            }
        }
    }

    for (size_t i = 0; i < n3; i++)
    {
        for (size_t j = 0; j < n3; j++)
        {
            printf("%d ", v3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}