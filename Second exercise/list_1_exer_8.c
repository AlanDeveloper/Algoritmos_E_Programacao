#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float height, width, length, result;

    printf("Digite a altura da cozinha: ");
    scanf("%f", &height);

    printf("Digite a largura da cozinha: ");
    scanf("%f", &width);
    
    printf("Digite o comprimento da cozinha: ");
    scanf("%f", &length);
    
    result = width * length * 2;
    result += height * width * 2;
    result += height * length * 2;

    printf("Número de azulejos: %.0f", ceil(result / 1.5));
    return 0;
}