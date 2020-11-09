#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1, total = 0;
    while(n <= 500) {
        printf("%d + %d = %d\n", total, n, total + n);
        total += n;
        n++;
    }

    return 0;
}