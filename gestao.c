#include <stdio.h>
#include <stdlib.h>
#include "gestao.h"

void inicilizar_turma(Turma *turma)
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
        return STACK_ISFULL;
    else
        return OK;
}

