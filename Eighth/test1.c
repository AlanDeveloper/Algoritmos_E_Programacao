#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct
    {
        char name[100], dt[10];
        long long CPF, RG;
        float Media;
    } student;

    student stds[50];
    for (size_t i = 0; i < 50; i++)
    {
        strcpy(stds[i].name, "João");
        stds[i].CPF = 12345678910;
        stds[i].RG = 12325675;
        strcpy(stds[i].dt, "01/08/1985");
        stds[i].Media = 7.3;
    }

    for (size_t i = 0; i < 50; i++)
    {
        stds[i].Media = (stds[i].Media + 10) / 2;
    }

    for (size_t i = 0; i < 50; i++)
    {
        printf("Nome: %s | Media: %.2f\n", stds[i].name, stds[i].Media);
    }
    
    return 0;
}