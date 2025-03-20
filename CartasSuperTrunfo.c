#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado;
    char codigo[50];
    char nome[50];
    int populacao;
    int turisticos;
    float area; 
    float pib;

    printf("Digite o estado da carta 1:");
    scanf(" %c", &estado);  

    printf("Digite o código da carta 1:");
    scanf("%s", codigo);  

    printf("Digite o nome da cidade da carta 1:");
    scanf("%s", nome);

    printf("Digite a populaço da carta 1:");
    scanf("%d", &populacao);

    printf("Digite a area em km2 da carta 1:");
    scanf("%f", &area);

    printf("Digite o PIB da carta 1:");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos da carta 1:");
    scanf("%d", &turisticos);

    printf("Carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f KM2\n", area);
    printf("PIB: %f Bilhões de pessoas\n", pib);
    printf("Número de Pontos Turísticos: %d \n", turisticos);

    printf("Digite o Estado da carta 2:");
    scanf(" %c", &estado);  

    printf("Digite o código da carta 2:");
    scanf("%s", codigo);

    printf("Digite o nome da cidade da carta 2:");
    scanf("%s", nome);

    printf("Digite a população da carta 2:");
    scanf("%d", &populacao);

    printf("Digite a área da carta 2:");
    scanf("%f", &area);

    printf("Digite o PIB da carta 2:");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos da carta 2:");
    scanf("%d", &turisticos);

    printf("Carta 2:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f KM2 \n", area);
    printf("PIB: %f bilhões de reais \n", pib);
    printf("Número de pontos Turísticos: %d \n", turisticos);

    return 0;
}
