#include <stdio.h>

int main()
{
    int contador = -1, idade, maiorIdade = 0, menorIdade = 1000;

    printf("Para finalizar o programa digite 0\n");

    while (contador != 0)
    {
        printf("\nDigite a idade: ");
        scanf("%d", &contador);

        if (contador != 0)
        {
            idade = contador;

            if (idade > maiorIdade)
            {
                maiorIdade = idade;
            }

            if (idade < menorIdade)
            {
                menorIdade = idade;
            }
        }
    }

    printf("\nA maior idade é %d e a menor é %d\n", maiorIdade, menorIdade);

    return 0;
}