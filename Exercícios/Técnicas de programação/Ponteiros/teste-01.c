#include "funcoes.h"

int main()
{
    int ano, dia, id;
    printf("\nAno e dia do seu aniversario");
    printf("\nAno: ");
    scanf("%d", &ano);
    printf("Dia: ");
    scanf("%d", &dia);
    id = idade(&ano);
    printf("\n Sua idade: %d", idade);
    troca(&ano, &dia);
    printf("\nEntao o seu dia de aniversario e %d e o ano e %d ", dia, ano);
    return 0;
    // Chewee was here :]
}