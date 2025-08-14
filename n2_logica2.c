#include <stdio.h>

#include <stdio.h>

int main() {
    // Dados da Carta 1
    char nomePais1[50] = "Brasil";
    int populacao1 = 213000000;          // População
    float area1 = 8515767.0;              // Área em km²
    float pib1 = 1444.73;                 // PIB em bilhões de dólares
    int pontosTuristicos1 = 20;           // Número de pontos turísticos
    float densidadeDemografica1 = populacao1 / area1; // Densidade demográfica

    // Dados da Carta 2
    char nomePais2[50] = "Argentina";
    int populacao2 = 45376763;
    float area2 = 2780400.0;
    float pib2 = 487.23;
    int pontosTuristicos2 = 15;
    float densidadeDemografica2 = populacao2 / area2;

    int opcao; // Variável para armazenar a opção escolhida pelo usuário

    // Exibe o menu para o usuário
    printf("===== Super Trunfo de Paises =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    printf("\n");

    // Menu com switch para tratar a escolha do usuário
    switch(opcao) {
        case 1:
            printf("Comparando Populacao:\n");
            printf("%s: %d habitantes\n", nomePais1, populacao1);
            printf("%s: %d habitantes\n", nomePais2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: %s venceu!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: %s venceu!\n", nomePais2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 2:
            printf("Comparando Area:\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);

            if (area1 > area2) {
                printf("\nResultado: %s venceu!\n", nomePais1);
            } else if (area2 > area1) {
                printf("\nResultado: %s venceu!\n", nomePais2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 3:
            printf("Comparando PIB:\n");
            printf("%s: %.2f bilhoes de dolares\n", nomePais1, pib1);
            printf("%s: %.2f bilhoes de dolares\n", nomePais2, pib2);

            if (pib1 > pib2) {
                printf("\nResultado: %s venceu!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("\nResultado: %s venceu!\n", nomePais2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 4:
            printf("Comparando Numero de Pontos Turisticos:\n");
            printf("%s: %d pontos turisticos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos turisticos\n", nomePais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nResultado: %s venceu!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("\nResultado: %s venceu!\n", nomePais2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        case 5:
            printf("Comparando Densidade Demografica:\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidadeDemografica1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidadeDemografica2);

            if (densidadeDemografica1 < densidadeDemografica2) { // MENOR vence
                printf("\nResultado: %s venceu!\n", nomePais1);
            } else if (densidadeDemografica2 < densidadeDemografica1) {
                printf("\nResultado: %s venceu!\n", nomePais2);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
    }

    return 0;
}
