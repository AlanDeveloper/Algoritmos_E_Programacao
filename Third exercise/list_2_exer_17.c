#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opr;
    float number1, number2;

    printf("Digite a operação(+#-#*#/): ");
    scanf("%c", &opr);
    printf("Digite um número: ");
    scanf("%f", &number1);
    printf("Digite um número: ");
    scanf("%f", &number2);

    switch (opr) {
    case '+':
        printf("Resultado: %.2f", number1 + number2);
        break;
    case '-':
        printf("Resultado: %.2f", number1 - number2);
        break;
    case '*':
        printf("Resultado: %.2f", number1 * number2);
        break;
    case '/':
        printf("Resultado: %.2f", number1 / number2);
        break;
    }

    return 0;
}