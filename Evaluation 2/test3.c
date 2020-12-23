#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct
    {
        int id;
        char name[100], sector[100];
        float value;
    } product;

    int n = 10, id = 0, resp, i;
    product pd[n];

    for (size_t i = 0; i < n; i++)
    {
        printf("\nDigite o nome do produto: ");
        scanf("%s", &pd[i].name);
        printf("Digite o preço do produto: ");
        scanf("%f", &pd[i].value);
        printf("Digite o setor do produto(higiene, feira, congelados): ");
        scanf("%s", &pd[i].sector);
        printf("/------------------------/");

        pd[i].id = id;
        id++;
    }

    while (1)
    {
        printf("\n\nEscolha uma das opções: \n1.Apresentar todos os dados de todos os elementos\n2.Apresentar todos os nomes e valores do setor Congelados\n3.Receber um valor de código, buscar no seu banco de dados e apresentar o valor do código consultado.\n4.Sair: ");
        scanf("%d", &resp);
        
        if(resp == 1) {
            for (size_t i = 0; i < n; i++)
            {
                printf("\n/------------------------/");
                printf("\nCódigo: %d", pd[i].id);
                printf("\nNome: %s", pd[i].name);
                printf("\nSetor: %s", pd[i].sector);
                printf("\nValor: R$ %.2f", pd[i].value);
            }
        }
        if(resp == 2) {
            for (size_t i = 0; i < n; i++)
            {
                if (!strncmp(pd[i].sector, "congelados", 10))
                {
                    printf("\n/------------------------/");
                    printf("\nNome: %s", pd[i].name);
                    printf("\nValor: R$ %.2f", pd[i].value);
                }
            }
        }
        if(resp == 3) {
            printf("\nDigite um código: ");
            scanf("%d", &resp);

            for (size_t i = 0; i < n; i++)
            {
                if (pd[i].id == resp) {
                    printf("Valor: R$ %.2f", pd[i].value);
                }
            }
        }
        if(resp == 4) break;
    }
    
    return 0;
}