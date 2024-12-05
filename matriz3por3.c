#include <stdio.h>

int main()
{
    int matriz[3][3], soma = 0;

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            printf("Digite um valor: ");
            scanf("%d", &matriz[l][c]);
        }
    }

    for (int l = 0; l < 3; l++)
    {
        for (int c = 0; c < 3; c++)
        {
            soma += matriz[l][c];
        }
    }

    printf("\nA soma é %d", soma);

    return 0;
}