#include <stdio.h>

int main()
{
    int x[10];
    
    for (size_t i = 0; i < 10; i++)
    {
        x[i] = 30;
    }

    for (size_t i = 0; i < 10; i++)
    {
        printf("%d - %d\n", i, x[i]);
    }
    
    
    return 0;
}