#include <stdio.h>
#include <string.h>

#define TAMANHO 100

typedef struct {
    char nome[20];
    char estilo[20];
    int tamanho;
    int rank;
} BANDA;

void leBanda(BANDA *v, int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Digite o nome da banda %d: ", i + 1);
        scanf("%s", v[i].nome);
        printf("Digite o estilo da banda %d: ", i + 1);
        scanf("%s", v[i].estilo);
        printf("Digite o tamanho da banda %d: ", i + 1);
        scanf("%d", &v[i].tamanho);
        printf("Digite o rank da banda %d: ", i + 1);
        scanf("%d", &v[i].rank);
    }
}

void listarTodas(BANDA *exib, int qtd) {
    for (int i = 0; i < qtd; i++) {
        printf("Banda %d\n", i + 1);
        printf("Nome: %s\n", exib[i].nome);
        printf("Estilo: %s\n", exib[i].estilo);
        printf("Tamanho: %d\n", exib[i].tamanho);
        printf("Rank: %d\n", exib[i].rank);
    }
}

void buscaPorNome(BANDA *busca, int qtd) {
    char aux[20];
    int achou = 0;
    printf("\nInforme o nome da banda a buscar: ");
    scanf("%s", aux);
    for (int i = 0; i < qtd; i++) {
        if (strcmp(busca[i].nome, aux) == 0) {
            achou = 1;
            printf("Banda %d\n", i + 1);
            printf("Nome: %s\n", busca[i].nome);
            printf("Estilo: %s\n", busca[i].estilo);
            printf("Tamanho: %d\n", busca[i].tamanho);
            printf("Rank: %d\n", busca[i].rank);
        }
    }
    if (!achou) {
        printf("Nenhuma banda encontrada com o nome especificado.\n");
    }
}

void buscaPorEstilo(BANDA *busca, int qtd) {
    char x[20];
    int achar = 0;
    printf("\nInforme o estilo da banda a buscar: ");
    scanf("%s", x);
    for (int i = 0; i < qtd; i++) {
        if (strcmp(busca[i].estilo, x) == 0) {
            achar = 1;
            printf("Banda %d\n", i + 1);
            printf("Nome: %s\n", busca[i].nome);
            printf("Estilo: %s\n", busca[i].estilo);
            printf("Tamanho: %d\n", busca[i].tamanho);
            printf("Rank: %d\n", busca[i].rank);
        }
    }
    if (!achar) {
        printf("Nenhuma banda encontrada com o nome especificado.\n");
    }
}

void menu() {
    BANDA v[TAMANHO];
    int op = 0, quant = 0;
    do {
        printf("1 - Cadastrar banda\n");
        printf("2 - Exibir todas as bandas cadastradas\n");
        printf("3 - Procurar banda por nome\n");
        printf("4 - Procurar banda por estilo\n");
        printf("5 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                printf("Digite a quantidade de bandas a serem cadastradas: ");
                scanf("%d", &quant);
                leBanda(v, quant);
                break;
            case 2:
                listarTodas(v, quant);
                break;
            case 3:
                buscaPorNome(v, quant);
                break;
            case 4:
                buscaPorEstilo(v, quant);
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (op != 5);
}

int main() {
    menu();
    return 0;
}