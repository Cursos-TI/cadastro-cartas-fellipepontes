#include <stdio.h>

int main() {
    // Declaração de variáveis para duas cartas (cartas 1 e 2)
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int pop1, pop2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Cadastro Carta 1
    printf("Cadastro Carta 1 - Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Cadastro Carta 2 (similar à 1)
    printf("\nCadastro Carta 2 - Estado (A-H): ");
    scanf(" %c", &estado2);
    // ... repetir printf/scanf para nomeCidade2, pop2, area2, pib2, pontos2 ...

    // Exibição dos dados de ambas as cartas
    printf("\nCarta 1: %s (%c) - Pop: %d\n", nomeCidade1, estado1, pop1);
    printf("Carta 2: %s (%c) - Pop: %d\n", nomeCidade2, estado2, pop2);

    return 0;
}
