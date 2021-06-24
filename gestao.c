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
        return STACK_ISEMPTY;
    else
        return OK;
}

int turmaIsCheia(Turma *turma)
{
    if(turma->topo == TAM-1)
        return STACK_ISFULL;
    else
        return OK;
}

void insereAlunoNaTurma(Turma *turma, Aluno *aluno)
{
    if(turmaIsCheia(turma))
    {
        printf("Erro ao inserir: Turma Cheia!");
    }
    else
    {
        turma->topo++;
    }
}

int tamanhoDaTurma(Turma *turma)
{
    return (turma->topo + 1);
}

