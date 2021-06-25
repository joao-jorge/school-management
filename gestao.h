#ifndef GESTAO_ESCOLA_INCLUDED
#define GESTAO_ESCOLA_INCLUDED

#define NOT_FOUND         -1       // Item não existe
#define OK                 0       // Operação realizada com sucesso
#define STACK_ISFULL       1       // Pilha cheia
#define STACK_ISEMPTY      2       // Pilha vazia
#define FOUND              3       // Encontrado
#define STACK_TAM          20      // Tamanho do vecto

#define NAME_LENGTH        25
#define CURSO_LENGTH       25

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
    Turma *turmas;
    int numero_professores;
}Escola;

/* Funcoes da turma */
void inicitializeClass(Turma *turma);

int classIsEmpty(Turma *turma);

int classIsFull(Turma *turma);

void insertStudent(Turma *turma, Aluno *aluno);

int classSize(Turma *turma);

int removeStudent(Turma *turma);

void showStudent(Turma *turma, int num_aluno);

int studentExists(Turma *turma, int num_aluno);

void showLastInserted(Turma *turma);

// Funcoes da escola

#endif // GESTAO_ESCOLA_INCLUDED

