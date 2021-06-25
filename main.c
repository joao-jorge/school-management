#include <stdio.h>
#include <stdlib.h>
#include "gestao.h"

int main ()
{
    Turma *turma = (Turma*)malloc(sizeof(Turma));
    //Escola *escola = (Escola*)malloc(sizeof(Escola));
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));;


    inicilizarTurma(turma);
    int count = 0;
     int num_aluno;
    while(count != 9)
    {
        cadastrarAluno(aluno);
        insereAlunoNaTurma(turma, aluno);
        printf("Topo: %d\n", verTopo(turma));
        printf("Tamanho atual da turma: %d", tamanhoDaTurma(turma));
        printf("\n\n----------------------------\n\n");
        printf("terminar? ");
        scanf("%d", &count);

    }

        printf("PROCURAR UM ALUNO:");
        scanf("%d", &num_aluno);
        printf("\nstatus: %d\n", studentExists(turma, num_aluno));
        showStudent(turma, num_aluno);

}
