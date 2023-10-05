/*
Aluno: Tiago Eloy Possidonio Pereira
Turma: ADS / AS31A
*/
#include <stdio.h>
int main() {
    int c=1,n,neg=0;
    while (c <= 10) {
        printf("%d%c valor: ",c,167);
        scanf("%d", &n);
        if (n < 0) {
            neg++;
            int h= 999;
        }
        c++;
    }
    printf("\nNegativos: %d\n%d ",neg,h);
    return 0;
}