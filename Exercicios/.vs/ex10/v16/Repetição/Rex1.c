/*
Aluno: Tiago Eloy Possidonio Pereira
Turma: ADS / AS31A
*/
#include <stdio.h>
int main() {
    int system(chair),c,c1 = 0,loga = 0;
    float n, soma;
    char r;
    while (c1 == 0){
        printf("\nN%cmero que deseja ver a tabuada: ",163);
        scanf("%f", &n);
        c = 0;
        printf("\nTabuada do %2.f\n ",n);
        while (c < 10) {
           c ++;
         soma = n * c;
         printf("\n%2.f X %d = %2.f",n,c,soma);
    }
    printf("\n \nDeseja ver outro n%cmero? (s/n): ",163);
    scanf("%s", &r);
    
    if (r == "n") {
        c1 = 1;
    }
    else {
        c1 = 0;
    }
    }
    return 0;
    //chewee was here :]
}