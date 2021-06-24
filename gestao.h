#ifndef GESTAO_ESCOLA_INCLUDED
#define GESTAO_ESCOLA_INCLUDED

#define NOT_FOUND         -1       // Item não existe
#define OK                 0       // Operação realizada com sucesso
#define STACK_ISFULL       1       // Pilha cheia
#define STACK_ISEMPTY      2       // Pilha vazia
#define TAM                20      // Tamanho do vecto
#define NAME               25
#define CURSO              25

typedef struct
{
    char nome_aluno[NAME];
    int numero_aluno;
    int idade;
    char curso[CURSO];
    int ano_frequencia;
}Aluno;

typedef struct
{
    int id_turma;
    Aluno *alunos;
    int TItem[TAM];
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




// Funcoes da escola


#endif // GESTAO_ESCOLA_INCLUDED

