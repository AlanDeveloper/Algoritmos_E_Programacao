#include <stdio.h>
#include <stdlib.h>

#define FUEL 4.70;

int main()
{
    float oldKM, newKM, liters, value, spent;

    printf("Digite a marcação de KM no início do dia: ");
    scanf("%f", &oldKM);
    
    printf("Digite a marcação de KM no final do dia: ");
    scanf("%f", &newKM);

    printf("Digite o número de litros gastos: ");
    scanf("%f", &liters);

    printf("Digite o valor recebido: ");
    scanf("%f", &value);

    printf("Média de km/l: %.2f", (newKM - oldKM) / liters);
    spent = value - liters * FUEL;
    printf("\nLucro líquido: %.2f", spent);

    return 0;
}