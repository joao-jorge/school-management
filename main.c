#include <stdio.h>
#include <stdlib.h>
#include "gestao.h"

int main ()
{
    Turma *turma = (Turma*)malloc(sizeof(Turma));
    Escola *escola = (Escola*)malloc(sizeof(Escola));;


    inicilizarTurma(turma);
    printf("Turma: %d\n", turmaIsCheia(turma));
    printf("Turma: %d\n", turmaIsVazia(turma));

}