#include <stdio.h>
int numero() {
    int n1;
    scanf("%d", &n1);
    return n1;
}
void pecaspossuentes(nf,n){
    int c,vet[1001],peca,num;
    for(c=0;c<nf;c++) {
        scanf("%d", &num);
        vet[num] = num;      
    }
    for(c=1;c<=n;c++){
        if (vet[c] != c) {
            peca = c;
        }
    }
    printf("%d",peca);
}
int main() {
    int n, nf;
    n = numero();
    nf = n - 1;
    pecaspossuentes(nf,n);
    return 0;
}