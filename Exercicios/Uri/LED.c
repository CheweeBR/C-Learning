#include <stdio.h>
#include <string.h>
int main() {
    int i,n,l,j,led;
    char num[102];
    scanf("%d", &n);
    for(i = 0; i< n; i++) {
        led = 0;
        scanf("%s", &num);
        l = strlen(num);
        for(j = 0; j < l; j++){
            if(num[j] == '1'){
                led += 2;
            }
            if(num[j] == '2' || num[j] == '5' || num[j] == '3'){
                led += 5;
            }
            if(num[j] == '0' || num[j] == '6' || num[j] == '9') {
                led += 6;
            }
            if(num[j] == '4'){
                led += 4;
            }
            if(num[j] == '7'){
                led += 3;
            }
            if(num[j] == '8'){
                led += 7;
            }
        }
        printf("%d LEDS \n",led);
    }
    return 0;
}