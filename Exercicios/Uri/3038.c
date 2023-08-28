#include <stdio.h>
#include <string.h>

void Decriptografia(a) {
    if(a == '@') {
        printf("a");
    }
    else {
        if (a == '&'){
            printf("e");
        }
        else{
            if (a == '!') {
                printf("i");
            }
            else {
                if (a == '*') {
                    printf("o");
                }
                else {
                    if (a == '#') {
                        printf("u"); 
                    }
                    else {
                        printf("%c", a);
                    }
                }
            }
        }
    }
}

int main() {
    char mensagem[256],aux;
    int c=0,total=0;
    while(fgets(mensagem,256,stdin) != NULL) {
        total = strlen(mensagem);
        for(c=0;c < total; c++) {
            aux = mensagem[c];
            Decriptografia(aux);
        }
    }
    printf("\n");
    return 0;
}