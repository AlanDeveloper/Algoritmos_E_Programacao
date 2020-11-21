#include <stdio.h>

int main()
{
    float x[2], y[2], z[2];
    int len = 2, c = 0;

    for (size_t i = 0; i < len; i++)
    {
        printf("Digite um valor para o vetor X: ");
        scanf("%f", &x[i]);

        printf("Digite um valor para o vetor Y: ");
        scanf("%f", &y[i]);
    }

    for (size_t i = 0; i < len; i++)
    {
        for (size_t i2 = 0; i2 < len; i2++)
        {
            if(x[i] == y[i2]) {
                z[i] = x[i];
                c++;
            } else {
                z[i] = 0;
            }
        }
        
    }
    
    for (size_t i = 0; i < len; i++)
    {
        if(z[i] != 0) {
            printf("%.2f", z[i]);
        }
    }
    
    if(c == 0) {
        printf("Não possuí números iguais!");
    }

    return 0;
}