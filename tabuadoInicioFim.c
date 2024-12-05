#include <stdio.h>
#include <string.h>

int main()
{
    int number, inicial, final;

    printf("Insira um número: ");
    scanf("%d", &number);

    printf("Multiplicador inicial: ");
    scanf("%d", &inicial);

    printf("Multiplicador final: ");
    scanf("%d", &final);

    while (inicial <= final)
    {
        printf("\n %d x %d = %d", number, inicial, number * inicial);
        inicial++;
    }

    return 0;
}