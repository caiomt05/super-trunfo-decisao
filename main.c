#include <stdio.h>
#include "cartas.h"
#include "desafios.h"

int main() {
    int opcao;

    printf("==== SUPER TRUNFO - ESTRUTURAS DE DECISAO ====\n");

    do {
        printf("\nMenu Principal:\n");
        printf("1. Desafio 1 - Comparacao Simples (if/else)\n");
        printf("2. Desafio 2 - Multiplos Atributos (if/else if + switch)\n");
        printf("3. Desafio 3 - Comparacao Avancada (operador ternario)\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                desafio1();
                break;
            case 2:
                desafio2();
                break;
            case 3:
                desafio3();
                break;
            case 0:
                printf("Saindo do jogo. Ate mais!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}