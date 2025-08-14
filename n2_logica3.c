#include <stdio.h>

int main() {
    // Dados da Carta 1
    char nomePais1[50] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1444.73;
    int pontosTuristicos1 = 20;
    float densidadeDemografica1 = populacao1 / area1;

    // Dados da Carta 2
    char nomePais2[50] = "Argentina";
    int populacao2 = 45376763;
    float area2 = 2780400.0;
    float pib2 = 487.23;
    int pontosTuristicos2 = 15;
    float densidadeDemografica2 = populacao2 / area2;

    int opcao1, opcao2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma_carta1 = 0, soma_carta2 = 0;

    // Menu para o primeiro atributo
    printf("===== Super Trunfo de Paises - Escolha do 1o atributo =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    // Menu para o segundo atributo
    printf("\n===== Escolha do 2o atributo =====\n");

    // Exibe novamente o menu, mas "desabilita" a opção já escolhida
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Numero de Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }
    printf("Escolha o segundo atributo: ");
    scanf("%d", &opcao2);

    // Verifica se o jogador escolheu dois atributos diferentes
    if (opcao1 == opcao2) {
        printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    printf("\n===== Comparacao de Atributos =====\n");

    // Primeiro atributo escolhido
    switch(opcao1) {
        case 1:
            printf("Comparando Populacao:\n");
            valor1_carta1 = (float)populacao1;
            valor1_carta2 = (float)populacao2;
            break;
        case 2:
            printf("Comparando Area:\n");
            valor1_carta1 = area1;
            valor1_carta2 = area2;
            break;
        case 3:
            printf("Comparando PIB:\n");
            valor1_carta1 = pib1;
            valor1_carta2 = pib2;
            break;
        case 4:
            printf("Comparando Numero de Pontos Turisticos:\n");
            valor1_carta1 = (float)pontosTuristicos1;
            valor1_carta2 = (float)pontosTuristicos2;
            break;
        case 5:
            printf("Comparando Densidade Demografica:\n");
            valor1_carta1 = densidadeDemografica1;
            valor1_carta2 = densidadeDemografica2;
            break;
        default:
            printf("Atributo invalido!\n");
            return 1;
    }

    printf("%s: %.2f\n", nomePais1, valor1_carta1);
    printf("%s: %.2f\n\n", nomePais2, valor1_carta2);

    // Segundo atributo escolhido
    switch(opcao2) {
        case 1:
            printf("Comparando Populacao:\n");
            valor2_carta1 = (float)populacao1;
            valor2_carta2 = (float)populacao2;
            break;
        case 2:
            printf("Comparando Area:\n");
            valor2_carta1 = area1;
            valor2_carta2 = area2;
            break;
        case 3:
            printf("Comparando PIB:\n");
            valor2_carta1 = pib1;
            valor2_carta2 = pib2;
            break;
        case 4:
            printf("Comparando Numero de Pontos Turisticos:\n");
            valor2_carta1 = (float)pontosTuristicos1;
            valor2_carta2 = (float)pontosTuristicos2;
            break;
        case 5:
            printf("Comparando Densidade Demografica:\n");
            valor2_carta1 = densidadeDemografica1;
            valor2_carta2 = densidadeDemografica2;
            break;
        default:
            printf("Atributo invalido!\n");
            return 1;
    }

    printf("%s: %.2f\n", nomePais1, valor2_carta1);
    printf("%s: %.2f\n\n", nomePais2, valor2_carta2);

    // Aplicar regras (densidade: menor vence, outros: maior vence)
    int vitoria_carta1_atributo1 = (opcao1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    int vitoria_carta1_atributo2 = (opcao2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);

    // Soma dos atributos
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;

    printf("\n===== Resultado Final =====\n");
    printf("Soma dos Atributos:\n");
    printf("%s: %.2f\n", nomePais1, soma_carta1);
    printf("%s: %.2f\n", nomePais2, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("\nVencedor: %s\n", nomePais1);
    } else if (soma_carta2 > soma_carta1) {
        printf("\nVencedor: %s\n", nomePais2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}

