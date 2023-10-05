#include <stdio.h>
int main() {
    float n1,n2,n3,media,p1,p2,p3;
    printf("SISTEMA DE M%cDIA PONDERADA\n",144);
    printf("Primeiro valor: ");
    scanf("%f", &n1);
    printf("Peso: ");
    scanf("%f", &p1);
    printf("Segundo valor: ");
    scanf("%f", &n2);
    printf("Peso: ");
    scanf("%f", &p2);
    printf("Terceiro valor: ");
    scanf("%f", &n3);
    printf("Peso: ");
    scanf("%f", &p3);
    media = (n1 * p1) + (n2 * p2) + (n3 * p3);
    media = media / (p1 + p2 + p3);
    printf("Media: %.2f\n ",media);
    return 0;
    //chewee was here =)

}