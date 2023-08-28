/* 
Aluno: Tiago Eloy Possidonio Pereira
Turma: ADS / AS31A
*/
#include <stdio.h>
int main() {
    int c=1;
    float nota, soma;
    while (c <= 10) {
        printf("%d%c valor: ",c,167);
        scanf("%f", &nota);
        soma = soma + nota;
        c++;
    }
    soma = soma / 10;
    printf("Media: %2.f",soma);
    return 0;
    //chewee was here :]
}