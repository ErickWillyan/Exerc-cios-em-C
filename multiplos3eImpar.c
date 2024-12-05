#include <stdio.h>

int main()
{

    int soma;

    for (int i = 0; i <= 500; i++)
    {
        if (i % 2 != 0)
        {
            if (i % 3 == 0)
            {
                soma += i;
            }
        }
    }

    printf("Soma %d", soma);

    return 0;
}