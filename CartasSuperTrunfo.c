#include <stdio.h>

int main() {
    // VARIAVEIS DA CARTA 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // VARIAVEIS DA CARTA 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // CADASTRO DA CARTA 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a letra do Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da Carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    // CADASTRO DA CARTA 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite a letra do Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // EXIBICAO FINAL
    printf("\n\n=== CARTAS CADASTRADAS ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;
}