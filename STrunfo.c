#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
printf("Digite a letra do estado (A-H) da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Digite o código da primeira carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Digite o nome da cidade da primeira carta: ");
    scanf(" %49s", cidade1);

    printf("Digite a população da primeira cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a área da primeira cidade (km²): ");
    scanf(" %f", &area1);

    printf("Digite o PIB da primeira cidade (em bilhões): ");
    scanf(" %f", &pib1);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\nDigite a letra do estado (A-H) da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade da segunda carta: ");
    scanf(" %49s", cidade2);

    printf("Digite a população da segunda cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da segunda cidade (km²): ");
    scanf(" %f", &area2);
printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf(" %d", &pontosTuristicos2);

    printf("\n----------------------------\n");
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    
      // Cálculos
      float densidade1 = populacao1 / area1;
      float densidade2 = populacao2 / area2;
      float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
      float pibPerCapita2 = (pib2 * 1000000000) / populacao2;
      float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
      float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);
      
      // Comparação de poderes
      printf("\n========================================\n");
      printf("         COMPARAÇÃO DE PODERES\n");
      printf("========================================\n");
      printf("População: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
      printf("Área: Carta %d venceu\n", area1 > area2 ? 1 : 2);
      printf("PIB: Carta %d venceu\n", pib1 > pib2 ? 1 : 2);
      printf("Pontos Turísticos: Carta %d venceu\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2);
      printf("Densidade Populacional: Carta %d venceu\n", densidade1 < densidade2 ? 1 : 2);
      printf("PIB per Capita: Carta %d venceu\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2);
      printf("Super Poder: Carta %d venceu\n", superPoder1 > superPoder2 ? 1 : 2);
      
      // Resultado final
      printf("\n========================================\n");
      printf("         RESULTADO FINAL\n");
      printf("========================================\n");
      if (superPoder1 > superPoder2) {
          printf("A Carta 1 é a vencedora com um Super Poder de %.2f contra %.2f!\n", superPoder1, superPoder2);
      } else if (superPoder2 > superPoder1) {
          printf("A Carta 2 é a vencedora com um Super Poder de %.2f contra %.2f!\n", superPoder2, superPoder1);
      } else {
          printf("Empate! Ambas as cartas possuem um Super Poder de %.2f!\n", superPoder1);
      }
    return 0;
        
    }
