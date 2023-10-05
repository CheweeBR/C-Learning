#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,x1,x2,delta;
    x1 = 0;
    x2 = 0;
    printf("CALCULADORA BHASKARA\n--------------------");
    printf("\nAtribua valores\na: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    delta = (b * b) - (4 * a * c);
    delta = (float)sqrt(delta);
    x1 = (-1 * b + delta) / 2 * a;
    x2 = (-1 * b - delta) / 2 * a;
    printf("Resultado X1 = %.1f e X2 = %.1f",x1,x2);
    return 0;
    //chewee was here =]     
}