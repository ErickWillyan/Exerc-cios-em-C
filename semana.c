#include <stdio.h>

int main(void)
{
    int valor1;
    int valor2;
    int operacacao;

    printf("Digite um número de 1 a 7:");
    do
    {
        scanf("%d", &valor1);
        switch (valor1)
        {
        case 1:
            printf("Segunda\n");
            break;
        case 2:
            printf("Terça\n");
            break;
        case 3:
            printf("Quarta\n");
            break;
        case 4:
            printf("Quinta\n");
            break;
        case 5:
            printf("Sexta\n");
            break;
        case 6:
            printf("Sábado\n");
            break;
        case 7:
            printf("Domingo\n");
            break;
        }

    } while (valor1 != 0);
    printf("Programa fechado");
    return 0;
}