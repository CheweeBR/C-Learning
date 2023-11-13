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


No pop(No **fila) {
    No *remover = NULL;
    if(*fila) {
        remover = *fila;
        *fila = remover->proximo;
    } else {
        printf("\n Fila está vazia.");
    } return *remover;
}

void imprimir(No *fila) {
    printf("\t----------- FILA -------------");
    while(fila) {
        printf("\n%d", fila->valor);
        fila = fila->proximo;
    }
    printf("\n\t--------- FIM FILA -----------");
}

int main() {
    return 0;
}