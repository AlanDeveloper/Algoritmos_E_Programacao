#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kg, days = 0;

    printf("Suprimentos(kg): ");
    scanf("%d", &kg);

    while(kg > 1) {
        kg = kg/2;
        days++;
    }
    printf("Aproximadamente %d dia(s)", days);

    return 0;
}