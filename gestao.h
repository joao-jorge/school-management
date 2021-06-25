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
void inicilizarTurma(Turma *turma);

int turmaIsVazia(Turma *turma);

int turmaIsCheia(Turma *turma);

void insereAlunoNaTurma(Turma *turma, Aluno *aluno);

int tamanhoDaTurma(Turma *turma);

int removeAlunoNaTurma(Turma *turma);

void findStudent(Turma *turma, int num_aluno);

// Funcoes da escola

#endif // GESTAO_ESCOLA_INCLUDED

