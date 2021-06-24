#include <stdio.h>
#include <stdlib.h>
#include "gestao.h"

void inicilizarTurma(Turma *turma)
{
    turma->topo = -1;
}

int turmaIsVazia(Turma *turma)
{
    if(turma->topo == -1)
        return 1;
    else
        return OK;
}

int turmaIsCheia(Turma *turma)
{
    if(turma->topo == TAM-1)
        return 1;
    else
        return 0;
}

void insereAlunoNaTurma(Turma *turma, Aluno *aluno)
{
    if(turmaIsCheia == STACK_ISFULL)
    {
        printf("Erro ao inserir: Turma Cheia!");
    }
    else
    {
        turma->topo++;
    }

}

