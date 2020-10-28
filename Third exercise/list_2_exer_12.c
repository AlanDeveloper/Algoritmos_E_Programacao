#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    int age;

    printf("Digite sua idade: ");
    scanf("%d", &age);

    if(age >= 18 && age <= 67) {
        printf("Pode doar sangue");
    } else {
        printf("Não pode doar sangue");
    }

    if(age < 18 || age > 67) {
        printf("\nNão pode doar sangue");
    } else {
        printf("\nPode doar sangue");
    }

    return 0;
}   