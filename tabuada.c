#include <stdio.h>
#include <string.h>

int main()
{
    int number;

    printf("Insira um número: ");
    scanf("%d", &number);

    for (int i = 0; i < 10; i++)
    {
        printf("\n %d x %d = %d", number, i + 1, number * (i + 1));
    }

    return 0;
}