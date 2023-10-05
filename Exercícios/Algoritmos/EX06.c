#include <stdio.h>
int main() {
    float pi, raio, area;
    printf("\nVamos medir a area de um circulo atraves de seu raio.\nDigite seu Raio em cm: ");
    scanf("%f",&raio);
    pi = 3.14159;
    raio = raio*raio;
    area = raio *pi;
    printf("\nO valor da area %c: %.1fcm%c",130,area,253);
    return 0;
    //chewee was here
}