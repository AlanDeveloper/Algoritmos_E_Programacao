#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Digite sua idade: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("Parabéns, você já tem idade para tira a sua carteira!");
    } else {
        printf("Fim");
    }
    return 0;
}