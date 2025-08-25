#include <stdio.h>
#include <string.h>

void limparBuffer() {
    int c;
    // Limpa o buffer apenas uma vez após scanf
    getchar();
}

int main() {

    // ===== Carta 1 =====
    char Estado;
    char codigoCarta[20];
    char nomeCidade[50];
    int populacao, pontosTuristicos;
    float PIB, AREA;

    // ===== Carta 2 =====
    char Estado2;
    char codigoCarta2[20];
    char nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float PIB2, AREA2;

    // Entrada de dados da carta 1
    printf("Digite o estado da carta 1: ");
    scanf(" %c", &Estado);
    limparBuffer();

    printf("Digite o código da carta 1: ");
    fgets(codigoCarta, sizeof(codigoCarta), stdin);
    codigoCarta[strcspn(codigoCarta, "\n")] = 0;

    printf("Digite o nome da cidade da carta 1: ");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    limparBuffer();

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);
    limparBuffer();

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    limparBuffer();

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &AREA);
    limparBuffer();

    // Entrada de dados da carta 2
    printf("\nDigite o estado da carta 2: ");
    scanf(" %c", &Estado2);
    limparBuffer();

    printf("Digite o código da carta 2: ");
    fgets(codigoCarta2, sizeof(codigoCarta2), stdin);
    codigoCarta2[strcspn(codigoCarta2, "\n")] = 0;

    printf("Digite o nome da cidade da carta 2: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    limparBuffer();

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    limparBuffer();

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    limparBuffer();

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &AREA2);
    limparBuffer();

    // Saída formatada da carta 1
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", AREA);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    // Saída formatada da carta 2
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", AREA2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}