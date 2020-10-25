#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x = 9.0, y = 2.0;
    int x1 = x, y1 = y;

    printf("Divisão de %.1f / %.1f = %.1f", x, y, x / y);
    printf("\nResto da divisão de %.1f / %.1f = %d", x, y, x1 % y1);
    return 0;
}