#include <stdio.h>
#include <stdlib.h>

typedef struct Paciente {
    int idade, senha;
} Paciente;

typedef struct no {
    int valor;
    Paciente paciente;
    struct no *proximo;
} No;

void Inserir(No **fila, Paciente p) {
    No *aux, *novo = malloc(sizeof(No));
    if (novo) {
        novo->paciente = p;
        novo->proximo = NULL;
        if (!*fila) {
            *fila = novo;
        } else {
            aux = *fila;
            while (aux->proximo) {
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
        printf("\nPaciente inserido com sucesso!\n");
    } else {
        printf("\nErro em alocar memória.\n");
    }
}

void Remover(No **filaAP, No **filaAN, No **filaB, int *cont) {
    No *remover = NULL;

    if (*cont > 0) {
        if (*cont > 6) {
            if (*filaAP) {
                remover = *filaAP;
                *filaAP = remover->proximo;
                free(remover);
                printf("\nRemoção da fila AP bem-sucedida!\n");
                *cont--;
            } else {
                *cont = 6;
            }
        } else if (*cont > 2) {
            if (*filaAN) {
                remover = *filaAN;
                *filaAN = remover->proximo;
                free(remover);
                printf("\nRemoção da fila AN bem-sucedida!\n");
                *cont--;
            } else {
                *cont = 2;
            }
        } else {
            if (*filaB) {
                remover = *filaB;
                *filaB = remover->proximo;
                free(remover);
                printf("\nRemoção da fila B bem-sucedida!\n");
                *cont--;
            } else {
                *cont = 10;
            }
        }
    } else {
        printf("Todas as filas estao vazia.");
        *cont = 10;
    }
    printf("%d", *cont);
}


void imprimir(No *filaAP, No *filaAN, No *filaB) {
    printf("\t--------------- FILA ---------------");
    
    printf("\nFila A - Com Prioridade: ");
    if(filaAP) {
        while (filaAP) {
            printf("[senha: %d, idade: %d]->", filaAP->paciente.senha, filaAP->paciente.idade);
            filaAP = filaAP->proximo;
            if(filaAP == NULL) {
                printf("FIM\n");
            }
        }
    } else {
        printf("Fila vazia.");
    }
    
    printf("\nFila A - Sem Prioridade: ");
    if(filaAN) {
        while (filaAN) {
            printf("[senha: %d, idade: %d]->", filaAN->paciente.senha, filaAN->paciente.idade);
            filaAN = filaAN->proximo;
            if(filaAN == NULL) {
                printf("FIM\n");
            } 
        }      
    } else {
        printf("Fila vazia.");
    }
    
    printf("\nFila B: ");
    if(filaB) {
        while (filaB) {
            printf("[senha: %d, idade: %d]->", filaB->paciente.senha, filaB->paciente.idade);
            filaB = filaB->proximo;
            if(filaB == NULL) {
                printf("FIM\n");
            }
        }
    } else {
        printf("Fila vazia.");
    }
    
    printf("\n------------- FIM FILA -------------\n");
}

int main() {

    No *fila_AP = NULL, *fila_AN = NULL, *fila_B = NULL;
    Paciente p;
    int senha, idade, repete = 1, *cont=10;
    char opcao, grupo;

    printf("\n-------------------------------------------------------\n");
    printf("\n Tabela de opcoes: i = inserir, r = remover, p = imprimir\n");
    printf("\n-------------------------------------------------------\n");
    printf("\nOs dados devem ser inseridos conforme o exemplo abaixo:\n");
    printf("\nopcao: i senha: 1234 idade: 18 Grupo: A, na mesma linha.\n");
    printf("\nEx: i 4321 20 A \n");
    printf("\n-------------------------------------------------------\n");

    while(repete == 1) {
        scanf(" %c %d %d %c", &opcao, &senha, &idade, &grupo);
        p.senha = senha;
        p.idade = idade;

        if(opcao == 'i' || opcao == 'I') {
            if ((grupo == 'A' || grupo == 'a') && idade < 60) {
                Inserir(&fila_AN, p);
            } else if ((grupo == 'A' || grupo == 'a') && idade >= 60) {
                Inserir(&fila_AP, p);
            } else if (grupo == 'B' || grupo == 'b') {
                Inserir(&fila_B, p);
            }
        } else if(opcao == 'r' || opcao == 'R') {
            Remover(&fila_AP, &fila_AN, &fila_B, &cont);
        } else if (opcao == 'p' || opcao == 'P') {
            imprimir(fila_AP,fila_AN,fila_B);
        } else {
            printf("\nOpção ou dados inválidos...");
        }

    }

    return 0;
}
