#include <stdio.h>

double mult(double, double);
double sum(double, double);
double sub(double, double);
double div(double, double);

int main(void)
{

    double valor, valor1, valor2;
    char op;

    printf("Informe a operação(+, -, *, /): ");
    scanf("%s", &op);

    printf("\nDigite o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("\nDigite o segundo valor: ");
    scanf("%lf", &valor2);

    switch (op)
    {
    case '+':
        valor = sum(valor1, valor2);
        break;
    case '-':
        valor = sub(valor1, valor2);
        break;
    case '*':
        valor = mult(valor1, valor2);
        break;
    case '/':
        if (valor2 == 0)
        {
            printf("O divisor não pode ser 0)");
        }
        else
        {
            valor = div(valor1, valor2);
        }
        break;
    }

    printf("\nO resultado da operação é %4.lf", valor);
}

double mult(double x, double y) { return x * y; }

double sum(double x, double y) { return x + y; }

double sub(double x, double y) { return x - y; }

double div(double x, double y) { return x / y; }