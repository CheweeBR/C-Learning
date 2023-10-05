#include <stdio.h>
int main () {
    float celso,fafa;
    printf("\nInsira a temperatura em graus celsius: ");
    scanf("%f", &celso);
    fafa = (9 * celso / 5) + 32;
    printf("\nA temperatura e graus Fahrenheit: %.1f.",fafa);
    return 0;
    //chewee was here
}