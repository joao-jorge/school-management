#include <stdio.h>
#include <stdlib.h>
#include "gestao.h"

int main ()
{
    Turma *turma = (Turma*)malloc(sizeof(Turma));
    Escola *escola = (Escola*)malloc(sizeof(Escola));
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));;


    inicilizarTurma(turma);
    int count = 0;
    while(count < 3)
    {
        if(count == 2)
            pop();
        cadastrarAluno(aluno);
        insereAlunoNaTurma(turma, aluno);
        printf("Topo: %d\n", verTopo(turma));
        printf("Tamanho atual da turma: %d", tamanhoDaTurma(turma));
        printf("\n\n----------------------------\n\n");
        count++;
    }
}
