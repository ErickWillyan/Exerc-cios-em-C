#include <stdio.h>
#include <string.h>

int main()
{
    float numInsert = 1, maiorNum = 0;

    while (numInsert != 0)
    {
        printf("Insira um número: ");
        scanf("%f", &numInsert);

        if (numInsert > maiorNum)
        {
            maiorNum = numInsert;
        }

        printf("\nO maior número é %.2f \n", maiorNum);
    }

    printf("O programa se encerrou");

    return 0;
}