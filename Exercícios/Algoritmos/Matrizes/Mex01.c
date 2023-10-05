#include <stdio.h>
int main() {
    int m[12][12];
    int c,i;
    for(c=0;c<12;c++) {
        m[c][i] = c;
        for(i=0;i<12;i++){
            printf("%d",m[c][i]);
        }
    }
    return 0;
}