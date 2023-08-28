#include <stdio.h>
int main() {
    int n1,n2;
    printf("Digite o primeiro n%cmero: ",163);
    scanf("%d", &n1);
    printf("Digite o segundo n%cmero: ",163);
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("Maior: %d\nMenor: %d",n1,n2);
    }
    else{
        if (n1 < n2) {
            printf("Maior: %d\nMenor: %d",n2,n1);
        }
        else {
        printf("Ambos iguais!");
        }
    }
    return 0;
    //chewee was here :]
}