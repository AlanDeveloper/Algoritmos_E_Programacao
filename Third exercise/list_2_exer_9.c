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

    if(a > b && a > c) {
        if((b * b + c * c) == a * a) {
            printf("É um triângulo retângulo!");
        } else {
            printf("Não é um triângulo retângulo!");
        }
    } else if(b > a && b > c) {
        if((a * a + c * c) == b * b) {
            printf("É um triângulo retângulo!");
        } else {
            printf("Não é um triângulo retângulo!");
        }
    } else if (c > a && c > b) {
        if((a * a + b * b) == c * c) {
            printf("É um triângulo retângulo!");
        } else {
            printf("Não é um triângulo retângulo!");
        }
    } else {
        printf("Não é um triângulo retângulo!");
    }
    return 0;
}