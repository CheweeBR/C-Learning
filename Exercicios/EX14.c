#include <stdio.h>
int main() {
    int seg,h,m,s,resto;
    printf("Quantidade de segundos: ");
    scanf("%d", &seg);
    h = seg / 3600;
    resto = seg % 3600;
    m = resto / 60;
    s = resto % 60;
    if (h > 23) {
        printf("%.2d horas %.2d minutos e %.2d segundos.",h,m,s);
    }
    else { 
        printf("Rel%cgio: %.2d:%.2d:%.2d",162,h,m,s);
    }
    return 0;
    //chewee was here =)
}