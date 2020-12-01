#include <stdio.h>
#include <stdbool.h>

int main()
{
    int i, j, n = 5, d[n][n], x;
    bool found;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("Digite um valor para D(%d,%d): ", i, j);
            scanf("%d", &d[i][j]);
        }
    }

    printf("Digite um valor para procurar: ");
    scanf("%d", &x);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(d[i][j] == x) {
                found = true;
                break;
            }
        }
        
    }
    if(found) {
        printf("Valor %d existe.", x);
    } else {
        printf("Valor %d não existe.", x);
    }
    
    return 0;
}