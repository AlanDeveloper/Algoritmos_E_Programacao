#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    float x1;

    printf("Digite um valor: ");
    scanf("%d", &x);

    printf("Raíz quadrada de %d é %.2f", x, sqrt(x));
    return 0;
}