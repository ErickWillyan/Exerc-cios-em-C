
#include <stdio.h>
#include <time.h>

int matriz[10][10], linha[4], coluna[4];

int createArray(void);
int showArray(void);

int main(void)
{
    int l, i, c, somaL[4] = {0}, somaC[4] = {0};
    srand(time(NULL)); // Inicia a função, é chamando só uma vez

    // Preenchendo os vetores de linhas e colunas
    printf("----- Linhas -------\n");
    for (i = 0; i < 4; i++)
    {
        printf("\nSelecione a %dº linha a ser somada:", i + 1);
        scanf("%d", &linha[i]);
        if (linha[i] > 10 || linha[i] <= 0)
        {
            printf("Número inválido");
            printf("\nSelecione a %dº linha a ser somada:", i + 1);
            scanf("%d", &linha[i]);
        }
    }

    printf("\n----- Colunas -------\n");
    for (i = 0; i < 4; i++)
    {

        printf("\nSelecione a %dº coluna a ser somada:", i + 1);
        scanf("%d", &coluna[i]);
        if (coluna[i] > 10 || coluna[i] <= 0)
        {
            printf("Número inválido");
            printf("\nSelecione a %dº coluna a ser somada:", i + 1);
            scanf("%d", &coluna[i]);
        }
    }

    createArray();
    showArray();

    printf("\n");
    printf("\n-------- Soma das linhas ----------\n");
    for (i = 0; i < 4; i++)
    {
        for (c = 0; c < 10; c++)
        {
            int linhaPreencher = linha[i] - 1;
            somaL[i] += matriz[linhaPreencher][c];
        }
        printf("\nSoma da linha %d = %d\n", linha[i], somaL[i]);
    }
    printf("\n");
    printf("\n-------- Soma das colunas ----------\n");
    for (i = 0; i < 4; i++)
    {
        for (l = 0; l < 10; l++)
        {
            int colunaPreencher = coluna[i] - 1;

            somaC[i] += matriz[l][colunaPreencher];
        }
        printf("\nSoma da coluna %d = %d\n", coluna[i], somaC[i]);
    }

    // fim da função
}

int createArray()
{

    for (int l = 0; l < 10; l++)
    {
        for (int c = 0; c < 10; c++)
        {
            int r = rand() % 99; // Atribui números randomicos entre 0-99.
            matriz[l][c] = r;
        }
    }
}

int showArray()
{
    for (int l = 0; l < 10; l++)
    {
        printf("\n");
        for (int c = 0; c < 10; c++)
        {
            printf("%3d |", matriz[l][c]);
        }
    }
}