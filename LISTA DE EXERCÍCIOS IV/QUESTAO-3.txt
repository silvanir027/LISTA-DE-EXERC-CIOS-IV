
#include <stdio.h>

struct Aluno {
    char nome[50];
    char nota[10];
};

int main() {
    struct Aluno alunos[5];
    int i;
    int indice;

    for (i = 0; i < 5; i++) {
        printf("Nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 50, stdin);

        printf("Nota do aluno %d: ", i + 1);
        fgets(alunos[i].nota, 10, stdin);
    }

    printf("Indice para mudar a nota: ");
    scanf("%d", &indice);
    getchar();

    printf("Nova nota: ");
    fgets(alunos[indice].nota, 10, stdin);

    printf("Aluno atualizado:\n");
    printf("Nome: %s", alunos[indice].nome);
    printf("Nota: %s", alunos[indice].nota);

    return 0;
}
