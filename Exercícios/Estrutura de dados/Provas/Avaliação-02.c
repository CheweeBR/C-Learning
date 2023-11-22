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

void Inserir(No **fila, Paciente p);
void Remover(No **fila);
void imprimir(No *filaAP, No *filaAN, No *filaB);

int main() {

    No *fila_AP = NULL, *fila_AN = NULL, *fila_B = NULL;
    Paciente p;
    int senha, idade, repete = 1, cont=10;
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
            } 
            else if ((grupo == 'A' || grupo == 'a') && idade >= 60) {
                Inserir(&fila_AP, p);
            } 
            else if (grupo == 'B' || grupo == 'b') {
                Inserir(&fila_B, p);
            }
            else {
                printf("\n O grupo nao existe.\n");
            }
        } 
        
        else if(opcao == 'r' || opcao == 'R') {
            if(fila_B == NULL && fila_AP == NULL && fila_AN == NULL) {
                printf("\nTodas as filas estao vazias.\n");
                cont = 10;
            }  else {
                if(cont > 6) {
                    if(fila_AP){
                        Remover(&fila_AP);
                        cont--; 
                    } else {
                        printf("\nFila do Grupo A-Prioridade Vazia.\n");
                        cont = 6;
                        if(fila_AN == NULL) {
                            cont = 2;
                        } else {
                            if(fila_B == NULL) {
                                cont = 10;
                            }
                        }
                    } 
                }
                else if (cont <= 6 && cont >2){
                    if(fila_AN) {
                        Remover(&fila_AN);
                        cont--;
                    } 
                    else {
                        cont = 2;
                        printf("\nFila do Grupo A-Nao-Prioridade Vazia.\n");
                        if(fila_B == NULL) {
                            cont = 10;
                        }
                    }
                } 
                
                else if (cont > 0) {
                    if (fila_B) {
                        Remover(&fila_B);
                        cont--;
                    } 
                    else {
                        printf("\nFila do Grupo B Vazia.\n");
                        cont = 10;
                    }    
                }          
            }
        } 
        
        else if (opcao == 'p' || opcao == 'P') {
            imprimir(fila_AP,fila_AN,fila_B);
        } 
        
        else if (opcao == 'f' || opcao == 'F') {
            printf("\nEncerrando...");
            repete = 0;
        } 
        else {
            printf("\nOpção ou dados inválidos...");
        }

    }
    return 0;
}

void Remover(No **fila) {
    No *remover = NULL;
    if (*fila) {
        remover = *fila;
        *fila = remover->proximo;
        free(remover);
    }
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
