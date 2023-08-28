#include <stdio.h>
int main()
{
    int n1;
    printf("Escolha um n%cmero inteiro: ", 163);
    scanf("%d", &n1);
    if (n1 >= 0)
    {
        printf("%d %c positivo.", n1, 130);
    }
    else
    {
        printf("%d %c negativo.", n1, 130);
    }
    return 0;
    // chewee was here :]
}