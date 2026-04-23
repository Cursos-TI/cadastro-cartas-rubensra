#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Estado_Carta1[2], Estado_Carta2[2]; // Letra da Carta entre A e H
  // Codigo numerico formado pela Letra e um numero entre 01 e 04 
  char Cod_Carta1[4], Cod_Carta2[4]; 
  char NomeCidade_Carta1[50], NomeCidade_Carta2[50]; // Nome da Cidade
  int Populacao_Carta1, Populacao_Carta2; // Populacao total
  float Area_Carta1, Area_Carta2; // Area em km²
  double PIB_Carta1, PIB_Carta2; // PIB - Produto Interno Bruto
  int Num_PontosTuristicos_Carta1, Num_PontosTuristicos_Carta2; // total de Pontos Turisticos

   // Desafio Aventureiro, calculo do PIB per capto e Densidade Populacional
   float PIB_perCapta_Carta1, PIB_perCapta_Carta2;
   float DensidadePopulacional_Carta1, DensidadePopulacional_Carta2;


  // Área para entrada de dados
  //Entrada de dados da Carta 1
   // Definicao da Letra da Carta
   printf("Digite uma Letra entre A e H para a Carta 1: ");
   fgets(Estado_Carta1,2,stdin);
   Estado_Carta1[strcspn(Estado_Carta1,"\n")] = 0;
   getchar();
   // Definicao do codigo numerio
   printf("Repita a Letra da carta seguida de um numero entre 01 e 04 para o codigo da carta: ");
   fgets(Cod_Carta1,4,stdin);
   Cod_Carta1[strcspn(Cod_Carta1,"\n")] = 0;
   getchar();
   // Nome da Cidade
   printf("Digite o nome da Cidade: ");
   fgets(NomeCidade_Carta1,50,stdin);
   // Populacao
   printf("Digite a populacao: ");
   scanf("%d",&Populacao_Carta1);
   // Area em km²
   printf("Digite a area: ");
   scanf("%f", &Area_Carta1);
   // PIB
   printf("Digite o PIB: ");
   scanf("%lf",&PIB_Carta1);
   // Total de pontos turisticos
   printf("Digite o numero de pontos turisticos: ");
   scanf("%d",&Num_PontosTuristicos_Carta1);
   getchar();
   // Get char adicional para limpar o buffer ao executar pelo compilador
   //getchar();

   // Calculo do PIB per capto e Densidade Populacional carta 1
   DensidadePopulacional_Carta1 = (Populacao_Carta1 / Area_Carta1);
   PIB_perCapta_Carta1 = (PIB_Carta1 / Populacao_Carta1);
   printf("\n---------------------------\n");

   //Entrada de dados da Carta 2
   // Uma Letra para a Carta
   printf("Digite uma Letra entre A e H para a Carta 2: ");
   fgets(Estado_Carta2,2,stdin);
   Estado_Carta2[strcspn(Estado_Carta2,"\n")] = 0;
   getchar();
   // Codigo da carta composto pela letra e um numero entre 01 e 04
   printf("Repita a Letra da carta seguida de um numero entre 01 e 04 para o codigo da carta 2: ");
   fgets(Cod_Carta2,4,stdin);
   Cod_Carta2[strcspn(Cod_Carta2,"\n")] = 0;
   getchar();
   // Nome da cidade
   printf("Digite o nome da Cidade: ");
   fgets(NomeCidade_Carta2,50,stdin);
   // Populacao
   printf("Digite a populacao: ");
   scanf("%d",&Populacao_Carta2);
   // Area em km²
   printf("Digite a area: ");
   scanf("%f", &Area_Carta2);
   // PIB
   printf("Digite o PIB: ");
   scanf("%lf",&PIB_Carta2);
   // Total de pontos turisticos
   printf("Digite o numero de pontos turisticos: ");
   scanf("%d",&Num_PontosTuristicos_Carta2);

   // Calculo do PIB per capto e Densidade Populacional carta 2
   DensidadePopulacional_Carta2 = (Populacao_Carta2 / Area_Carta2);
   PIB_perCapta_Carta2 = ( PIB_Carta2 / Populacao_Carta2);

   // Removendo a quebra de linha dos nomes das cidades
   NomeCidade_Carta1[strcspn(NomeCidade_Carta1,"\n")] = 0;
   NomeCidade_Carta2[strcspn(NomeCidade_Carta2,"\n")] = 0;

   // Área para exibição dos dados da cidade
   // Exibição da Carta 1
   printf("\n\n# ---- Exibindo Informacoes ---- #\n\n");
   printf("\nCarta 1: \n");
   printf("Estado: %s\n", Estado_Carta1);
   printf("Codigo: %s\n", Cod_Carta1);
   printf("Nome da Cidade: %s\n", NomeCidade_Carta1);
   printf("Populacao: %d\n", Populacao_Carta1);
   printf("Area: %.2f km²\n", Area_Carta1);
   printf("PIB: %.2lf bilhoes de reais\n", PIB_Carta1);
   printf("Numero de Pontos Turisticios: %d\n", Num_PontosTuristicos_Carta1);
   // Exibicao dos Itens desafio Aventureiro
   printf("Densidade Populacional: %.2f\n", DensidadePopulacional_Carta1);
   printf("PIB per Capta: %.2f\n", PIB_perCapta_Carta1);
   printf("\n");

   // Exibição da Carta 2
   printf("\nCarta 2: \n");
   printf("Estado: %s\n", Estado_Carta2);
   printf("Codigo: %s\n", Cod_Carta2);
   printf("Nome da Cidade: %s\n", NomeCidade_Carta2);
   printf("Populacao: %d\n", Populacao_Carta2);
   printf("Area: %.2f km²\n", Area_Carta2);
   printf("PIB: %.2lf bilhoes de reais\n", PIB_Carta2);
   printf("Numero de Pontos Turisticios: %d\n", Num_PontosTuristicos_Carta2);
   // Exibicao dos Itens desafio Aventureiro
   printf("Densidade Populacional: %.2f\n", DensidadePopulacional_Carta2);
   printf("PIB per Capta: %.2f\n", PIB_perCapta_Carta2);

return 0;
} 
