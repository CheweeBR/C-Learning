#include <stdio.h>
#include <stdlib.h>

int mult(int, int);
int iv(int, int);
int soma(int, int);
int sub(int, int);
int main(int qntd, char *parametros[])
{
    int n1, n2;
    char operador;
    operador = parametros[2][0];
    n1 = atoi(parametros[1]);
    n2 = atoi(parametros[3]);
    printf("%d %c %d\n", n1, parametros[2][0], n2);
    if (qntd != 4)
    {
        printf("Quantidade de parametros incorretos.");
        return 0;
    }
    else
    {
        if ((operador != '-') && (operador != '+') && (operador != '/') && (operador != 'x'))
        {
            printf("Operador incorreto");
            return 0;
        }
        else
        {
            if (operador == '-')
            {
                printf("S %d", sub(n1, n2));
            }
            else
            {
                if (operador == '+')
                {
                    printf("so %d", soma(n1, n2));
                }
                else
                {
                    if (operador == '/')
                    {
                        printf("d %d", iv(n1, n2));
                    }
                    else
                    {
                        printf("m %d", mult(n1, n2));
                        return 0;
                    }
                }
            }
        }
    }
}

int mult(int a, int b)
{
    int calc;
    calc = a * b;
    return calc;
}
int iv(int a, int b)
{
    int calc;
    calc = a - b;
    return calc;
}
int sub(int a, int b)
{
    int calc;
    calc = a - b;
    return calc;
}
int soma(int a, int b)
{
    int calc;
    calc = a + b;
    return calc;
}
