#include <stdio.h>

int main() {
    // Carta 1
    char estado1;                 // Uma letra de 'A' a 'H'
    char codigo1[4];              // Ex: "A01", "B03"
    char cidade1[50];             // Nome da cidade
    unsigned long int populacao1; // Número de habitantes
    float area1;                  // Área em km²
    float pib1;                   // Produto Interno Bruto
    int pontosTuristicos1;        // Número de pontos turísticos
    float densidadePop1;          // Densidade populacional (população/área)
    float pibPerCapita1;          // PIB per capita (PIB/população)
    float superPoder1;            // Super Poder calculado

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePop2;
    float pibPerCapita2;
    float superPoder2;

    // Rotina da primeira carta
    printf("Vamos começar com a primeira carta! \n");
    printf("Digite o estado da sua carta(A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da sua carta: \n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%49s", cidade1);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto(PIB) da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidadePop1 = populacao1 / area1;               // habitantes por km2
    pibPerCapita1 = pib1 / populacao1;                // pib por habitante
    superPoder1 = (float)populacao1 + area1 + pib1 +
                  pontosTuristicos1 + pibPerCapita1 +
                  (1.0f / densidadePop1);

    // Rotina da segunda carta
    printf("\nAgora vamos para a segunda carta! \n");
    printf("Digite o estado da sua carta(A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da sua carta: \n");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%49s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto(PIB) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidadePop2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 +
                  pontosTuristicos2 + pibPerCapita2 +
                  (1.0f / densidadePop2);

    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePop1 < densidadePop2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
