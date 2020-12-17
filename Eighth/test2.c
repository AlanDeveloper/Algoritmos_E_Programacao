#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct
    {
        char name[100], curse[100];
        long long registration;
        float mt, m1, m2;
    } student;

    student stds[50];
    for (size_t i = 0; i < 50; i++)
    {
        strcpy(stds[i].name, "Julio");
        strcpy(stds[i].curse, "Engenharia de Computação");
        stds[i].m1 = 7.0;
        stds[i].m2 = 8.5;
        stds[i].mt = (stds[i].m1 + stds[i].m2)/2;
    }

    for (size_t i = 0; i < 50; i++)
    {
        printf("Nome: %s | Media: %.2f\n", stds[i].name, stds[i].mt);
    }

    return 0;
}