#include <stdio.h>

int main()
{
    int i, j, n = 4, a[n][n], s1 = 0, s2 = 0,s3 = 0,s4 = 0, aux = 0, aux2 = 1;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("Digite valor para A(%d,%d): ", i, j);
            scanf("%d", &a[i][j]);
        }
        
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if((i == 0 || i == 1) && (j == 0 || j == 1)) {
                s1 += a[i][j];
            }
            if((i == 2 || i == 3) && (j == 2 || j == 3)) {
                s2 += a[i][j];
            }
            if(j <= aux) {
                s3 += a[i][j];
            }
            if(j >= aux2) {
                s4 += a[i][j];
            }
        }
        aux++;
        aux2++;
        
    }
    printf("Soma 1: %d\nSoma 2: %d\nSoma 3: %d\nSoma 4: %d", s1, s2, s3, s4);

    return 0;
}