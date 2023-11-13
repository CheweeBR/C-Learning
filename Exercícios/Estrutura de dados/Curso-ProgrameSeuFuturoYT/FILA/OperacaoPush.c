#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;
    
}No;

void push(No **fila, int num) {
    No *aux, *novo = malloc(sizeof(No));
    if (novo) {
        novo->valor = num;
        novo->proximo = NULL;
        if(*fila == NULL) {
            *fila = novo;
        } else {
            aux = *fila;
            while(aux->proximo) {
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
    }
    else {
        printf("\n Erro em alocar memória.\n");
    }
}


int main() {
    return 0;
}