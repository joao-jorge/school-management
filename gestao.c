#include <stdio.h>
#include <stdlib.h>
#include "gestao.h"

void initializeClass(Turma *turma)
{
    turma->topo = -1;
}

int classIsEmpty(Turma *turma)
{
    if(turma->topo == -1)
        return STACK_ISEMPTY;
    else
        return OK;
}

int classIsFull(Turma *turma)
{
    if(turma->topo == STACK_TAM-1)
        return STACK_ISFULL;
    else
        return OK;
}

void insertStudent(Turma *turma, Aluno *aluno)
{
    if(classIsFull(turma))
    {
        printf("Erro ao inserir: Turma Cheia!\n");
    }
    else
    {
        turma->topo++;
        turma->alunos[turma->topo] = *aluno;
    }
}

int classSize(Turma *turma)
{
    return (turma->topo + 1);
}

int removeStudent(Turma *turma)
{
    if(classIsEmpty(turma))
    {
        printf("Pilha esta vazia\n");
    }
    else
    {
        printf("Aluno a ser removido: %s\n", turma->alunos[turma->topo].nome_aluno);
        turma->topo--;
    }
}

void showLastInserted(Turma *turma)
{
    printf("Nome : %s\nIdade: %d\nNumero de ID: %d\nCurso: %s\nAno de Frequencia: %d", 
    turma->alunos[turma->topo].nome_aluno, 
    turma->alunos[turma->topo].idade,
    turma->alunos[turma->topo].numero_aluno,
    turma->alunos[turma->topo].curso,
    turma->alunos[turma->topo].ano_frequencia);
     
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
    scanf("%d", &alunos->ano_frequencia);
}


int studentExists(Turma *turma, int num_aluno)
{
    int status = 0;
    if(classIsEmpty(turma))
        printf("Impossivel realizar procura: TURMA ESTA VAZIA!\n");
    else
    {
       for(int i=0; i < turma->topo; i++)
       {
           if(num_aluno == turma->alunos[i].numero_aluno)
               status = FOUND;
       }
       if(status != FOUND)
            status = NOT_FOUND;
    }
    return status;
}

void showStudent(Turma *turma, int num_aluno)
{
       if(studentExists(turma, num_aluno) == FOUND)
       {
           for(int i=0; i < turma->topo; i++)
           {
               if(num_aluno == turma->alunos[i].numero_aluno)
               {
                   printf("\nNome: %s\n", turma->alunos[i].nome_aluno);
                   printf("\nIdade: %d\n", turma->alunos[i].idade);
                   printf("\nCurso: %s\n", turma->alunos[i].curso);
                   printf("\nNumero ID: %d\n", turma->alunos[i].numero_aluno);
                   printf("\nAno de Frequencia: %d\n", turma->alunos[i].ano_frequencia);
               }
           }
       }
       else
           printf("Estudante nao existe");
}



