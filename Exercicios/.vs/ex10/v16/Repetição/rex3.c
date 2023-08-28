/*
Aluno: Tiago Eloy Possidonio Pereira
Turma: ADS / AS31A
*/
#include <stdio.h>
int main() {
    int par,c=1,n;
    printf("Digite um n%cmero: ",163);
    scanf("%d", &n);
    while(c <= n) {
        par = c % 2;
        if (par == 0) {
            printf(" %d",c);
        }
        c++;
    }
    return 0;
    //chewee was here :}

}