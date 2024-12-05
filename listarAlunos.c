#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    float nota;
} aluno;

int main()
{
    aluno alunos[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("\ninforme a nota do aluno: ");
        scanf("%f", &alunos[i].nota);
        printf("\n-------------------\n");
    }

    printf("\n----------------------Alunos e notas-----------------------\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Aluno: %s ", alunos[i].nome);
        printf("| Nota: %.2f \n\n", alunos[i].nota);
    }

    return 0;
}