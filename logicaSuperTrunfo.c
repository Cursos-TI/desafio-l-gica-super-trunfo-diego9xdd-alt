#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    
    // Variáveis da carta 1
    
    //char estado_1[2];
    //char codigo_carta_1[5];
    //char cidade_1[50];
    char pais_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int num_pts_turisticos_1;

    // Variáveis da carta 2

    //char estado_2[2];
    //char codigo_carta_2[5];
    //char cidade_2[50];
    char pais_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int num_pts_turisticos_2;

    // Cadastro das Cartas:
    
    // Área para entrada de dados da primeira carta

    printf("Insira os dados da primeira carta.\n");
    
    //printf("Insira a sigla de um estado do Brasil: \n");
    //scanf("%s", estado_1);

    //printf("Insira a código da carta: \n");
    //scanf("%s", codigo_carta_1);

    //printf("Insira o nome da cidade: \n");
    //scanf(" %[^\n]", cidade_1);

    printf("Insira o nome do país: \n");
    scanf(" %[^\n]", pais_1);

    printf("Insira a população da país: \n");
    scanf("%d", &populacao_1);

    printf("Insira a área do país (em km²): \n");
    scanf("%f", &area_1);

    printf("Insira o PIB do país (em bilhões de reais): \n");
    scanf("%f", &pib_1);

    printf("Insira o número de pontos turísticos do país: \n");
    scanf("%d", &num_pts_turisticos_1);

    // Cálculo do PIB per capita e da densidade populacional para a primeira carta

    float pib_per_capita_1 = (pib_1 * 1000000000) / (float)populacao_1;

    float densidade_populacional_1 = (float)populacao_1 / area_1;

    
    // Área para entrada de dados da segunda carta
    
    printf("\nInsira os dados da segunda carta.\n");
    
    //printf("Insira a sigla de um estado do Brasil: \n");
    //scanf("%s", estado_2);

    //printf("Insira a código da carta: \n");
    //scanf("%s", codigo_carta_2);

    //printf("Insira o nome da cidade: \n");
    //scanf(" %[^\n]", cidade_2);

    printf("Insira o nome do país: \n");
    scanf(" %[^\n]", pais_2);

    printf("Insira a população do país: \n");
    scanf("%d", &populacao_2);

    printf("Insira a área do país (em km²): \n");
    scanf("%f", &area_2);

    printf("Insira o PIB do país (em bilhões de reais): \n");
    scanf("%f", &pib_2);

    printf("Insira o número de pontos turísticos do país: \n");
    scanf("%d", &num_pts_turisticos_2);

    // Cálculo do PIB per capita e da densidade populacional para a segunda carta

    float pib_per_capita_2 = (pib_2 * 1000000000) / (float)populacao_2;

    float densidade_populacional_2 = (float)populacao_2 / area_2;
    
    printf("\n");

    // Solicitação do Atributo para Comparação:

    
    printf("Digite o número correspondente ao atributo para comparação:\n\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Atributo selecionado: ");
    
    int atributo_comparacao;
    scanf("%d", &atributo_comparacao);

    // Variável para armazenar o nome do atributo selecionado para comparação
    char nome_atributo[50];

    // Variável para armazenar o resultado da comparação
    // O resultado da comparação será representado por um número inteiro: 1 para vitória da carta 1, 2 para vitória da carta 2, e 0 para empate.
    int resultado_comparacao;


    switch (atributo_comparacao)
    {
        case 1:
            strcpy(nome_atributo, "População");
            if (populacao_1 > populacao_2) {
                resultado_comparacao = 1;
            } else if (populacao_1 < populacao_2) {
                resultado_comparacao = 2;
            } else {
                // Em caso de empate, o resultado da comparação será 0
                resultado_comparacao = 0;
            }
            break;
        
        case 2:
            strcpy(nome_atributo, "Área");
            if (area_1 > area_2) {
                resultado_comparacao = 1;
            } else if (area_1 < area_2) {
                resultado_comparacao = 2;
            } else {
                resultado_comparacao = 0;
            }
            break;
        
        case 3:
            strcpy(nome_atributo, "PIB");
            if (pib_1 > pib_2) {
                resultado_comparacao = 1;
            } else if (pib_1 < pib_2) {
                resultado_comparacao = 2;
            } else {
                resultado_comparacao = 0;
            }
            break;
        
        case 4:
            strcpy(nome_atributo, "Número de Pontos Turísticos");
            if (num_pts_turisticos_1 > num_pts_turisticos_2)
            {
                resultado_comparacao = 1;
            } else if (num_pts_turisticos_1 < num_pts_turisticos_2) {
                resultado_comparacao = 2;
            } else {
                resultado_comparacao = 0;
            }
            break;
        
        case 5:
            strcpy(nome_atributo, "Densidade Populacional");
            if (densidade_populacional_1 < densidade_populacional_2)
            {
                resultado_comparacao = 1;
            } else if (densidade_populacional_1 > densidade_populacional_2) {
                resultado_comparacao = 2;
            } else {
                resultado_comparacao = 0;
            }
            break;
        
        default:
            // Caso o usuário insira um número inválido para o atributo de comparação, o programa exibirá uma mensagem de erro e encerrará a execução.
            printf("Atributo inválido!\n");
            break;
    }

    printf("\n");


    // Exibição dos Resultados:

    //Exibição dos atributos da carta 1

    printf("Atributos da carta 1: \n\n");
    printf("País: %s\n", pais_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos_1);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidade_populacional_1);
    
    // Exibição dos atributos da carta 2

    printf("\nAtributos da carta 2: \n\n");
    printf("País: %s\n", pais_2);   
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos_2);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidade_populacional_2);

    printf("\n");

    // Exibição do Atributo Selecionado para Comparação

    printf("Atributo selecionado para comparação: %s\n", nome_atributo);
    printf("Valor da carta 1 (%s): ", pais_1);
    
    if (atributo_comparacao == 1) {
        printf("%d\n", populacao_1);
    } else if (atributo_comparacao == 2) {
        printf("%.2f km²\n", area_1);
    } else if (atributo_comparacao == 3) {
        printf("%.2f bilhões de reais\n", pib_1);
    } else if (atributo_comparacao == 4) {
        printf("%d\n", num_pts_turisticos_1);
    } else if (atributo_comparacao == 5) {
        printf("%.2f habitantes por km²\n", densidade_populacional_1);
    }

    printf("Valor da carta 2 (%s): ", pais_2);

    if (atributo_comparacao == 1) {
        printf("%d\n", populacao_2);
    } else if (atributo_comparacao == 2) {
        printf("%.2f km²\n", area_2);
    } else if (atributo_comparacao == 3) {
        printf("%.2f bilhões de reais\n", pib_2);
    } else if (atributo_comparacao == 4) {
        printf("%d\n", num_pts_turisticos_2);
    } else if (atributo_comparacao == 5) {
        printf("%.2f habitantes por km²\n", densidade_populacional_2);
    }

    

    // Lógica para determinar a carta vencedora com base no resultado da comparação
    
    if (resultado_comparacao == 1) {
        printf("\nA carta vencedora é: %s\n", pais_1);
    } else if (resultado_comparacao == 2) {
        printf("\nA carta vencedora é: %s\n", pais_2);
    } else {
        printf("\nEmpate!\n");
    }

    printf("\n");



  

    return 0;
    }
