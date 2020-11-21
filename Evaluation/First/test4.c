#include <stdio.h>
#include <stdlib.h>

#define SALARIO 998;

int main()
{
    int qnt, total;

    printf("Número de funcionários: ");
    scanf("%d", &qnt);

    total = 2 * qnt * SALARIO;
    printf("Folha de pagamento: R$ %d,00" , total);

    return 0;
}