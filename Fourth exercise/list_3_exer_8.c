#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c = 1;
    printf("Digite um número: ");
    scanf("%d", &n);

    while(c <= n) {
        if(n % c == 0) {
            printf("%d ", c);
        }
        c++;
    }

    return 0;
}