#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    float radius;

    printf("Digite o raio: ");
    scanf("%f", &radius);

    printf("Raio: %.2f\nDiâmetro: %.2f\nComprimento: %.2f\n Área: %.2f", radius, radius*2, 2 * radius * PI, PI * pow(radius, 2));

    return 0;
}