#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n1 = 0, n2 = 1, total = 0, c = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    while(c < n) {
        if(n < 2) {
            total = n;
            break;
        } else if(c == 0) {
            c = 1;
        }
        total = n1 + n2;
        n1 = n2;
        n2 = total;
        c++;
    }
    printf("%d\n", total);


    // do {
    //     if (n < 2)
    //     {
    //         total = n;
    //         break;
    //     }
    //     else if (c == 0)
    //     {
    //         c = 1;
    //     }
    //     total = n1 + n2;
    //     n1 = n2;
    //     n2 = total;
    //     c++;
    // } while (c < n);
    // printf("%d\n", total);

    // for (size_t i = 0; i < n; i++)
    // {
    //     if (n < 2)
    //     {
    //         total = n;
    //         break;
    //     }
    //     else if (i == 0)
    //     {
    //         i = 1;
    //     }
    //     total = n1 + n2;
    //     n1 = n2;
    //     n2 = total;
    // }
    // printf("%d\n", total);

    return 0;
}