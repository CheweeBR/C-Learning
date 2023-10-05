#include <stdio.h>
int main() {
    float salario, depen, salariofam,salariototal;
    printf("\nValor do sal%crio: R$",160);
    scanf("%f",&salario);
    printf("Quantidade de dependentes: ");
    scanf("%f", &depen);
    salariofam = (salario * 0.02) * depen;
    salariototal = salario + salariofam;
    printf("\nO seu sal%crio fam%clia equivale a um adicional de R$%.2f com %.0f dependentes.\nTotalizando R$%.2f em seu sal%crio final.\n ",160,161,salariofam,depen,salariototal,160);
    return 0;
    //chewee was here =)
}