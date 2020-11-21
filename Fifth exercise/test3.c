#include <stdio.h>

int main()
{
    float x[3], y[3], z[3];
    int len = 3;

    for (size_t i = 0; i < len; i++)
    {
        printf("Digite um valor para o vetor X: ");
        scanf("%f", &x[i]);

        printf("Digite um valor para o vetor Y: ");
        scanf("%f", &y[i]);
    }

    for (size_t i = 0; i < len; i++)
    {
        z[i] = x[i] + y[i];
        printf("%d - %.2f\n", i, z[i]);
    }
    

    return 0;
}