#include <stdio.h>
#include <stdlib.h>

#define READJ 0.04;

int main()
{
    int salary = 1500;
    float newSalary = salary + salary * READJ;

    printf("Novo salário: %.2f", newSalary);
    return 0;
}