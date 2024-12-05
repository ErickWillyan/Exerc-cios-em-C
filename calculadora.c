#include <stdio.h>

int main(void)
{
    int valor1;
    int valor2;
    int operacacao;

    printf("Soma = 1\n");
    printf("Subtraçãoo = 2:\n");
    printf("multiplicação = 3\n");
    printf("Divisão = 4\n");
    printf("Sair = 5 \n");
    printf("Selecione a operação:");
    scanf("%d", &operacacao);

    if (operacacao == 5)
    {
        printf("Programa encerrado");
        return 0;
    }

    if (operacacao >= 1 && operacacao <= 4)
    {
        printf("Digite o primeiro valor:");
        scanf("%d", &valor1);
        printf("Digite o segundo valor:");
        scanf("%d", &valor2);
        switch (operacacao)
        {
        case 1:
            printf("O valor da soma é: %d", valor1 + valor2);
            break;
        case 2:
            printf("O valor da subtração é: %d", valor1 - valor2);
            break;
        case 3:
            printf("O valor da multiplicação é: %d", valor1 * valor2);
            break;
        case 4:
            if (valor2 == 0)
            {
                printf("Não é possível dividir por 0");
                return 0;
            }
            printf("O valor da divisão é: %d", valor1 / valor2);
            break;
        }
    }
    else
    {
        printf("Esta operação não existe");
        return 0;
    }
}