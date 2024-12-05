#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[3][3], l, c, value;

    printf("Não existem colunas maiores que 3 e menores que 1\n\n");

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            matriz[l][c] = rand() % 20;
        }
    }

    printf("Informe a linha: ");
    scanf("%d", &l);

    printf("Informe a coluna: ");
    scanf("%d", &c);

    printf("Digite um valor: ");
    scanf("%d", &value);

    matriz[l - 1][c - 1] = value;

    for (int l = 0; l < 3; l++)
    {

        for (int c = 0; c < 3; c++)
        {

            printf("| %d ", matriz[l][c]);
            if (c == 2)
            {
                printf("\n");
            }
        }
    }

    return 0;
}