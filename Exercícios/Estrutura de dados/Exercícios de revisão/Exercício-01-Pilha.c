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
    printf("\nEmpilhado: %d", novo->num);
    return novo;
}

Pilha* desempilhar(Pilha **p)   {
    Pilha *auxiliar = *p;
    *p = auxiliar->proximo;
    printf("\nRemovido do topo o numero: %d", auxiliar->num);
    return *p;
}

void imprimir(Pilha *p) {
    if(p){
        printf("\n--------------- Pilha ---------------");
        while (p) {
            printf("\n%d", p->num);
            p = p->proximo;
        }
        printf("\n---------------- FIM ----------------");
    } 
    else {
        printf("\nPilha vazia");
    }
}

int main() {
    Pilha *pilha = NULL;
    int num = 0, repeticao = 1;
    char opcao;
    while(repeticao != 0) {
        printf("\n--------------- MENU ---------------\n [e] Empilhar\n [d] Desempilhar\n [i] Imprimir\n [s] Sair\n------------------------------------");
        printf("\nDigite um numero: ");
        scanf("%d", &num);
        fflush(stdin);
        __fpurge(stdin);
        printf("\nDigite uma opcao: ");
        scanf("%c", &opcao);
        if(opcao == 'e') {
            pilha = empilhar(&pilha, num);
        } else {
            if(opcao == 'd') {
                pilha = desempilhar(&pilha);
            } else {
                if(opcao == 'i') {
                    imprimir(pilha);
                } else {
                    if(opcao == 's') {
                        repeticao = 0;
                    }
                    else {
                        printf("\nOpcao invalida!");
                    }
                }
            }
        }
    }
    return 0;
}
