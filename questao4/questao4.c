
#include <stdio.h>

struct Aluno {
    char nome[50];
    char idade[10];
    char nota[10];
};

int main() {
    struct Aluno alunos[4];
    int total = 0;
    char opcao[5];
    int i;
    int indice;

    while (1) {
        printf("1 - Criar aluno\n");
        printf("2 - Exibir alunos\n");
        printf("3 - Remover aluno\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        fgets(opcao, 5, stdin);

        if (opcao[0] == '1') {
            if (total < 4) {
                printf("Nome: ");
                fgets(alunos[total].nome, 50, stdin);
                printf("Idade: ");
                fgets(alunos[total].idade, 10, stdin);
                printf("Nota: ");
                fgets(alunos[total].nota, 10, stdin);
                total++;
            }
        }

        if (opcao[0] == '2') {
            for (i = 0; i < total; i++) {
                printf("Aluno %d:\n", i);
                printf("Nome: %s", alunos[i].nome);
                printf("Idade: %s", alunos[i].idade);
                printf("Nota: %s\n", alunos[i].nota);
            }
        }

        if (opcao[0] == '3') {
            printf("Indice para remover: ");
            scanf("%d", &indice);
            getchar();
            if (indice >= 0 && indice < total) {
                for (i = indice; i < total - 1; i++) {
                    alunos[i] = alunos[i + 1];
                }
                total--;
            }
        }

        if (opcao[0] == '4') {
            break;
        }
    }

    return 0;
}
