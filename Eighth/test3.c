#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct
    {
        char name[100];
        long long registration;
        float salary;
    } employee;

    employee emp[80];
    for (size_t i = 0; i < 80; i++)
    {
        printf("/----------------------/\n");
        printf("Digite seu nome: ");
        scanf("%s", &emp[i].name);
        printf("Digite sua matricula: ");
        scanf("%d", &emp[i].registration);
        printf("Digite seu salario bruto: ");
        scanf("%f", &emp[i].salary);
    }

    for (size_t i = 0; i < 80; i++)
    {
        printf("/----------------------/\n");
        printf("Nome: %s | Matricula: %d\n", emp[i].name, emp[i].registration);
        printf("Salario Bruto: %.2f | Deducao do INSS: %.2f | Salario Liquido: %.2f\n", emp[i].salary, emp[i].salary * 0.12, emp[i].salary - emp[i].salary * 0.12);
    }

    return 0;
}