#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1, total = 0;

    do {
        printf("%d + %d = %d\n", total, n, total + n);
        total += n;
        n++;
    } while (n <= 500);

    return 0;
}