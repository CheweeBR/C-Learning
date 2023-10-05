#include <stdio.h>
#include <stdlib.h>

void separar(float num, int *x, float *y)
{
    *x = (int)num;
    *y = num - *x;
}

int main()
{
    float numero, flot;
    int partinteira;
    printf("Bom dia, por favor insira um numero decimal: ");
    scanf("%f", &numero);
    separar(numero, &partinteira, &flot);
    printf("\n O numero %f possui %i de parte inteira e %f de parte decimal.", numero, partinteira, flot);
    return 0;
    // Chewee was here :]
}