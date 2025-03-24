#include <stdio.h>
#include <string.h>

int main () {

    // Definindo as variáveis
    char estado1, estado2;
    char codigocarta1[5], codigocarta2[5];
    char nomecidade1[20], nomecidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

    // Cadastro das cartas
    printf("🃏 Bem vindo ao Jogo Super Trunfo 🏙️\n");
    printf("Preencha corretamente os dados para realizar o cadastro das cartas!\n");

    // Cadastro Carta 1
    printf("\n🃏 Cadastro Carta 1: 🃏\n");
    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigocarta1);
    printf("Nome da Cidade: ");
    getchar();
    scanf(" %[^\n]", nomecidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\nCadastro realizado com sucesso, prossiga para o cadastro da Carta 2!\n");

    // Cadastro Carta 2
    printf("\n🃏 Cadastro Carta 2: 🃏\n");
    printf("Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigocarta2);
    printf("Nome da Cidade: ");
    getchar();
    scanf(" %[^\n]", nomecidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibindo os dados cadastrados - Carta 1
    printf("\n📜 Cadastro realizado com sucesso!\n");
    printf("Confira os dados cadastrados:\n");

    printf("\n🃏 Carta 1: 🃏\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    // Cálculo da densidade populacional e PIB per capita - Carta 1
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;

    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // Cálculo do Super Poder - Carta 1
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Exibindo os dados cadastrados - Carta 2
    printf("\n🃏 Carta 2: 🃏\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    // Cálculo da densidade populacional e PIB per capita - Carta 2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // Cálculo do Super Poder - Carta 2
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparação das cartas
    printf("\n🔍 Comparação das Cartas:\n");
    printf("1 - Carta 1 vence!\n");
    printf("0 - Carta 2 vence!\n");

    printf("\nPopulação: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional: %d\n", densidadepopulacional1 < densidadepopulacional2);
    printf("PIB per Capita: %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    return 0;
}
