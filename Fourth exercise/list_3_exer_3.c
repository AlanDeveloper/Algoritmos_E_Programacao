#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 0, a, b;
    char resp;
    while (c < 2) {
        printf("Informe um número: ");
        scanf("%d", &b);
        if (c != 1) {
            a = b;
        } else if (c == 1 && b == 0) {
            c--;
        } else {
            printf("Resultado de %d / %d é %d", a, b, a / b);
            printf("\nNovo cálculo?(S/N): ");
            scanf("%s", &resp);
            if (resp == "S"[0]) {
                c = -1;
            }
        }
        c++;
    }

    return 0;
}