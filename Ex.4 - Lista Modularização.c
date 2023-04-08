/*Crie um sistema de caixa eletrônico, utilizando menus (switch) e outros recursos, 
que realizem operações financeiras a partir de funções especificamente projetadas para tal. Lembre-se de
que o caixa eletrônico é um programa que roda como repetição contínua, até que o usuário decida encerrar as operações. Operações: Depósito, Saque e Saldo. */

#include <stdio.h>

float saldo = 0.0; // saldo inicial é zero

void deposito() {
    float valor;
    printf("Digite o valor a ser depositado: ");
    scanf("%f", &valor);
    saldo += valor;
    printf("Depósito realizado com sucesso!\n\n");
}

void saque() {
    float valor;
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &valor);
    if (valor > saldo) {
        printf("Erro: saldo insuficiente!\n\n");
    } else {
        saldo -= valor;
        printf("Saque realizado com sucesso!\n\n");
    }
}

void verSaldo() {
    printf("Saldo atual: %.2f\n\n", saldo);
}

int main() {
    int opcao;

    do {
        printf("Selecione uma opção:\n");
        printf("1 - Depósito\n");
        printf("2 - Saque\n");
        printf("3 - Ver saldo\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                deposito();
                break;
            case 2:
                saque();
                break;
            case 3:
                verSaldo();
                break;
            case 0:
                printf("Encerrando operações...\n");
                break;
            default:
                printf("Opção inválida!\n\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
