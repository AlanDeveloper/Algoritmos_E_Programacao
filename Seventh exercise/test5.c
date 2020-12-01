#include <stdio.h>

int main()
{
    int i, j, n = 2, g[n][n], sl[n] , sc[n];

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("Digite um valor para G(%d,%d): ", i, j);
            scanf("%d", &g[i][j]);
        }
    }

    // Visualizar matriz
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d ", g[i][j]);
        }
        printf("\n");
    }

    // Vetores sc e sl sendo setados na primeira posição em 16, não sei pq
    for (size_t i = 0; i < n; i++)
    {
        sc[i] = 0;
        sl[i] = 0;
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            sl[i] += g[i][j];
            sc[i] += g[j][i];
        } 
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("Soma das linhas %d: %d\nSoma das colunas %d: %d\n", i, sl[i], i, sc[i]);
    }
    
    return 0;
}