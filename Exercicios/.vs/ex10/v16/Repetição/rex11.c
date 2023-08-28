#include <stdio.h>
int main() 
{
    int c=1;
    char cod,codm;
    float preco=0,maior=0,soma=0,media;
    printf("\nLeitor de produtos");
    while(c <= 15) {
        printf("\n%d%cC%cdigo: ",c,248,162);
        scanf("%s", &cod);
        printf("%d%cPre%co: ",c,248,135);
        scanf("%f", &preco);
        if (preco > maior) {
            maior = preco;
            codm = cod;
        }
        soma = soma + preco;
        c++;
    }
    media = soma / 15;
    printf("\nProduto com maior valor: C%cdigo:%c - pre%co: R$%.2f\nM%cdia do valor dos produtos: %.2f\n ",162,cod,135,preco,130,media);
    return 0;
    //chewee was here :]
}