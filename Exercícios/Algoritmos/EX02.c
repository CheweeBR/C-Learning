#include <stdio.h>
int main() {
   int id, nasc, anoAtual;
   printf("\nAgora precisamos do ano de seu nascimento: ");
   scanf("%d", &nasc);
   anoAtual = 2021;
   id = anoAtual - nasc;
   printf("\nBom agora sabemos que voce possui %d anos", id);
   return 0;
   //chewee was here =) 
}