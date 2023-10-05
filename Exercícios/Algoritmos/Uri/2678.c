#include <stdio.h>
#include <string.h>

char verificacao(cont){
    char r;
    if(cont == 'A' || cont == 'a' || cont == 'B' || cont == 'b' || cont == 'C' || cont == 'c' ) {
        r ='2';
    }
    else {
        if(cont == 'D' || cont == 'd' || cont == 'E' || cont == 'e' || cont == 'F' || cont == 'f' ) {
            r ='3';
        }
        else {
            if(cont == 'G' || cont == 'g' || cont == 'H' || cont == 'h' || cont == 'I' || cont == 'i' ) {
                r ='4';
            }
            else {
                if(cont == 'J' || cont == 'j' || cont == 'K' || cont == 'k' || cont == 'L' || cont == 'l' ) {
                    r ='5';
                }
                else {
                    if(cont == 'M' || cont == 'm' || cont == 'N' || cont == 'n' || cont == 'O' || cont == 'o' ) {
                        r ='6';
                    }
                    else{
                        if(cont == 'P' || cont == 'p' || cont == 'Q' || cont == 'q' || cont == 'R' || cont == 'r' || cont == 'S' || cont == 's') {
                            r ='7';
                        }
                        else {
                            if(cont == 'T' || cont == 't' || cont == 'U' || cont == 'u' || cont == 'V' || cont == 'v' ) {
                                r ='8';
                            }
                            else{
                               if(cont == 'W' || cont == 'w' || cont == 'X' || cont == 'x' || cont == 'Y' || cont == 'y' || cont == 'Z' || cont == 'z') {
                                    r ='9';
                                }
                                else{
                                    r = cont;
                                }
                            } 
                        }
                    }
                }
            }
        }
    }
    if(r != '0' && r != '1' && r != '2' && r != '3' && r != '4' && r != '5' && r != '6' && r != '7' && r != '8' && r != '9' && r != '#' && r != '*'){
        r = '/';
    }
    return r; 
}

int main() {
    char numero[301],cont,num[301];
    int c=0,total;
    while(fgets(numero, 301,stdin) != NULL) {
        total = strlen(numero);
        for(c=0;c<total;c++) {
            cont = numero[c];
            num[c]=verificacao(cont);
            if(num[c] == '/') {
            }
            else{
                printf("%c",num[c]);
            }
        }
        numero[0] = '\0';
        num[0] = '\0';
        puts("");
    }
    return 0;
}