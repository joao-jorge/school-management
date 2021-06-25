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
        turma->alunos[turma->topo] = *aluno;
    }
}

int tamanhoDaTurma(Turma *turma)
{
    return (turma->topo + 1);
}

int removeAlunoNaTurma(Turma *turma)
{
    Aluno aux;
    if(turmaIsVazia(turma))
    {
        printf("Pilha esta vazia");
    }
    else
    {

    }
}

int verTopo(Turma *turma)
{
    return turma->alunos[turma->topo].idade;
}

// FUNÇÓES DOS ALUNOS

void cadastrarAluno(Aluno *alunos)
{
    printf("Insira o Nome: ");
    scanf("%s", &alunos->nome_aluno);
    printf("Insira a idade: ");
    scanf("%d", &alunos->idade);
    printf("Insira o Numero: ");
    scanf("%d", &alunos->numero_aluno);
    printf("Insira o Curso: ");
    scanf("%s", &alunos->curso);
    printf("Insira o Ano de Frequencia: ");
    scanf("%s", &alunos->ano_frequencia);
}



