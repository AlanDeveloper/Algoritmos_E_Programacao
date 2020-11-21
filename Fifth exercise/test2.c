#include <stdio.h>

int main()
{
    float x[100];
    int len = sizeof(x) / sizeof(x[0]);

    for (size_t i = 0; i < len; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", &x[i]);
    }

    for (size_t i = 0; i < len; i++)
    {
        printf("%i - %.2f\n", i, x[i]);
    }
    

    for (size_t i = 0; i < len; i++)
    {
        if (x[i] == 0)
        {
            x[i] = 1;
        }
    }

    printf("------------------\n");
    for (size_t i = 0; i < len; i++)
    {
        printf("%i - %.2f\n", i, x[i]);
    }

    return 0;
}