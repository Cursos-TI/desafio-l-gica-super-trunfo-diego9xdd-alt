#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    
    // Variáveis da carta 1
    
    char estado_1[2];
    char codigo_carta_1[5];
    char cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int num_pts_turisticos_1;

    // Variáveis da carta 2

    char estado_2[2];
    char codigo_carta_2[5];
    char cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int num_pts_turisticos_2;

    // Cadastro das Cartas:
    
    // Área para entrada de dados da primeira carta

    printf("Insira os dados da primeira carta.\n");
    
    printf("Insira a sigla de um estado do Brasil: \n");
    scanf("%s", estado_1);

    printf("Insira a código da carta: \n");
    scanf("%s", codigo_carta_1);

    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", cidade_1);

    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao_1);

    printf("Insira a área da cidade (em km²): \n");
    scanf("%f", &area_1);

    printf("Insira o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib_1);

    // Cálculo do PIB per capita e da densidade populacional para a primeira carta

    float pib_per_capita_1 = (pib_1 * 1000000000) / (float)populacao_1;

    float densidade_populacional_1 = (float)populacao_1 / area_1;

    
    // Área para entrada de dados da segunda carta
    
    printf("\nInsira os dados da segunda carta.\n");
    
    printf("Insira a sigla de um estado do Brasil: \n");
    scanf("%s", estado_2);

    printf("Insira a código da carta: \n");
    scanf("%s", codigo_carta_2);

    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", cidade_2);

    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao_2);

    printf("Insira a área da cidade (em km²): \n");
    scanf("%f", &area_2);

    printf("Insira o PIB da cidade (em bilhões de reais): \n");
    scanf("%f", &pib_2);

    // Cálculo do PIB per capita e da densidade populacional para a segunda carta

    float pib_per_capita_2 = (pib_2 * 1000000000) / (float)populacao_2;

    float densidade_populacional_2 = (float)populacao_2 / area_2;
    
    printf("\n");


    // Exibição dos Resultados:


    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("\n");

    printf("Carta 1: %s (%s): %.2f habitantes/km²\n", cidade_1, estado_1, densidade_populacional_1);
    printf("Carta 2: %s (%s): %.2f habitantes/km²\n", cidade_2, estado_2, densidade_populacional_2);
    
    
    // Comparação de Cartas:
    
    // A comparação entre as cartas será feita com base na densidade populacional. A cidade com a menor densidade populacional será considerada a vencedora.


    if (densidade_populacional_1 < densidade_populacional_2) {
        printf("Resultado: Carta 1 %s venceu!\n", cidade_1);
    } else {
        printf("Resultado: Carta 2 %s venceu!\n", cidade_2);
    }

    printf("\n");



  

    return 0;
}
