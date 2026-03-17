#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis da Carta 1

  unsigned long int populacao01;
  int pontos_turisticos01;
  char estado01;
  char codigocarta01;
  char nome_cidade01[50];
  float pib01;
  float area01;
  float densidade_populacional01;
  float pib_per_capita01;
  
  // Carta 02

  unsigned long int populacao02;
  int pontos_turisticos02;
  char estado02;
  char codigocarta02;
  char nome_cidade02[50];
  float pib02;
  float area02;
  float densidade_populacional02;
  float pib_per_capita02;
  
  // Área para entrada de dados
  
  // Carta 1

  printf("Vamos iniciar o cadastro da Carta 1\n");

  printf("Estado: ");
  scanf(" %c", &estado01);

  printf("Código da Carta: ");
  scanf(" %c", &codigocarta01);

  printf("Nome da Cidade: ");
  scanf(" %s", &nome_cidade01);

  printf("População: ");
  scanf(" %lu", &populacao01);

  printf("Área (em km²): ");
  scanf(" %f", &area01 );

  printf("PIB: ");
  scanf(" %f", &pib01);

  printf("Número de Pontos Turisticos: ");
  scanf(" %d", &pontos_turisticos01);
  printf("\n");

  densidade_populacional01 = (populacao01 / area01);
  pib_per_capita01 = (pib01 / populacao01);

  // Carta 2

  printf("\nVamos iniciar o cadastro da Carta 2\n");

  printf("Estado: ");
  scanf(" %c", &estado02);

  printf("Código da Carta: ");
  scanf(" %c", &codigocarta02);

  printf("Nome da Cidade: ");
  scanf(" %s", &nome_cidade02);

  printf("População: ");
  scanf(" %lu", &populacao02);

  printf("Área (em km²): ");
  scanf(" %f", &area02);

  printf("PIB: ");
  scanf(" %f", &pib02);

  printf("Número de Pontos Turisticos: ");
  scanf(" %d", &pontos_turisticos02);
  printf("\n");

  densidade_populacional02 = (populacao02 / area02);
  pib_per_capita02 = (pib02 / populacao02);

  // Área para exibição dos dados da cidade

  printf("\n* * * Carta 1 * * *\n");
  printf("Estado: %c\n", estado01);
  printf("Código: %c\n", codigocarta01);
  printf("Nome da Cidade: %s\n", nome_cidade01);
  printf("População: %lu\n", populacao01);
  printf("Área: %.2f km²\n", area01);
  printf("PIB: %.2f bilhões de reais\n", pib01);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos01);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional01);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita01);

  printf("\n* * * Carta 2 * * *\n");
  printf("Estado: %c\n", estado02);
  printf("Código: %c\n", codigocarta02);
  printf("Nome da Cidade: %s\n", nome_cidade02);
  printf("População: %lu\n", populacao02);
  printf("Área: %.2f km²\n", area02);
  printf("PIB: %.2f bilhões de reais\n", pib02);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos02);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional02);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita02);
  printf("\n");
  printf("Obrigado por cadastrar as cartas!\n");
  printf("\n");

  float super_poder1 = (populacao01 + area01 + pib01 + pontos_turisticos01 + pib_per_capita01 + (1/densidade_populacional01));
  float super_poder2 = (populacao02 + area02 + pib02 + pontos_turisticos02 + pib_per_capita02 + (1/densidade_populacional02));

  // Área para comparação entre as cartas

  printf("Fazendo a comparação das cartas:\n");
  printf("População: Carta 1 venceu: %lu\n", populacao01 > populacao02);
  printf("Área: Carta 1 venceu: %d \n", area01 > area02);
  printf("PIB: Carta 1 venceu: %d \n", pib01 > pib02);
  printf("Pontos Turísticos: Carta 1 venceu: %d \n", pontos_turisticos01 > pontos_turisticos02);
  printf("Densidade Populacional: Carta 1 venceu: %.0f \n", densidade_populacional01 < densidade_populacional02);
  printf("PIB per Capita: Carta 1 venceu: %.0f \n", pib_per_capita01 > pib_per_capita02);
  printf("Super Poder: Carta 1 venceu: %.0f \n", super_poder1 > super_poder2);

  return 0;
} 