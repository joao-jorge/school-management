#ifndef GESTAO_ESCOLA_INCLUDED
#define GESTAO_ESCOLA_INCLUDED

<<<<<<< HEAD
#define STUDENT_NOT_EXISTS  -1
#define OK                   0
#define STACK_ISFULL         1
#define STACK_ISEMPTY        2
#define STUDENT_EXISTS       3
=======
#define NOT_FOUND         -1       // Item não existe
#define OK                 0       // Operação realizada com sucesso
#define STACK_ISFULL       1       // Pilha cheia
#define STACK_ISEMPTY      2       // Pilha vazia
#define FOUND              3       // Encontrado

>>>>>>> 399da570fb11700c7f737cd9e4c757daccd08866

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

<<<<<<< HEAD
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

=======
/* Funcoes da turma */
void initializeClass(Turma *turma);

int classIsEmpty(Turma *turma);

int classIsFull(Turma *turma);

void insertStudent(Turma *turma, Aluno *aluno);

int classSize(Turma *turma);


/* Funcoes dos estudantes */
>>>>>>> 399da570fb11700c7f737cd9e4c757daccd08866

int removeStudent(Turma *turma);

void showStudent(Turma *turma, int num_aluno);

int studentExists(Turma *turma, int num_aluno);

void showLastInserted(Turma *turma);

<<<<<<< HEAD
#endif // GESTAO_ESCOLA_INCLUDED
=======
void registerStudent(Aluno *alunos);

void listAll(Turma *turma);

int highestAge(Turma *turma);

void showMostAgedStudent(Turma *turma);

// Funcoes da escola

#endif // GESTAO_ESCOLA_INCLUDED

>>>>>>> 399da570fb11700c7f737cd9e4c757daccd08866
