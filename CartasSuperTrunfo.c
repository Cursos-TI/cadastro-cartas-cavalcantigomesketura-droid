#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
int populacao, NumPontoTuristicos, populacao1, NumPontoTuristicos1;
float Area, pib, Area1, pib1;
  // Área para entrada de dados
  printf ("Informe a População:");
  scanf ("%d", &populacao);
  printf("Informe a quantidade de pontos turísticos:");
  scanf ("%d", &NumPontoTuristicos);
  printf ("informe a area:");
  scanf ("%f", &Area);
  printf ("Informe o PIB:");
  scanf("%f", &pib);

  printf ("Informe a População:");
  scanf ("%d", &populacao1);
  printf("Informe a quantidade de pontos turísticos:");
  scanf ("%d", &NumPontoTuristicos1);
  printf ("informe a area:");
  scanf ("%f", &Area1);
  printf ("Informe o PIB:");
  scanf("%f", &pib1);

  // Área para exibição dos dados da cidade
  printf ("A população é %d \n", populacao);
  printf ("Possui %d pontos turísticos \n", NumPontoTuristicos);
  printf ("Possui %.2f de area quadrada\n", Area);
  printf ("Seu PIB é de %.2f \n", pib);

  printf ("A população é %d \n", populacao1);
  printf ("Possui %d pontos turísticos \n", NumPontoTuristicos1);
  printf ("Possui %.2f de area quadrada\n", Area1);
  printf ("Seu PIB é de %.2f \n", pib1);


return 0;
} 
