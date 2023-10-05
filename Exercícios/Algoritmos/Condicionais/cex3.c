#include <stdio.h>
int main() {
    float a1,a2,a3,cont;
    printf("Primeiro lado: ");
    scanf("%f", &a1);
    printf("Segundo lado: ");
    scanf("%f", &a2);
    printf("terceiro lado: ");
    scanf("%f", &a3);
    if (a1 < a2 + a3) {
        cont += 1;
    }
    if (a2 < a1 + a3) {
        cont += 1;
    }
    if (a3 < a2 + a1) {
        cont +=1;
    }
    if (cont == 3) {
        printf("Forma um tri%cngulo!",163);
    }    
    else {
        printf("Nao forma um tri%cngulo!",163);
    }
    return 0;
    //chewee was here :]
}