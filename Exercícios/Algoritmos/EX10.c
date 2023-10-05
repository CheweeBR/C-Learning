#include <stdio.h>
int main() {
    float smin,cargahoraria,hrtrab,hrextra,hrnormal, hrausent,inss,salarioSINSS,salariof,hrextra2,hrtrab2,hrausent2;
    printf("\nSal%crio min%cmo: ",160,161);
    scanf("%f",&smin);
    printf("Carga hor%cria di%cria: ",160,160);
    scanf("%f", &cargahoraria);
    printf("Horas trabalhadas mensal: ");
    scanf("%f", &hrtrab);
    printf("Horas extras: ");
    scanf("%f", &hrextra);
    printf("horas ausentes: ");
    scanf("%f", &hrausent);
    hrtrab2 = hrtrab * ((smin * 0.04) / cargahoraria);
    hrnormal = hrtrab2 / hrtrab;
    hrausent2 = hrausent * ((smin * 0.04) / cargahoraria);
    hrextra2 = hrextra * ((hrnormal * 0.5) + hrnormal);
    salarioSINSS = hrtrab2 + hrextra2 - hrausent2;
    inss = salarioSINSS * 0.11;
    salariof = salarioSINSS - inss;
    printf("\nSal%crio l%cquido: R$%.2f\n\nDADOS ADICIONAIS\n%.0f horas extras equivalendo: R$%.2f\n%.0f horas trabalhadas equivalendo: R$%.2f\n%.0f horas ausentes equivalendo: R$%.2f",160,161,salariof,hrextra,hrextra2,hrtrab,hrtrab2,hrausent,hrausent2);
    printf("\nINSS: R$%.2f\nHora normal: R$%f\n ",inss,hrnormal);
    return 0;
    //chewee was here =)
}
