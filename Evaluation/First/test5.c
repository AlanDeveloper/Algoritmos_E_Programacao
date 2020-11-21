#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, n5, media;
    float a = 2.5, b = 2, c = 1;

    printf("Nota da primeira avaliação teórica: ");
    scanf("%f", &n1);
    printf("Nota da segunda avaliação teórica: ");
    scanf("%f", &n2);
    printf("Nota da primeira avaliação prática: ");
    scanf("%f", &n3);
    printf("Nota da segunda avaliação prática: ");
    scanf("%f", &n4);
    printf("Nota quantitativa: ");
    scanf("%f", &n5);

    media = ((n1/a + n2/a + n3/b + n4/b + n5/c) / 5) * 10;

    if(media >= 7) {
        printf("Aprovado com media %.2f", media);
    } else if(media >= 3 || media < 7) {
        printf("Exame com media %.2f", media);
    } else {
        printf("Reprovado com media %.2f", media);
    }

    return 0;
}