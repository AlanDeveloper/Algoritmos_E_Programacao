#include <stdio.h>

int main()
{
    int notas[10], media = 0,c = 0;

    for (size_t i = 0; i < 10; i++)
    {
        printf("Nota de um aluno: ");
        scanf("%d", &notas[i]);
    };

    for (size_t i = 0; i < 10; i++)
    {
        if (notas[i] >= 7)
        {
            c++;
        }
        media += notas[i];
    }
    media = media/10;
    printf("Media da turma: %d\nAlunos acima da media: %d", media, c);

    return 0;
}