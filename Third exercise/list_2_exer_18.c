#include <stdio.h>
#include <stdlib.h>

int main()
{
    int side;
    float size;

    printf("Digite o número de lados: ");
    scanf("%d", &side);
    printf("Digite o tamanho dos lados: ");
    scanf("%f", &size);

    switch (side) {
    case 3:
        printf("Área do polígono: %.2f", size * size * 1.73 / 4);
        break;
    case 4:
        printf("Área do polígono: %.2f", size * size);
        break;
    case 6:
        printf("Área do polígono: %.2f", 6 * size * size * 1.73 / 4);
        break;

    default:
        printf("Não sei calcular a área");
    }
    return 0;
}