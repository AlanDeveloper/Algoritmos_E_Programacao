#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 0, a, b;
    while (c < 2) {
        printf("Informe um número: ");
        scanf("%d", &b);
        if (c != 1) {
            a = b;
        }
        else if (c == 1 && b == 0) {
            c--;
        }
        c++;
    }
    printf("Resultado de %d / %d é %d", a, b, a / b);

    return 0;
}