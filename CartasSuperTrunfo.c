#include <stdio.h>

int main() {
    // Carta 1
    char estado1;                // Uma letra de 'A' a 'H'
    char codigo1[4];             // Ex: "A01", "B03"
    char cidade1[50];            // Nome da cidade
    int populacao1;              // Número de habitantes
    float area1;                 // Área em km²
    float pib1;                  // Produto Interno Bruto
    int pontosTuristicos1;       // Número de pontos turísticos
    float densidadePop1;         // Densidade populacional (população/área)
    float pibPerCapita1;         // PIB per capita (PIB/população)

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePop2;
    float pibPerCapita2;

    //Rotina da primeira carta
    printf("Vamos começar com a primeira carta! \n");
    printf("Digite o estado da sua carta(A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da sua carta: \n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%49s", cidade1);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("Digite o produto interno bruto(PIB) da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional
    densidadePop1 = (float) populacao1 / area1;

    // Cálculo do PIB per Capita
    pibPerCapita1 = (float) pib1 / populacao1;

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %3s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);
    printf("Densidade populacional: %.2f \n", densidadePop1);
    printf("PIB per Capita: %.2f \n \n", pibPerCapita1);

    // Rotina da segunda carta
    printf("Agora vamos para a segunda carta! \n");
    printf("Digite o estado da sua carta(A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da sua carta: \n");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%49s", cidade2);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);

    printf("Digite o produto interno bruto(PIB) da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional
    densidadePop2 = (float) populacao2 / area2;

    // Cálculo do PIB per Capita
    pibPerCapita2 = (float) pib2 / populacao2;

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %3s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);
    printf("Densidade populacional: %.2f \n", densidadePop2);
    printf("PIB per Capita: %.2f \n", pibPerCapita2);

    return 0;
}
