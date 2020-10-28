#include <stdio.h>
#include <stdlib.h>

#define MAXYEAR 2019
#define MAXDAYS 31

int main()
{
    int day, month, year;

    printf("Digite seu dia de aniversário: ");
    scanf("%d", &day);
    printf("Digite seu mês de aniversário: ");
    scanf("%d", &month);
    printf("Digite seu ano de aniversário: ");
    scanf("%d", &year);

    if (year <= MAXYEAR) {
        if(month >= 1 && month <= 12) {
            if(day >= 1 && day <= MAXDAYS) {
                printf("Data de aniversário válida");
            } else {
                printf("Dia inválido");
            }
        } else {
            printf("Mês inválido");
        }
    } else {
        printf("Ano inválido");
    }
    return 0;
}