#include <stdio.h>

int main()
{
    int n = 20, i, v[n], v2[n], detachment = 3, aux = 0;

    for (size_t i = 0; i < n; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        if(detachment > 0) {
            v2[i] = v[n-detachment];
            detachment--;
        } else {
            v2[i] = v[aux];
            aux++;
        }
    }

    printf("Vetor 1:\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }

    printf("\nVetor 2:\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", v2[i]);
    }
    
    return 0;
}