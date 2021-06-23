#ifndef GESTAO_ESCOLA
#define GESTAO_ESCOLA

#define NAME 25
#define CURSO 25

#typedef struct 
{
    char[NAME] nome_aluno;
    int numero_aluno;
    int idade;
    char[CURSO] curso;
    int ano_frequencia;
}Aluno;

#typedef struct 
{
    int id_turma;
    Aluno *alunos;
}Turma;

#typedef struct 
{
    Turma *turmas;
    int numero_professores;
}Escola;



#endif GEStAO_ESCOLA