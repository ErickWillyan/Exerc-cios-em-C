#include <stdio.h>
#include <string.h>

int main()
{
    int number, inicial, final, resultado;

    printf("Insira um número: ");
    scanf("%d", &number);

    printf("Multiplicador inicial: ");
    scanf("%d", &inicial);

    printf("Multiplicador final: ");
    scanf("%d", &final);

    while (inicial <= final)
    {

        resultado = number * inicial;
        if (resultado % 2 == 0)
        {
            printf("\n %d x %d = %d", number, inicial, resultado);
        }
        inicial++;
    }

    return 0;
}