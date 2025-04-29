#include <stdio.h>

int main() {
    char estado;
    char codigo[50];
    char nome[50];
    int populacao;
    int turisticos;
    float area; 
    float pib;
    float densidade;
    float capta;

    // Carta 1 
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado);  
    getchar();

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo);  

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", nome);

    printf("Digite a população da carta 1: ");
    scanf("%d", &populacao);

    printf("Digite a área em km2 da carta 1: ");
    scanf("%f", &area);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &turisticos);

    // calcular

    densidade = populacao / area;
    capta = pib / populacao;

    // Exibe carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f KM2\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turisticos);
    printf("Densidade Populacional %.2f\n", densidade);
    printf("PIB por capta: %.2f\n", capta);

    // Carta 2 
    printf("\nDigite o estado da carta 2: ");
    scanf(" %c", &estado);  
    getchar();

    printf("Digite o código da carta 2: ");
    scanf("%s", codigo);  

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", nome); 

    printf("Digite a população da carta 2: ");
    scanf("%d", &populacao);

    printf("Digite a área em km2 da carta 2: ");
    scanf("%f", &area);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &turisticos);

    // calcular
    densidade = populacao / area;
    capta = pib / populacao;


    // Exibe carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f KM2\n", area);
    printf("PIB: %.2f Bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turisticos);
    printf("Densidade Populacional %.2f\n", densidade);
    printf("PIB por capta: %.2f\n", capta);

    return 0;
}
