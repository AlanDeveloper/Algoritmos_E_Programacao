#include <stdio.h>

int main()
{
    int b[10];

    for (size_t i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
        {
            b[i] = 20;
        } else
        {
            b[i] = 10;
        }
    }

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d - %d\n", i, b[i]);
    }

    return 0;
}