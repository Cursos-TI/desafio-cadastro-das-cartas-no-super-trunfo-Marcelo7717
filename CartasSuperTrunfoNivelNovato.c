#include <stdio.h>

int main() {
 
    // Dados da Primeira Carta
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da Segunda Carta
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    // Fazendo a Primeira Carta
    printf("Digite os dados da carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
  
    // Fazendo a Segunda Carta
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
  

    // Exibição das Cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    
    return 0;
}
