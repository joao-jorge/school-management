#include <stdio.h>
#include <stdlib.h>
#include "gestao.h"

//GOOD
void initializeClass(Turma *turma)
{
    turma->topo = -1;
}
//GOOD
Boolean classIsEmpty(Turma *turma)
{
    if(turma->topo == -1)
        return TRUE;
    return FALSE;
}

//GOOD
Boolean classIsFull(Turma *turma)
{
    if(turma->topo == STACK_TAM-1)
        return TRUE;
    return FALSE;
}

//GOOD
int classSize(Turma *turma)
{
    return turma->topo + 1;
}


Boolean removeTop(Turma *turma)
{
    if(classIsEmpty(turma))
        return FALSE;
    turma->topo--;
    return TRUE;
}

void transfer(Turma *tOrigem, Turma *tDestino, Aluno *aluno)
{
    if(classIsEmpty(tOrigem) == TRUE)
        printf("Impossivel transferir estudante, a turma de origem esta vazia!");

    if(classIsFull(tDestino) == TRUE)
        printf("Impossivel transferir estudante, a turma de destino esta cheia!");

    //Verificar se o estudante a ser transferido existe

}

void removeStudent(Turma *turma, Turma *turmab, int num_aluno, char operacao)
{
    Turma aux;
    initializeClass(&aux);

    if(studentExists(turma, num_aluno) == STUDENT_NOT_EXISTS)
        printf("Aluno nao existe\n");

    while(classSize(turma) > 0 && num_aluno != turma->alunos[turma->topo].numero_aluno)
    {
        insertStudent(&aux, &turma->alunos[turma->topo]);
        removeTop(turma);
    }

    if(classSize(turma) > 0)
        {
            if(operacao == 'T')
            {
                printf("O %s foi transferido", turma->alunos[turma->topo].nome_aluno);
                insertStudent(turmab, &turma->alunos[turma->topo]);
                removeTop(turma);
            }
            else if (operacao == 'R')
            {
                printf("O %s foi removido", turma->alunos[turma->topo].nome_aluno);
                removeTop(turma);
            }

        }

    while(classSize(&aux) > 0)
    {
        insertStudent(turma, &aux.alunos[aux.topo]);
        removeTop(&aux);
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
void registerStudent(Aluno *alunos)
{
    getchar();
    printf("Insira o Nome: ");
    gets(alunos->nome_aluno);
    printf("Insira a idade: ");
    scanf("%d", &alunos->idade);
    printf("Insira o Numero: ");
    scanf("%d", &alunos->numero_aluno);
    printf("Insira o Curso: ");
    getchar();
    gets(alunos->curso);
    printf("Insira o Ano de Frequencia: ");
    scanf("%d", &alunos->ano_frequencia);

}


int studentExists(Turma *turma, int num_aluno)
{
    if(classIsEmpty(turma))
        return STACK_ISEMPTY;
    else
    {
       for(int i=0; i < turma->topo+1; i++)
       {
           if(num_aluno == turma->alunos[i].numero_aluno)
               return STUDENT_EXISTS;
       }
       return STUDENT_NOT_EXISTS;
    }
    return OK;
}

int insertStudent(Turma *turma, Aluno *aluno)
{
    if(classIsFull(turma))
        return STACK_ISFULL;
    else
    {
        if(studentExists(turma, aluno->numero_aluno) == STUDENT_EXISTS)
            return STUDENT_EXISTS;
        else
        {
            turma->topo++;
            turma->alunos[turma->topo] = *aluno;
        }
    }
    return OK;
}

void showStudent(Turma *turma, int num_aluno)
{
       if(studentExists(turma, num_aluno) == STUDENT_EXISTS)
       {
           for(int i=turma->topo+1; i >= 0; i--)
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

void listAll(Turma *turma)
{
    if(classIsEmpty(turma))
        printf("A turma nao tem alunos");
    else
    {   int i = classSize(turma) - 1;
        while(i >= 0)
        {
            printf("\nNome: %s - ", turma->alunos[i].nome_aluno);
            printf("Numero: %d\n", turma->alunos[i].numero_aluno);
            i--;
        }
    }
}

int highestAge(Turma *turma)
{   int aux = turma->alunos[0].idade;
    if(classIsEmpty(turma))
        return STACK_ISEMPTY;
    else
    {
        for(int i=0; i < turma->topo+1; i++)
        {
            if(aux < turma->alunos[i].idade)
                aux = turma->alunos[i].idade;
        }
    }
    return aux;
}

void showMostAgedStudent(Turma *turma)
{
    int age = highestAge(turma);
    for(int i=0; i<turma->topo+1; i++)
    {
        if(age == turma->alunos[i].idade)
        {
            printf("O aluno com a maior idade da turma é o %s com %d anos de idade",
                   turma->alunos[i].nome_aluno,
                   turma->alunos[i].idade);
        }
    }
}

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
