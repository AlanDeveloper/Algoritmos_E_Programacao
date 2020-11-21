#include <stdio.h>

int main()
{
    float numbers[10], n;
    int len = sizeof(numbers) / sizeof(numbers[0]), c = 0;

    for (size_t i = 0; i < len; i++) {
        printf("Digite um valor: ");
        scanf("%f", &numbers[i]);
    }

    printf("Digite o valor a ser procurado: ");
    scanf("%f", &n);
    for (size_t i = 0; i < len; i++) {
        if (numbers[i] == n) {
            printf("Valor encontrado!\nNúmero: %.2f Posição: %d", n, i);
            c++;
        }
    }

    if(c == 0) {
        printf("Valor não encontrado");
    }

    return 0;
}