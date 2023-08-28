 #include <stdio.h>

void surpresa(int n) {
    int a = 0, b = 0;
    while(n > 0) {         
        if((n % 2) == 0) {
            a++;
        }                   
        else {
            b++;
        }                 
        n = n / 2;    
    }
    printf("%d %d\n", a, b);
}
