#include <stdio.h>
#include <time.h>

void troca(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int idade(int a)
{
    int anoAtual, id;
    time_t data_ano;
    time(&data_ano);
    struct tm *data = localtime(&data_ano);
    anoAtual = (data->tm_year + 1900);
    id = a - anoAtual;
    return idade;
}