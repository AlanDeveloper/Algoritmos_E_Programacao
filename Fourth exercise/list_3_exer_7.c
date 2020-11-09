#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n2, total = 1, fat = 1;
    printf("Informe um valor: ");
    scanf("%d", &n);

    while(n != 1) {
        n2 = n;
        while(n2 != 1) {
            fat *= n2;
            n2--;
        }
        total += fat;
        fat = 1;
        n--;
    }
    printf("Resultado: %d", total);

    return 0;
}