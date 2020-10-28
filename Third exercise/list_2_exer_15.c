#include <stdio.h>
#include <stdlib.h>

int main()
{
    int heigth, width;

    printf("Digite a altura: ");
    scanf("%d", &heigth);
    printf("Digite a base: ");
    scanf("%d", &width);

    if(heigth == width) {
        printf("Quadrado");
    } else {
        printf("Perímetro: %d\nÁrea: %d", width * 2 + heigth * 2, width * heigth);
    }

    return 0;
}