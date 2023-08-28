#include <stdio.h>
int main() {
    int n[20],i,l,t;
    for(i=0;i<20;i++) {
        scanf("%d", &n[i]);   
    }
    for(i=0,l=19;i<10;i++,l--) {
        t = n[i];
        n[i] = n[l];
        n[l] = t;
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,n[i]);
    }
    return 0;
}