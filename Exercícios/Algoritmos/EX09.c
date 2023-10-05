#include <stdio.h>
int main() {
    int alunos,grupos,rest;
    printf("\nQuantidade de alunos: ");
    scanf("%d", &alunos);
    grupos = alunos / 4;
    rest = alunos % 4;
    printf("Quantidade de grupos: %d\nAlunos exclusos: %d\n ",grupos,rest);
    return 0;
    //chewee was here =)
}  