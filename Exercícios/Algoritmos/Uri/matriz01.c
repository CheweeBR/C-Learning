#include <stdio.h>
int main() {
    int m[12][12],lin,col;
     for(lin=0;lin<12;lin++) {
        for(col=0;col<12;col++) {
            printf("%d%d",m[lin][col]);
        }
    }
    return 0;
}