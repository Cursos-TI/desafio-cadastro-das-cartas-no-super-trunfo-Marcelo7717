#include <stdio.h>

int main() {
 
    // Dados da Primeira Carta
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    //Alteração do desafio de nivel mestre: int para unsigned long int
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    // Adição do desafio de nivel aventureiro 
    float densidade1;
    float PPC1;
    // Adição do desafio de nivel mestre
    float SP1;
    float densidade1i;

    // Dados da Segunda Carta
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    //Alteração do desafio de nivel mestre: int para unsigned long int
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    // Adição do desafio de nivel aventureiro 
    float densidade2;
    float PPC2;
    // Adição do desafio de nivel mestre
    float SP2; 
    float densidade2i;

    // Fazendo a Primeira Carta
    printf("Digite os dados da carta 1:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade1);
    printf("População: ");
    //Alteração do desafio de nivel mestre: %d para %lu
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    // Adição do desafio de nivel aventureiro 
    densidade1 = populacao1 / area1;
    PPC1 = pib1 / populacao1;
    // Adição do desafio de nivel mestre
    densidade1i = area1 / populacao1;
    SP1 = (float) populacao1 + area1 + pib1 + (float) pontosTuristicos1 + PPC1 + densidade1i;


    // Fazendo a Segunda Carta
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomecidade2);
    printf("População: ");
    //Alteração do desafio de nivel mestre: %d para %lu
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    // Adição do desafio de nivel aventureiro 
    densidade2 = populacao2 / area2;
    PPC2 = pib2 / populacao2;
    // Adição do desafio de nivel mestre
    densidade2i = area1 / populacao1;
    SP2 = (float) populacao2 + area2 + pib2 + (float) pontosTuristicos1 + PPC2 + densidade2i;

    // Exibição das Cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    //Alteração do desafio de nivel mestre: %d para %lu
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    // Adição do desafio de nivel aventureiro 
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", PPC1);
    // Adição do desafio de nivel mestre
    printf("Super poder: %.2f\n", SP1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    //Alteração do desafio de nivel mestre: %d para %lu
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    // Adição do desafio de nivel aventureiro 
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", PPC2);
    // Adição do desafio de nivel mestre
    printf("Super poder: %.2f\n", SP2);


    // Adição do desafio de nivel mestre
    // Comparando as cartas
    printf("Comparação de cartas - Atributo (População):\n");

    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 01 - %c venceu (1)\n", estado1);
    }else{
        printf("Resultado: Carta 02 - %c venceu (0)\n", estado2);
    };

    printf("Comparação de cartas - Atributo (Área):\n");

    if (area1 > area2)
    {
        printf("Resultado: Carta 01 - %c venceu (1)\n", estado1);
    }else{
        printf("Resultado: Carta 02 - %c venceu (0)\n", estado2);
    };

     printf("Comparação de cartas - Atributo (PIB):\n");

    if (pib1 > pib2)
    {
        printf("Resultado: Carta 01 - %c venceu (1)\n", estado1);
    }else{
        printf("Resultado: Carta 02 - %c venceu (0)\n", estado2);
    };

    printf("Comparação de cartas - Atributo (Pontos Turísticos):\n");

    if (pontosTuristicos1 > pontosTuristicos2)
    {
        printf("Resultado: Carta 01 - %c venceu (1)\n", estado1);
    }else{
        printf("Resultado: Carta 02 - %c venceu (0)\n", estado2);
    };

     printf("Comparação de cartas - Atributo (Densidade Populacional):\n");

    if (densidade1 < densidade2)
    {
        printf("Resultado: Carta 01 - %c venceu (1)\n", estado1);
    }else{
        printf("Resultado: Carta 02 - %c venceu (0)\n", estado2);
    };

     printf("Comparação de cartas - Atributo (PIB per Capita):\n");

    if (PPC1 > PPC2)
    {
        printf("Resultado: Carta 01 - %c venceu (1)\n", estado1);
    }else{
        printf("Resultado: Carta 02 - %c venceu (0)\n", estado2);
    };

     printf("Comparação de cartas - Atributo (Super Poder):\n");

    if (SP1 > SP2)
    {
        printf("Resultado: Carta 01 - %c venceu (1)\n", estado1);
    }else{
        printf("Resultado: Carta 02 - %c venceu (0)\n", estado2);
    };


    return 0;
}
