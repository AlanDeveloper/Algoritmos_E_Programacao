#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = 1, c1 = 0;

    do {
        while(c1 <= 10) {
            printf("%d * %d = %d\n", c, c1, c * c1);
            c1++;
        }
        c++;
        c1 = 0;
    } while (c < 10);

    return 0;
}