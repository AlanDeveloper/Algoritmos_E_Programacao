#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opt, p = 0, n, n1;

    while(!p) {

        printf("1 - Calcular área do quadrado\n2 - Calcular área do triângulo\n3 - Encerrar programa\nEscolha algumas das opções: ");
        scanf("%d", &opt);

        if(opt == 1) {
            printf("Digite o lado do quadrado: ");
            scanf("%d", &n);
            printf("---------------Resultado: %d---------------\n", n*n);
        }
        if(opt == 2) {
            printf("Digite a altura do triângulo: ");
            scanf("%d", &n);
            printf("Digite a base do triângulo: ");
            scanf("%d", &n1);
            printf("---------------Resultado: %d---------------\n", (n*n1)/2);
        }
        if(opt == 3) {
            p = 1;
        }
    }


    return 0;
}