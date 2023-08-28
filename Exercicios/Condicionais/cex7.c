#include <stdio.h>
int main() {
    int n1,n2;
    printf("\nDigite um n%cmero: ",163);
    scanf("%d", &n1);
    printf("\nDigite outro n%cmero: ",163);
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("\nCrescente: %d,%d\n ",n2,n1);
    }
    else {
        printf("\nCrescente: %d,%d\n ",n1,n2);
    }
}