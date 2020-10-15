#include <stdio.h>
#include <stdlib.h>

void main() {
    float n1, n2, n3;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    getchar();

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    getchar();

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    getchar();

    printf("Notas: %.2f, %.2f e %.2f\n", n1, n2, n3);
    printf("Média aritmética: %.2f Média harmônica: %.2f ", (n1 + n2 + n3) / 3, 3 / (1 / n1 + 1 / n2 + 1 / n3));
    return 0;
}