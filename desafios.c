#include <stdio.h>
#include "cartas.h"

void desafio1() {
    Carta c1 = {"Dragao", 80, 60, 40};
    Carta c2 = {"Fenix", 70, 90, 50};
    int atributo;

    printf("\n[DESAFIO 1] - Comparacao Simples\n");
    printf("Escolha o atributo para comparar:\n1. Forca\n2. Velocidade\n3. Inteligencia\n");
    scanf("%d", &atributo);

    if (atributo == 1) {
        if (c1.forca > c2.forca) printf("Carta 1 venceu!\n");
        else if (c1.forca < c2.forca) printf("Carta 2 venceu!\n");
        else printf("Empate!\n");
    } else if (atributo == 2) {
        if (c1.velocidade > c2.velocidade) printf("Carta 1 venceu!\n");
        else if (c1.velocidade < c2.velocidade) printf("Carta 2 venceu!\n");
        else printf("Empate!\n");
    } else if (atributo == 3) {
        if (c1.inteligencia > c2.inteligencia) printf("Carta 1 venceu!\n");
        else if (c1.inteligencia < c2.inteligencia) printf("Carta 2 venceu!\n");
        else printf("Empate!\n");
    } else {
        printf("Atributo invalido.\n");
    }
}

void desafio2() {
    Carta c1 = {"Cavaleiro", 65, 50, 70};
    Carta c2 = {"Golem", 85, 30, 40};
    int opcao;

    printf("\n[DESAFIO 2] - Multiplos Atributos + Menu\n");
    printf("Escolha o atributo:\n1. Forca\n2. Velocidade\n3. Inteligencia\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            if (c1.forca > c2.forca) printf("Carta 1 venceu!\n");
            else if (c1.forca < c2.forca) printf("Carta 2 venceu!\n");
            else printf("Empate!\n");
            break;
        case 2:
            if (c1.velocidade > c2.velocidade) printf("Carta 1 venceu!\n");
            else if (c1.velocidade < c2.velocidade) printf("Carta 2 venceu!\n");
            else printf("Empate!\n");
            break;
        case 3:
            if (c1.inteligencia > c2.inteligencia) printf("Carta 1 venceu!\n");
            else if (c1.inteligencia < c2.inteligencia) printf("Carta 2 venceu!\n");
            else printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }
}

void desafio3() {
    Carta c1 = {"Grifo", 75, 85, 60};
    Carta c2 = {"Minotauro", 90, 40, 50};

    printf("\n[DESAFIO 3] - Comparacao Avancada com Operador Ternario\n");

    int resultado1 = (c1.forca > c2.forca) ? 1 : (c1.forca < c2.forca) ? 2 : 0;
    int resultado2 = (c1.velocidade > c2.velocidade) ? 1 : (c1.velocidade < c2.velocidade) ? 2 : 0;

    if (resultado1 == resultado2) {
        if (resultado1 == 1) printf("Carta 1 venceu nos dois atributos!\n");
        else if (resultado1 == 2) printf("Carta 2 venceu nos dois atributos!\n");
        else printf("Empate total!\n");
    } else {
        printf("Resultado misto: Carta 1 venceu um atributo, Carta 2 venceu outro.\n");
    }
}