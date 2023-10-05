#include <stdio.h> 
int main() {
    int n1,n2,s,q;
    printf("Um n%cmero: ",163);
    scanf("%d", &n1);
    printf("Outro n%cmero",163);
    scanf("%d", &n2);
    s = n1 + n2;
    q = s * s;
    printf("A soma de %d + %d = %d, e seu quadrado equivale %d.",n1,n2,s,q);
    return 0;
    //chewee was here =)
}