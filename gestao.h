#ifndef GESTAO_ESCOLA_INCLUDED
#define GESTAO_ESCOLA_INCLUDED

#define STUDENT_NOT_EXISTS  -1
#define OK                   0
#define STACK_ISFULL         1
#define STACK_ISEMPTY        2
#define STUDENT_EXISTS       3

#define NAME_LENGTH        25
#define CURSO_LENGTH       25

#define SCHOOL_TAM         10
#define STACK_TAM          20

typedef struct
{
    char nome_aluno[NAME_LENGTH];
    int numero_aluno;
    int idade;
    char curso[CURSO_LENGTH];
    int ano_frequencia;
}Aluno;

typedef struct
{
    int id_turma;
    Aluno alunos[STACK_TAM];
    int topo;
}Turma;

typedef struct
{
    Turma turmas[SCHOOL_TAM];
    int numero_professores;
    int topo[SCHOOL_TAM+1];
    int base[SCHOOL_TAM+1];
}Escola;

typedef enum {
    FALSE= 0,
    TRUE= 1
} Boolean;

/* Funcoes da turma */
Boolean classIsEmpty(Turma *turma);
Boolean classIsFull(Turma *turma);
void initializeClass(Turma *turma);
int insertStudent(Turma *turma, Aluno *aluno);
int classSize(Turma *turma);

/* Funcoes dos estudantes */
Boolean removeTop(Turma *turma);
void transfer(Turma *origem, Turma *destino, Aluno *aluno);
void removeStudent(Turma *turma, Turma *turmab, int num_aluno, char operacao);
void showStudent(Turma *turma, int num_aluno);
void showLastInserted(Turma *turma);
void registerStudent(Aluno *alunos);
void listAll(Turma *turma);
void showMostAgedStudent(Turma *turma);
int highestAge(Turma *turma);
int studentExists(Turma *turma, int num_aluno);



//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
Boolean escolaTurma(Escola *escola);
Boolean inserirTurma(Turma *turma, Escola *escola);
void listEscola(Escola *escola);
int escolaSize(Escola *escola);


int removeStudent(Turma *turma);

void showStudent(Turma *turma, int num_aluno);

int studentExists(Turma *turma, int num_aluno);

void showLastInserted(Turma *turma);

#endif // GESTAO_ESCOLA_INCLUDED
