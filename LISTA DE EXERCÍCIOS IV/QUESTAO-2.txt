
#include <stdio.h>

struct Aluno {
    char nome[50];
    char idade[10];
    char nota[10];
};

int main() {
    struct Aluno alunos[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 50, stdin);

        printf("Idade do aluno %d: ", i + 1);
        fgets(alunos[i].idade, 10, stdin);

        printf("Nota do aluno %d: ", i + 1);
        fgets(alunos[i].nota, 10, stdin);
    }

    for (i = 0; i < 5; i++) {
        printf("Nome: %s", alunos[i].nome);
        printf("Idade: %s", alunos[i].idade);
        printf("Nota: %s\n", alunos[i].nota);
    }

    return 0;
}
