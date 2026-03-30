#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variáveis da Carta 1

  unsigned long int populacao01;
  int pontos_turisticos01;
  char estado01;
  int codigocarta01;
  char nome_cidade01[50];
  float pib01;
  float area01;
  float densidade_populacional01;
  float pib_per_capita01;
  
  // Variáveis da Carta 2

  unsigned long int populacao02;
  int pontos_turisticos02;
  char estado02;
  int codigocarta02;
  char nome_cidade02[50];
  float pib02;
  float area02;
  float densidade_populacional02;
  float pib_per_capita02;
  
  // Área para entrada de dados
  
  // Carta 1

  printf("Vamos iniciar o cadastro da Carta 1 \n");

  printf("Estado: \n");
  scanf("%c", &estado01);
  printf("Código da Carta: \n");
  scanf("%d", &codigocarta01);
  printf("Nome da Cidade: \n");
  scanf("%s", &nome_cidade01);
  printf("População: \n");
  scanf("%lu", &populacao01);
  printf("Área (em km²): \n");
  scanf("%f", &area01 );
  printf("PIB: \n");
  scanf("%f", &pib01);
  printf("Número de Pontos Turisticos: \n");
  scanf("%d", &pontos_turisticos01);
  printf("\n");

  densidade_populacional01 = (populacao01 / area01);
  pib_per_capita01 = (pib01 / populacao01);

  // Carta 2

  printf("\nVamos iniciar o cadastro da Carta 2 \n");

  printf("Estado: \n");
  scanf("%c", &estado02);
  printf("Código da Carta: \n");
  scanf("%d", &codigocarta02);
  printf("Nome da Cidade: \n");
  scanf("%s", &nome_cidade02);
  printf("População: \n");
  scanf("%lu", &populacao02);
  printf("Área (em km²): \n");
  scanf("%f", &area02);
  printf("PIB: \n");
  scanf("%f", &pib02);
  printf("Número de Pontos Turisticos: \n");
  scanf("%d", &pontos_turisticos02);
  printf("\n");

  densidade_populacional02 = (populacao02 / area02);
  pib_per_capita02 = (pib02 / populacao02);

  // Área para exibição dos dados da cidade

  printf("\n* * * Carta 1 * * *\n");
  printf("Estado: %c\n", estado01);
  printf("Código: %d\n", codigocarta01);
  printf("Nome da Cidade: %s\n", nome_cidade01);
  printf("População: %lu\n", populacao01);
  printf("Área: %.2f km²\n", area01);
  printf("PIB: %.2f bilhões de reais\n", pib01);
  printf("Número de Pontos Turísticos: %d\n", pontos_turisticos01);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional01);
  printf("PIB per Capita: %.2f reais\n", pib_per_capita01);

  printf("\n* * * Carta 2 * * *\n");
  printf("Estado: %c\n", estado02);
  printf("Código: %d\n", codigocarta02);
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

  // Criando menu switch
  
  int opcao;
  printf("Escolha um dos atributos para comparar as cartas: \n");
  printf("1. População \n");
  printf("2. Área \n");
  printf("3. PIB \n");
  printf("4. Pontos Turísticos \n");
  printf("5. Densidade Populacional \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
        printf("População de %s x População de %s\n", nome_cidade01, nome_cidade02);
      if (populacao01 > populacao02) {
        printf("A Carta 1 é a vencedora! \n");
        printf("População de %s: %lu x População de %s: %lu", nome_cidade01, populacao01, nome_cidade02, populacao02);
      } else if (populacao01 < populacao02){
        printf("A Carta 2 é a vencedora! \n");
        printf("População de %s: %lu x População de %s: %lu", nome_cidade02, populacao02, nome_cidade01, populacao01);
      } else {
        printf("Empate! As duas cartas possuem a mesma população! \n");
        printf("%s: %lu x %s: %lu", nome_cidade01, populacao01, nome_cidade02, populacao02);
      }
      break;
    case 2:
        printf("Área de %s x Área de %s\n", nome_cidade01, nome_cidade02);
      if (area01 > area02) {
        printf("A Carta 1 é a vencedora! \n");
        printf("Área de %s: %.2f km² x Área de %s: %.2f km²", nome_cidade01, area01, nome_cidade02, area02);
      } else if (area01 < area02){
        printf("A Carta 2 é a vencedora! \n");
        printf("Área de %s: %.2f km² x Área de %s: %.2f km²", nome_cidade02, area02, nome_cidade01, area01);
      } else {
        printf("Empate! As duas cartas possuem a mesma área! \n");
        printf("Área de %s: %.2f km² x Área de %s: %.2f km²", nome_cidade01, area01, nome_cidade02, area02);
      }
      break;
    case 3:
        printf("PIB de %s x PIB de %s\n", nome_cidade01, nome_cidade02);
      if (pib01 > pib02) {
        printf("A Carta 1 é a vencedora! \n");
        printf("PIB de %s: %.2f bilhões de reais x PIB de %s: %.2f bilhões de reais", nome_cidade01, pib01, nome_cidade02, pib02);
      } else if (pib01 < pib02){
        printf("A Carta 2 é a vencedora! \n");
        printf("PIB de %s: %.2f bilhões de reais x PIB de %s: %.2f bilhões de reais", nome_cidade02, pib02, nome_cidade01, pib01);
      } else {
        printf("Empate! As duas cartas possuem o mesmo PIB! \n");
        printf("PIB de %s: %.2f bilhões de reais x PIB de %s: %.2f bilhões de reais", nome_cidade01, pib01, nome_cidade02, pib02);
      }
      break;
    case 4:
        printf("Pontos Turísticos de %s x Pontos Turísticos de %s\n", nome_cidade01, nome_cidade02);
      if (pontos_turisticos01 > pontos_turisticos02) {
        printf("A Carta 1 é a vencedora! \n");
         printf("Pontos turísticos de %s: %d - Pontos turísticos de %s: %d\n", nome_cidade01, pontos_turisticos01, nome_cidade02, pontos_turisticos02);
      } else if (pontos_turisticos01 < pontos_turisticos02) {
        printf("A Carta 2 é a vencedora! \n");
        printf("Pontos turísticos de %s: %d - Pontos turísticos de %s: %d\n", nome_cidade02, pontos_turisticos02, nome_cidade01, pontos_turisticos01);
      } else {
        printf("Empate! As duas cartas possuem o mesmo número de pontos turísticos! \n");
        printf("Pontos turísticos de %s: %d - Pontos turísticos de %s: %d\n", nome_cidade01, pontos_turisticos01, nome_cidade02, pontos_turisticos02);
      }
      break;
    case 5:
     printf("Densidade de %s x densidade de %s\n", nome_cidade01, nome_cidade02);
      if (densidade_populacional01 < densidade_populacional02) {
        printf("A Carta 1 é a vencedora! \n");
        printf("Densidade de %s: %.2f x densidade de %s: %.2f", nome_cidade01, densidade_populacional01, nome_cidade02, densidade_populacional02);
      } else if (densidade_populacional01 > densidade_populacional02) {
        printf("A Carta 2 é a vencedora! \n");
        printf("Densidade de %s: %.2f x densidade de %s: %.2f", nome_cidade02, densidade_populacional02, nome_cidade01, densidade_populacional01);
      } else {
        printf("Empate! As duas cartas possuem a mesma densidade populacional! \n");
        printf("Densidade de %s: %.2f x densidade de %s: %.2f", nome_cidade01, densidade_populacional01, nome_cidade02, densidade_populacional02);
      }
      break;
    default:
      printf("Opção inválida!\n");
  }

  return 0;

} 