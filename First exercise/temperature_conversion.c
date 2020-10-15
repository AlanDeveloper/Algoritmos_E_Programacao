#include<stdio.h>
#include<stdlib.h>

void main() {
    float celcius, far;

    printf("Digite a temperatura em C: ");
    scanf("%f", &celcius);

    far = (9.00/5.00 * celcius) + 32;
    printf("Temperatura em C: %.2f\nTemperatura em F: %.2f", celcius, far);

    return 0;
}