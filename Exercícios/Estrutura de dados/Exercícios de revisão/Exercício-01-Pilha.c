#include <stdio.h>
#include <stdlib.h>

typedef struct Pilha {
    int num;
    struct Pilha *proximo;
} Pilha;


Pilha* empilhar(Pilha **p, int num) {
    Pilha *novo = (Pilha*)malloc(sizeof(Pilha));
    if (novo) {
        novo->num = num;
        novo->proximo = *p;
    }
    printf("Empilhado: %d", novo->num);
    return novo;
}

int main() {
    Pilha *pilha = NULL;
    int num = 20;
    empilhar(&pilha, num);
    imprimir(pilha);
    return 0;
}
