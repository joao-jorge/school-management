#include <stdio.h>
#include <stdlib.h>
#include "gestao.h"

int main ()
{
    Turma *turma = (Turma*)malloc(sizeof(Turma));
    //Escola *escola = (Escola*)malloc(sizeof(Escola));
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));;


    initializeClass(turma);
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
        printf("Estudante mais velho: %d", highestAge(turma));

        //showStudent(turma, num_aluno);
       // printf("\nstatus: %d\n", studentExists(turma, num_aluno));
    /*


        printf("\n\nUltimo inserido");
        showLastInserted(turma);
        listAll(turma);
    */


}
