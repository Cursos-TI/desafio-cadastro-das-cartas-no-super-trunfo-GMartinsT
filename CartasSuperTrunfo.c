#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Carta 1
    char estado1;                // Uma letra de 'A' a 'H'
    char codigo1[4];             // Ex: "A01", "B03"
    char cidade1[50];            // Nome da cidade
    int populacao1;              // Número de habitantes
    float area1;                 // Área em km²
    float pib1;                  // Produto Interno Bruto
    int pontosTuristicos1;       // Número de pontos turísticos

    // Carta 2
    char estado2;                // Uma letra de 'A' a 'H'
    char codigo2[4];             // Ex: "A01", "B03"
    char cidade2[50];            // Nome da cidade
    int populacao2;              // Número de habitantes
    float area2;                 // Área em km²
    float pib2;                  // Produto Interno Bruto
    int pontosTuristicos2;       // Número de pontos turísticos

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

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %3s \n", codigo1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n \n", pontosTuristicos1);

    // Rotina da segunda carta
    printf("Agora vamos para a segunda carta!");
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

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %3s \n", codigo2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);

    return 0;
}
