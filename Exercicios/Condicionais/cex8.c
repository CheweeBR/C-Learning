#include <stdio.h>
int main() {
    int n1,n2,n3,p1,p2,p3;
    printf("\nInsira um valor: ");
    scanf("%d", &n1);
    printf("\nInsira outro valor: ");
    scanf("%d", &n2);
    printf("\nInsira mais um valor: ");
    scanf("%d", &n3);
    if (n1 <= n2 && n1 <= n3) {
        p1 = n1;
        if (n2 <= n3) {
            p2 = n2;
            p3 = n3;
        }
        else {
            p2 = n3;
            p3 = n2;
        }
    }
    if (n2 <= n1 && n2 <= n3) {
        p1 = n2;
        if (n1 <= n3) {
            p2 = n1;
            p3 = n3;
        }
        else {
            p2 = n3;
            p3 = n1;
        }
    }
    if (n3 <= n2 && n3 <= n1) {
        p1 = n3;
        if (n1 <= n2) {
            p2 = n1;
            p3 = n2;
        }
        else {
            p2 = n2;
            p3 = n1;
        }
    }
    printf("\nCrescente: %d,%d,%d\n ",p1,p2,p3);
    return 0; 
    //chewee was here :}    
}