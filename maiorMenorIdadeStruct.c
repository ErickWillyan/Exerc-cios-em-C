#include <stdio.h>

#define size 3

typedef struct
{
    char nome[50];
    float peso;
    float altura;
    int idade;
    char tipoSanguineo[3];
} pessoas;

int main(void)
{
    pessoas reg_pessoas[size];
    double maior_idade, menor_idade, menor_altura, maior_altura, menor_peso,
        maior_peso;

    for (int i = 0; i < 3; i++)
    {
        printf("\n--------------- Informe seus dados ------------\n");
        printf("\nDigite seu nome:");
        scanf("%s", reg_pessoas[i].nome);

        printf("\nInforme seu peso:");
        scanf("%f", &reg_pessoas[i].peso);

        printf("\nInforme sua altura:");
        scanf("%f", &reg_pessoas[i].altura);

        printf("\nInforme sua idade:");
        scanf("%d", &reg_pessoas[i].idade);

        printf("\nInforme seu tipo sanguíneo:");
        scanf("%s", reg_pessoas[i].tipoSanguineo);
    }

    maior_idade = reg_pessoas[0].idade;
    maior_peso = reg_pessoas[0].peso;
    maior_altura = reg_pessoas[0].altura;
    menor_idade = reg_pessoas[0].idade;
    menor_peso = reg_pessoas[0].peso;
    menor_altura = reg_pessoas[0].altura;

    for (int i = 0; i < 3; i++)
    {
        if (maior_idade < reg_pessoas[i].idade)
        {
            maior_idade = reg_pessoas[i].idade;
        }
        if (menor_idade > reg_pessoas[i].idade)
        {
            menor_idade = reg_pessoas[i].idade;
        }
        if (maior_altura < reg_pessoas[i].altura)
        {
            maior_altura = reg_pessoas[i].altura;
        }
        if (menor_altura > reg_pessoas[i].altura)
        {
            menor_altura = reg_pessoas[i].altura;
        }
        if (maior_peso < reg_pessoas[i].peso)
        {
            maior_peso = reg_pessoas[i].peso;
        }
        if (menor_peso > reg_pessoas[i].peso)
        {
            menor_peso = reg_pessoas[i].peso;
        }
    }
    printf("\n maior peso %.2f \n", maior_peso);
    printf("\n maior altura %.2f \n", maior_altura);
    printf("\n maior idade %.2f \n", maior_idade);
    printf("\n menor peso %.2f \n", menor_peso);
    printf("\n menor altura %.2f \n", menor_altura);
    printf("\n menor idade %.2f \n", menor_idade);
}
