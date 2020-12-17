#include <stdio.h>
#include <math.h>

int main()
{  
    int n, x, y;

    printf("Numero de pontos a adicionar: ");
    scanf("%d", &n);
    
    int vetor[n], min = 1000, aux[n], j, k = 0;

    for (size_t i = 0; i < n; i++)
    {
        printf("\nCoordenada X: ");
        scanf("%d", &x);
        printf("\nCoordenada Y: ");
        scanf("%d", &y);

        vetor[i] = sqrt(pow(x, 2) + pow(y, 2));
    }

    while (1)
    {
        for (size_t i = 0; i < n;i++)
        {
            if(vetor[i] < min && vetor[i] != 1000) {
                min = vetor[i];
                j = i;
            }
        }
        if(j == 1000) {
            break;
        } else {
            aux[k] = min;
            k++;
            vetor[j] = 1000;
            j = 1000;
            min = 1000;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", aux[i]);
    }
    
    
    return 0;
}