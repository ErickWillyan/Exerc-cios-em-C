#include <stdio.h>

int main()
{
    float salario = 0, maiorSalario = 0, percentual = 0, mediaSalario = 0,
          somaSalario = 0, mediaFilhos = 0;
    int filhos = 0, somaFilhos = 0, habitantes = 0, habitantes100 = 0;

    printf("Para sair coloque um salário negativo\n");

    while (salario >= 0)
    {

        printf("\nDigite o salário: ");
        scanf("%f", &salario);

        if (salario >= 0)
        {
            somaSalario += salario;
            habitantes++;

            printf("\nDigite o número de filhos: ");
            scanf("%d", &filhos);

            somaFilhos += filhos;
        }

        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }
        if (salario >= 100)
        {
            habitantes100++;
        }
    }

    if (habitantes > 0)
    {
        mediaFilhos = somaFilhos / habitantes;
        mediaSalario = somaSalario / habitantes;
        percentual = (habitantes100 * 100) / habitantes;
    }

    printf("\nA média de salários é: %.2f", mediaSalario);
    printf("\nA média do número de filhos é: %.2f", mediaFilhos);
    printf("\nO maior salário é: %.2f", maiorSalario);
    printf("\no Percentual de pessoas com salário até R$100,00 é: %.2f ",
           percentual);

    return 0;
}