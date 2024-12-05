#include <stdio.h>

int main()
{

    int num, num0_25 = 0, num26_50 = 0, num51_75 = 0, num76_100 = 0;

    while (num >= 0)
    {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num >= 26 && num <= 50)
        {
            num26_50 += num;
        }
        if (num >= 51 && num <= 75)
        {
            num51_75 += num;
        }
        if (num >= 76 && num <= 100)
        {
            num76_100 += num;
        }
        if (num >= 0 && num <= 50)
        {
            num0_25 += num;
        }
    }

    printf("Soma dos números entre 0 e 25 = %d", num0_25);

    return 0;
}
