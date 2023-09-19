// Implemente um programa em C para gerenciar turmas de alunos em uma universidade.

// Os dados são os seguintes:

// 1) Um aluno tem 
// a. RA
// b. Nome

// 2) Uma disciplina tem
// a. Identificador da disciplina
// b. Horario (1,2,3,4,...)
// c. Lista de RA dos alunos matriculados (até 100)

// 3) Um curso tem 
// a. Nome do curso
// b. até 10 disciplinas.

// O programa deve fazer:
// Funcão para ler dados de um aluno e devolver um aluno (return)
// Função para ler dados de uma disciplina
// Função para ler dados de um curso
// Mostrar qual turma tem mais alunos (você pode criar campos extras se achar necessário)
// Mostrar qual aluno está matriculado em mais disciplinas

#include <stdio.h>

typedef struct Aluno
{
    char nome;
    int ra;
} aluno;

typedef struct Disciplina
{
    int id, listaRa[100];
    float horario;
} disciplina;

typedef struct Curso
{
    char nome;
    int quantidadeDisciplinas[100];
} curso;

void telaAluno(aluno *);
void consultaAluno(aluno a[]);
void telaDisciplina(disciplina *);
void telaCurso(curso *);

int main() {
    aluno aluno[30];
    disciplina disciplina[15];
    curso curso[10];
    int c=0,alt=0, condicao=1;
    //while (condicao!=0){
        printf("-----------------------\n          MENU\n-----------------------\n[0] Sair\n[1] Aluno\n[2] Curso\n[3] Disciplina\n-----------------------\nAlternativa: ");
        scanf("%d", &alt);
        if(alt==0){
            condicao = 0;
        } else{
            if(alt==1){
            telaAluno(aluno);
            consultaAluno(aluno);
            }
            else{
                if(alt==2){
                    telaDisciplina(disciplina);
                }
                else{
                    if(alt==3){
                        telaCurso(curso);
                    }
                    else{
                        printf("Alternativa invalida!");
                        condicao = 1;
                    }
                }
            }
        }
    //}
    return 0;
}

void telaAluno(aluno *a){
    int c;
    for(c=0;c<5;c++){
        printf("\n |%d° aluno|\n\nNome: ",c);
        scanf("%s", &a[c].nome);
        printf("\nRA: ");
        scanf("%d", &a[c].ra);
    }
}

void consultaAluno(aluno a[]){
    int c;
    for(c=0;c<5;c++){
        printf("\n~~~~~~~~~~~~~~\n |%d° aluno|\n\nNome: %s\nRA: %d",c,a[c].nome, a[c].ra);
    }
}

void telaDisciplina(disciplina *d){
    printf(d->id);
}
void telaCurso(curso *c){
    printf(c->quantidadeDisciplinas);

}


