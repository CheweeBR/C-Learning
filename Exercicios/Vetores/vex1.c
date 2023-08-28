#include <stdio.h>
int main() {
    int c,n[20],maior=0,posicao;
    for(c=0;c < 20;c++){
        printf("Digite o %d n%cmero: ",c,163);
        scanf("%d", &n[c]);
        if (n[c] > maior) {
            posicao = c;
            maior = n[c]; 
        }
    }
    printf("\nO conjunto {");
    for(c=1; c<=20;c++) {
        if (c == 20) {
            printf(" e %d}",n[20]);
        }
        else{
            printf(" %d,",n[c]);
        }
    }
    printf(". O maior %c %d na posi%cao %d.\n ",130,maior,135,posicao);
}