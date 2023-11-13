#include <stdio.h>
#include <stdlib.h>

#define N_CORRIDAS 300
#define N_MOTORISTAS 100

typedef struct corrida{
    int numeroDaCorrida;
    int IDdoPassageiro;
    float km;
    float valor;
} CORRIDA;

typedef struct motorista{
    int IDdoMotorista;
    CORRIDA minhasCorridas[N_CORRIDAS];
    float valorTotal;
} MOTORISTA;

typedef struct pilha{
    MOTORISTA pilha[N_MOTORISTAS];
    struct PILHA *anterior;
    int topo;
} PILHA;

void MotoristaPush(MOTORISTA *m, int id, ) {
    MOTORISTA auxiliar;
    auxiliar.IDdoMotorista = 
}

/* .. MOTORISTA pop(){} */


int main(){
    return 0;
}
