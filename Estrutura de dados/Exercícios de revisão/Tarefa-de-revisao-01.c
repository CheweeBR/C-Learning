// - Defina o tipo de dados triângulo contendo os campos base e altura;
// - Defina uma função chamada área que recebe os valores base e altura e calcula a área do triângulo = base * altura / 2;
// - Defina uma função chamada areaB que recebe um triangulo e retorna a área.
// - Defina uma função que recebe 2 triãngulos A e B e troca os valores de A com B.

#include <stdio.h>

typedef struct Triangulo {
    float base,altura;
} triangulo;

float Area(float a,float b);
float AreaB(triangulo t);

int main() {
    triangulo t;
    float area, areaB;
    printf("\nAltura: ");
    scanf("%f", &t.altura);
    printf("\nBase: ");
    scanf("%f", &t.base);
    area = Area(t.altura, t.base);
    areaB = AreaB(t);
    return 0;
}

float Area(float alt,float base) {
    return alt = (base * alt) / 2;
}

float AreaB(triangulo t) {
    float area;
    area = (t.base * t.altura) / 2;
    return area;
}