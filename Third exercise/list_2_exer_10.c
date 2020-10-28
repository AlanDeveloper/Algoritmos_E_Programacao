#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Digite um número: ");
    scanf("%d", &a);
    printf("Digite um número: ");
    scanf("%d", &b);
    printf("Digite um número: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        if(b > c) {
            printf("Maior número: %d - Menor número: %d", a, c);
        } else {
            printf("Maior número: %d - Menor número: %d", a, b);
        }
    } else if (b > a && b > c) {
        if(a > c) {
            printf("Maior número: %d - Menor número: %d", b, c);
        } else {
            printf("Maior número: %d - Menor número: %d", b, a);
        }
    } else if (c > a && c > b) {
        if(a > b) {
            printf("Maior número: %d - Menor número: %d", c, b);
        } else {
            printf("Maior número: %d - Menor número: %d", c, a);
        }
    } else {
        printf("Números são iguais!");
    }
    return 0;
}