#include <stdio.h>
int main() {
    float pvenda,pmont,lucro,ipi,icms;
    printf("\nInsira o pre%co da montadora: R$",135);
    scanf("%f",&pmont);
    ipi =  pmont * 0.11;
    lucro = pmont * 0.15;
    icms = pmont * 0.17;
    pvenda = pmont + ipi + lucro + icms;
    printf("\nValor final: R$%.2f\n\nTAXAS SOBRE A VENDA\n\nICMS: R$%.2f\nIPI: R$%.2f\nLucro: R$%.2f\n ",pvenda,icms,ipi,lucro);
    return 0;
    //chewee was here =)
}