#include <stdio.h>
#include <string.h>

int main()
{
    float listaCompra, preco = 1;

    printf("Para finalizar a lista digite zero\n");

    while (preco != 0)
    {
        printf("\nInforme o preço dos seus produtos: ");
        scanf("%f", &preco);
        listaCompra += preco;
    }

    printf("Preço da lista de compras: %.2f", listaCompra);

    return 0;
}