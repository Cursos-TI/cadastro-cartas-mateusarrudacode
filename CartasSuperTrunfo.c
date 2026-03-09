#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis da Carta 1

  int populacao01;
  int pontos_turisticos01;
  char estado01;
  char codigocarta01[50];
  char nome_cidade01[50];
  float pib01;
  float area01;

  // Variáveis da Carta 02
  
  int populacao02;
  int pontos_turisticos02;
  char estado02;
  char codigocarta02[50];
  char nome_cidade02[50];
  float pib02;
  float area02;

  // Área para entrada de dados
  
  // Carta 1

  printf("Vamos iniciar o cadastro da Carta 1\n");

  printf("Nome do Estado: ");
  scanf(" %c", &estado01);

  printf("Código da Carta: ");
  scanf(" %c", codigocarta01);

  printf("Nome da Cidade: ");
  scanf(" %s", nome_cidade01);

  printf("População: ");
  scanf(" %d", &populacao01);

  printf("Área (em km²): ");
  scanf(" %f", &area01 );

  printf("PIB: ");
  scanf(" %f", &pib01);

  printf("Número de Pontos Turisticos: ");
  scanf(" %d", &pontos_turisticos01);
  printf("\n");

// Carta 2

  printf("\nVamos iniciar o cadastro da Carta 2\n");

  printf("Nome do Estado: ");
  scanf(" %c", &estado02);

  printf("Código da Carta: ");
  scanf(" %c", codigocarta02);

  printf("Nome da Cidade: ");
  scanf(" %s", nome_cidade02);

  printf("População: ");
  scanf(" %d", &populacao02);

  printf("Área (em km²): ");
  scanf(" %f", &area02);

  printf("PIB: ");
  scanf(" %f", &pib02);

  printf("Número de Pontos Turisticos: ");
  scanf(" %d", &pontos_turisticos02);
  printf("\n");

  // Área para exibição dos dados da cidade

  printf("\n * * * Carta 1 * * *\n");
  printf("Estado: %c\n", estado01);
  printf("Código: %c\n", codigocarta01);
  printf("Nome da Cidade: %s\n", nome_cidade01);
  printf("População: %d\n", populacao01);
  printf("Área: %.2f km²\n", area01);
  printf("PIB: %.2f bilhões de reais\n", pib01);
  printf("Número de Pontos Turisticos: %d\n", pontos_turisticos01);

  printf("\n * * * Carta 2 * * *\n");
  printf("Estado: %c\n", estado02);
  printf("Código: %c\n", codigocarta02);
  printf("Nome da Cidade: %s\n", nome_cidade02);
  printf("População: %d\n", populacao02);
  printf("Área: %.2f km²\n", area02);
  printf("PIB: %.2f bilhões de reais\n", pib02);
  printf("Número de Pontos Turisticos: %d\n", pontos_turisticos02);
  printf("\n");

  printf("Obrigado por cadastrar as cartas!\n");

return 0;
} 
