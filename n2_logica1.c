#include <stdio.h>

int main() {
    // Definição das variáveis da Carta 1
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Definição das variáveis da Carta 2
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Informe o estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Informe o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    printf("Informe a área (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Informe o estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Informe o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    printf("Informe a área (em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita - Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // Cálculo da densidade populacional e PIB per capita - Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Comparação de atributo escolhido: População
    printf("\nComparação de cartas (Atributo: População):\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
