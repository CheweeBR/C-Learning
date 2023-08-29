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
void Troca(triangulo a, triangulo b);

int main() {
    triangulo t, vetor[2], *p;
    float area, areaB;
    int c;
    printf("\nAltura: ");
    scanf("%f", &t.altura);
    printf("\nBase: ");
    scanf("%f", &t.base);
    area = Area(t.altura, t.base);
    areaB = AreaB(t);
    printf("A area do triangulo com a funcao `Area`: %2.0f² \nA area do triangulo com a funcao `AreaB`: %2.0f²", area,areaB);
    for(c=0;c<2;c++){
        printf("\n%d° Altura: ",c);
        scanf("%f", &vetor[c].altura);
        printf("\n%d°Base: ",c);
        scanf("%f", &vetor[c].base);
    }
    Troca(vetor[0],vetor[1]);
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

void Troca(triangulo a, triangulo b){
    float aux;
    aux = a.altura;
    a.altura = b.altura;
    b.altura = aux;
    aux = a.base;
    a.base = b.base;
    b.base = aux;
    printf("Primeiro triangulo:\nBase: %2.0f \nAltura: %2.0f\n\nSegundo triangulo:\nBase: %2.0f \nAltura: %2.0f", a.base,a.altura,b.base,b.altura);
}