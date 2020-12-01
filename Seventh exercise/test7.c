#include <stdio.h>

int main()
{
    int i, j, x = 2, y = 3, g[x], m[x][y], simple = 0, doublee = 0, triple = 0, aux = 0;

    for (size_t i = 0; i < x; i++)
    {
        printf("Digite um valor para o gabarito das colunas 1, 2 e 3 em sequência: 0 - Não apostar 1 - Apostar: ");
        scanf("%d", &g[i]);
    }
    printf("------------------------\n");
    for (size_t i = 0; i < x; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            if(j == 0) {
                printf("Apostar na coluna 1:\n0 - Não apostar\n1 - Apostar: ");
                scanf("%d", &m[i][j]);
                if(m[i][j]) {
                    aux++;
                }
            }
            if(j == 1) {
                printf("Apostar na coluna 2:\n0 - Não apostar\n1 - Apostar: ");
                scanf("%d", &m[i][j]);
                if(m[i][j]) {
                    aux++;
                }
            }
            if(j == 2) {
                printf("Apostar na coluna 3:\n0 - Não apostar\n1 - Apostar: ");
                scanf("%d", &m[i][j]);
                if(m[i][j]) {
                    aux++;
                }
            }
        }
        printf("------------------------\n");

        if(aux == 1) {
            simple ++;
            aux = 0;
        } else if(aux == 2) {
            doublee++;
            aux = 0;
        } else {
            triple++;
            aux = 0;
        }
    }
    printf("Número de apostas simples: %d\nNúmero de apostas duplas: %d\nNúmero de apostas triplas: %d\n", simple, doublee, triple);

    return 0;
}