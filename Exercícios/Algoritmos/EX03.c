#include <stdio.h>
int main() {
    int id, anoNasc, anoatual;
    anoatual = 2021;
    printf("\nBom dia! Insira sua idade: ");
    scanf("%d", &id);
    anoNasc = anoatual - id;
    printf("\nObrigado por conceder este dado importantissimo!\n  agora sabemos o seu ano de nascimento, cujo ano %d.",anoNasc);
    return 0;
    //chewee was here =)
}