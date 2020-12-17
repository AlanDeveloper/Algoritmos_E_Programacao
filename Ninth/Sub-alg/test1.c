#include <stdio.h>
#include <math.h>

int main()
{
    int resp, x1, x2, y1, y2, d;


    while (1) {
        printf("Selecione uma funcao: \n1.Calcular e exibir a distância dos pontos em relação à origem \n2.Calcular e exibir a distância dos dois pontos\n3.Identificar e exibir o quadrante em que os pontos se encontram; identifique também se o ponto está na origem ou em um dos eixos\n4.Sair: ");
        scanf("%d", &resp);

        if(resp == 1) {
            printf("Selecione a coordenada x1: ");
            scanf("%d", &x1);
            printf("Selecione a coordenada y1: ");
            scanf("%d", &y1);

            d = sqrt(pow(x1, 2) + pow(y1, 2));
            printf("Distancia em relação à origem: %d", d);
        }
        if(resp == 2) {
            printf("Selecione a coordenada x1: ");
            scanf("%d", &x1);
            printf("Selecione a coordenada y1: ");
            scanf("%d", &y1);
            printf("Selecione a coordenada x2: ");
            scanf("%d", &x2);
            printf("Selecione a coordenada y2: ");
            scanf("%d", &y2);

            d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
            printf("Distancia entre dois pontos: %d", d);
        }
        if(resp == 3) {
            printf("Selecione a coordenada x1: ");
            scanf("%d", &x1);
            printf("Selecione a coordenada y1: ");
            scanf("%d", &y1);
            printf("Selecione a coordenada x2: ");
            scanf("%d", &x2);
            printf("Selecione a coordenada y2: ");
            scanf("%d", &y2);

            if(x1 > 0) {
                if(y1 > 0) {
                    printf("Primeiro ponto se encontra no 1° Quadrante\n");
                } else {
                    printf("Primeiro ponto se encontra no 4° Quadrante\n");
                }
            } else {
                if (y1 > 0) {
                    printf("Primeiro ponto se encontra no 2° Quadrante\n");
                }
                else {
                    printf("Primeiro ponto se encontra no 3° Quadrante\n");
                }
            }
            if(x1 == 0 && y1 ==0) {
                printf("O Primeiro ponto está na origem\n");
            } else if (x1 == 0) {
                printf("O Primeiro ponto está no eixo X\n");
            } else if (y1 == 0) {
                printf("O Primeiro ponto está no eixo Y\n");
            }
            if(x1 > 0) {
                if(y1 > 0) {
                    printf("Segundo ponto se encontra no 1° Quadrante\n");
                } else {
                    printf("Segundo ponto se encontra no 4° Quadrante\n");
                }
            } else {
                if (y1 > 0) {
                    printf("Segundo ponto se encontra no 2° Quadrante\n");
                }
                else {
                    printf("Segundo ponto se encontra no 3° Quadrante\n");
                }
            }
            if (x2 == 0 && y2 == 0) {
                printf("O Segundo ponto está na origem\n");
            }
            else if (x2 == 0) {
                printf("O Segundo ponto está no eixo X\n");
            }
            else if (y2 == 0) {
                printf("O Segundo ponto está no eixo Y\n");
            }
        }
        if(resp == 4) break;
    }

    return 0;
}