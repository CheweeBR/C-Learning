#include <stdio.h>
int main() {
    int n1,n2,s,si,aux, system(chair);
    system("color fd");
    printf("\nDigite um n%cmero: ",163);
    scanf("%d", &n1);
    printf("\nDigite outro n%cmero: ",163);
    scanf("%d", &n2);
    s = (n1 + n2);
    aux = s % 2;
    system("cls");
    if (aux == 0) {
        if (s < 100) {
            si = s * 2;
            printf("\n(Par menor que 100) %d X 2 = %d\n",s,si);
        }
        else {
            si = s / 2;
            printf("\n(Par maior que 100) %d / 2 = %d\n",s,si);
        }
    }
    else {
        printf("\n(Impar) %d + %d = %d\n ",n1,n2,s);
    }
    return 0;
    //chewee was here :}

} 