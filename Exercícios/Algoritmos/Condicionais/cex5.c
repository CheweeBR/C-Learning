#include <stdio.h>
#include <conio.h>
int main() {
    int money;
    int getche(void);
    float dolar,real,vld;
    printf("\nValor atual de 1 Dolar em Real: R$");
    scanf("%f", &vld);
    printf("\n[1] Dolar\n[2] Real\n\nDigite a alternativa desejada: ");
    money = getche();
    if (money == 2) {
        printf("\n\nQuantidade em Real: R$");
        scanf("%f", &real);
        dolar = real / vld;
        printf("\nR$%.2f equivale: $%.2f\n ",real,dolar);
    }
    else {
        printf("\n\nQuantidade em Dolar: $");
        scanf("%f", &dolar);
        real = dolar * vld;
        printf("\n$%.2f equivale: R$%.2f\n ",dolar,real);
    }
    return 0;
    //cheweebr was here :}
}