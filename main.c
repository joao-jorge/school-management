#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "gestao.h"

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    Turma *turma = (Turma*)malloc(sizeof(Turma));
<<<<<<< HEAD
    Turma *turmaB = (Turma*)malloc(sizeof(Turma));
=======
>>>>>>> 399da570fb11700c7f737cd9e4c757daccd08866
    //Escola *escola = (Escola*)malloc(sizeof(Escola));
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));;


    initializeClass(turma);
<<<<<<< HEAD
    initializeClass(turmaB);
    int count = 0;
    int adv = 0;
    int num_aluno;
    while(count != 9)
    {
        registerStudent(aluno);
        int inserir = insertStudent(turma, aluno);

        if(inserir == STUDENT_EXISTS){
            printf("%d", STUDENT_EXISTS);
            printf("\nEstudante ja existe\n");}

        else if(inserir == STACK_ISFULL)
            printf("\nA turma esta cheia\n");
        else
            printf("\nEstudante Matriculado com sucesso\n");
=======
    int count = 0;
     int num_aluno;
    while(count != 9)
    {
        registerStudent(aluno);
        insertStudent(turma, aluno);
        printf("Tamanho atual da turma: %d", classSize(turma));
        printf("\n\n----------------------------\n\n");
        printf("terminar? ");
        scanf("%d", &count);

    }
        printf("PROCURAR UM ALUNO:");
        scanf("%d", &num_aluno);
        printf("Estudante mais velho: %d", mostAgedStudent(turma));

        //showStudent(turma, num_aluno);
       // printf("\nstatus: %d\n", studentExists(turma, num_aluno));
    /*

>>>>>>> 399da570fb11700c7f737cd9e4c757daccd08866

        printf("\n\nUltimo inserido");
        showLastInserted(turma);
        listAll(turma);
    */


<<<<<<< HEAD
        adv++;
       // printf("Tamanho atual da turma: %d", classSize(turma));
       // printf("\n\n----------------------------\n\n");
        printf("terminar? ");
        scanf("%d", &count);
    }
    /*/
        //printf("PROCURAR UM ALUNO:");
        //scanf("%d", &num_aluno);
        //showMostAgedStudent(turma);
        //showStudent(turma, num_aluno);
        //printf("\nstatus: %d\n", studentExists(turma, num_aluno));
    /*
        printf("\n\nUltimo inserido");
        showLastInserted(turma);

    int num;
    printf("\nRemover o estudante n: ");
    scanf("%d", &num);
    removeStudent(turma, num);
        int num;
        printf("\nInsira o estudante a transferir: ");
        scanf("%d", &num);
        //transfer(turma, turmaB, num);
        removeStudent(turma, turmaB, num, 'R');
        printf("\n\n\n------- TURMA A\n");
        listAll(turma);
        printf("\n\n\n------- TURMA B\n");
        listAll(turmaB);
    */
        int num;
        printf("\nInsira o estudante a transferir: ");
        scanf("%d", &num);
        //transfer(turma, turmaB, num);
        removeStudent(turma, turmaB, num, 'R');
        printf("\n\n\n------- TURMA A\n");
        listAll(turma);
        printf("\n\n\n------- TURMA B\n");
        listAll(turmaB);
}
=======
}
>>>>>>> 399da570fb11700c7f737cd9e4c757daccd08866
