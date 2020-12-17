#include <stdio.h>
#include <string.h>

int main()
{
    typedef struct
    {
        int id, password;
        char name[100], funct[100];
        float note;
    } person;

    person reitor[1], professor[1], aluno[5];
    int id = 0;

    reitor[0].id = id;
    strcpy(reitor[0].name, "Marcos");
    strcpy(reitor[0].funct, "Reitor");
    reitor[0].password = 123;
    reitor[0].note = 9;

    id++;

    professor[0].id = id;
    strcpy(professor[0].name, "Julio");
    strcpy(professor[0].funct, "Professor");
    professor[0].password = 123;
    professor[0].note = 10;

    id++;
    for (size_t i = 0; i < 5; i++)
    {
        aluno[i].id = id;
        strcpy(aluno[i].name, "Joao");
        strcpy(aluno[i].funct, "Aluno");
        aluno[i].password = 123;
        aluno[i].note = 8;
        
        id++;
    }

    // ----------------------------------------

    int resp;

    printf("Selecione uma funcao:\n1.Reitor  | 2.Professor  | 3.Aluno: ");
    scanf("%d", &resp);

    if(resp == 1) {
        printf("Digite sua senha: ");
        scanf("%d", &resp);
        if(resp == reitor[0].password) {
            
            while(1) {
                printf("1.Visualizar seus dados  | 2.Visualizar dados do professor  | 3.Visualizar dados de aluno  | 4.Editar nota professor  | 5.Sair: ");
                scanf("%d", &resp);

                if(resp == 1) {
                    printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", reitor[0].name, reitor[0].id, reitor[0].password, reitor[0].funct, reitor[0].note); 
                }
                if(resp == 2) {
                    printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", professor[0].name, professor[0].id, professor[0].password, professor[0].funct, professor[0].note); 
                }
                if(resp == 3) {
                    printf("Numero de registro: ");
                    scanf("%d", &resp);
                    
                    for (size_t i = 0; i < 5; i++)
                    {
                        if(resp == aluno[i].id) {
                            printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", aluno[i].name, aluno[i].id, aluno[i].password, aluno[i].funct, aluno[i].note);
                        }
                    }
                    resp = -1;
                }
                if(resp == 4) {
                    printf("Digite a nova nota: ");
                    scanf("%f", &professor[0].note);
                    printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", professor[0].name, professor[0].id, professor[0].password, professor[0].funct, professor[0].note);
                }
                if(resp == 5) break;
            }
        } else {
            printf("Senha incorreta.");
        }
    }
    if(resp == 2) {
        printf("Digite sua senha: ");
        scanf("%d", &resp);
        if (resp == professor[0].password)
        {

            while (1)
            {
                printf("1.Visualizar dados do reitor  | 2.Visualizar seus dados  | 3.Visualizar dados de aluno  | 4.Editar nota do aluno  | 5.Sair: ");
                scanf("%d", &resp);

                if (resp == 1)
                {
                    printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", reitor[0].name, reitor[0].id, reitor[0].password, reitor[0].funct, reitor[0].note);
                }
                if (resp == 2)
                {
                    printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", professor[0].name, professor[0].id, professor[0].password, professor[0].funct, professor[0].note);
                }
                if (resp == 3)
                {
                    printf("Numero de registro: ");
                    scanf("%d", &resp);

                    for (size_t i = 0; i < 5; i++)
                    {
                        if (resp == aluno[i].id)
                        {
                            printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", aluno[i].name, aluno[i].id, aluno[i].password, aluno[i].funct, aluno[i].note);
                        }
                    }
                    resp = -1;
                }
                if (resp == 4)
                {
                    printf("Digite o número de registro: ");
                    scanf("%d", &resp);
                    for (size_t i = 0; i < 5; i++)
                    {
                        if (resp == aluno[i].id)
                        {
                            printf("Digite a nova nota: ");
                            scanf("%f", &aluno[i].note);
                            printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", aluno[i].name, aluno[i].id, aluno[i].password, aluno[i].funct, aluno[i].note);
                        }
                    }
                }
                if (resp == 5)
                    break;
            }
        }
        else
        {
            printf("Senha incorreta.");
        }
    }
    if(resp == 3) {
        printf("Numero de registro: ");
        scanf("%d", &resp);

        id = -1;
        for (size_t i = 0; i < 5; i++)
        {
            if (resp == aluno[i].id) {
                printf("Digite sua senha: ");
                scanf("%d", &resp);
                
                id = 0;
                if(resp == aluno[i].password) {
                    id = i;
                } else {
                    printf("Senha incorreta.");
                }
            }
        }
        if(id == -1) {
            printf("Aluno não encontrado");
        } else if(id != 0) {

            while(1) {
                printf("1.Visualizar dados do reitor  | 2.Visualizar dados do professor  | 3.Visualizar seus dados  | 4.Sair: ");
                scanf("%d", &resp);

                if (resp == 1) {
                    printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", reitor[0].name, reitor[0].id, reitor[0].password, reitor[0].funct, reitor[0].note);
                }
                if (resp == 2) {
                    printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", professor[0].name, professor[0].id, professor[0].password, professor[0].funct, professor[0].note);
                }
                if(resp == 3) {
                    printf("Nome: %s | Identidade: %d | Senha: %d | Funcao: %s | Nota: %.2f\n", aluno[id].name, aluno[id].id, aluno[id].password, aluno[id].funct, aluno[id].note);
                }
                if(resp == 4) break;
            }
        }
    }

    return 0;
}