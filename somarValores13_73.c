#include <stdio.h>
#include <string.h>

int main()
{
    int soma = 0, media;

    for (int i = 13; i <= 73; i++)
    {
        soma += i;
    }
    media = soma / 60;
    printf("\n Soma dos valores entre 13 e 73: %d", soma);
    printf("\n Média: %d ", media);

    return 0;
}