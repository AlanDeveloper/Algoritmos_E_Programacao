#include <stdio.h>
#include <stdlib.h>

int main()
{
    float wishes, wishesV, wishesW, wishesN;

    printf("Digite o número total de votos: ");
    scanf("%f", &wishes);

    printf("Digite o número de votos válidos: ");
    scanf("%f", &wishesV);

    printf("Digite o número de votos brancos: ");
    scanf("%f", &wishesW);

    printf("Digite o número de votos nulos: ");
    scanf("%f", &wishesN);

    printf("Número total de eleitores: %.0f\nVotos válidos: %.2f%% Votos brancos: %.2f%% Votos nulos: %.2f%%", wishes, wishesV * 100 / wishes, wishesW * 100 / wishes, wishesN * 100 / wishes);
    return 0;
}