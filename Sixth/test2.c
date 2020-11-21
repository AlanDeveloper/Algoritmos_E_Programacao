#include <stdio.h>

int main()
{
    int a[10];

    for (size_t i = 0; i < 10; i++)
    {
        a[i] = (i + 1) * 10;
    }

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d - %d\n", i, a[i]);
    }

    return 0;
}