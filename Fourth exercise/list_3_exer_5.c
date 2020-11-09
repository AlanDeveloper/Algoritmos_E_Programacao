#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n, total = 0;
   
    printf("Digite o valor A: ");
    scanf("%d", &a);

    printf("Digite o valor N: ");
    scanf("%d", &n);

    while(n >= 0) {
        total += (a + 1);
        n--;
    }
    printf("Valor total: %d", total);

    return 0;
}