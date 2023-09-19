// Tiago ELoy Possidonio Pereira - 2417677 & José Augusto Gomes Martinho - 2349647

#include <stdio.h>
#include <stdio.h>

#define N 100

typedef struct{
	int dia;
	int mes;
	int ano;
}DATA;
typedef struct{
	int  numero;
	DATA diaInicio;
	DATA diaFim;
}TAREFA;

typedef struct {
    TAREFA pilha[N];
    int topo;
}PILHA;

/* Altere as funções */

void inicializa(PILHA *p);
int  cheia(PILHA p);
int  vazia(PILHA p);
void imprime(PILHA p);
void push(PILHA *p, TAREFA valor);
TAREFA pop(PILHA *p);

/*Crie funções */

void setData(DATA *d, int dia, int mes, int ano);

void setTarefa(TAREFA *t, int numero, DATA i, DATA f);

void troca(PILHA *saida, PILHA *entrada);


int main(){
    PILHA p1, p2, p3;
    TAREFA T1, T2;
    TAREFA temp;
    inicializa(&p1);
    inicializa(&p2);
    inicializa(&p3);

    setData(&T1.diaInicio,8, 2,2003);
    setData(&T1.diaFim,8, 8,2003);
    setTarefa(&T1,2, T1.diaInicio, T1.diaFim);

    push(&p1, T1);

    setData(&T2.diaInicio,1,2,1999);
    setData(&T2.diaFim,1, 1,2000);
    setTarefa(&T2, 1, T2.diaInicio, T2.diaFim);

    push(&p1, T2);

    imprime(p1);

    temp = pop(&p1);
    push(&p2,temp);

    push(&p2,pop(&p1));

    while(!vazia(p1)) push(&p3,pop(&p1));
    while(!vazia(p2)) push(&p3,pop(&p2));
    return 0;
}


void inicializa(PILHA *p){
    p->topo = -1;
}

int  cheia(PILHA p){
    return(p.topo == (N-1));
}

int  vazia(PILHA p){
    return(p.topo == -1);
}

void imprime(PILHA p){ //IMPLEMENTAR.
    int i;
    for(i==p.topo;i!=-1;i--){
        printf("\nTarefa numero %d\nID: %d",i,p.pilha[i].numero);
        printf("\nData de inicio: %d/%d/%d",p.pilha[i].diaInicio.dia,p.pilha[i].diaInicio.mes, p.pilha[i].diaInicio.ano); 
        printf("\nData de termino: %d/%d/%d",p.pilha[i].diaFim.dia,p.pilha[i].diaFim.mes, p.pilha[i].diaFim.ano); 
    }
}

void push(PILHA *p, TAREFA valor){
    if(!cheia(*p)){
        p->topo++;
        p->pilha[p->topo] = valor;
    }
}

TAREFA pop(PILHA *p){
    TAREFA temp;
    if(!vazia(*p)){
        temp = p->pilha[p->topo];
        p->topo--;
        return temp;
    }
}

void setData(DATA *d, int dia, int mes, int ano) {
    d->ano = ano;
    d->dia = dia;
    d->mes = mes;
}

void setTarefa(TAREFA *t, int numero, DATA i, DATA f) {
    t->numero = numero;
    t->diaInicio = i;
    t->diaFim = f;
}

void troca(PILHA *saida, PILHA *entrada) {
    PILHA aux;
    aux.topo = saida->topo;
    saida->topo = entrada->topo;
    entrada->topo = aux.topo;

    for(int i = 0; i <= entrada->topo; i++) {
        aux.pilha[i] = entrada->pilha[i];
    }
    entrada->topo = -1;
    for(int i = 0; i <= saida->topo; i++) {
        saida->pilha[i] = entrada->pilha[i];
        saida->topo++;
    }
}