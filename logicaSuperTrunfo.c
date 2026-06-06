#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    char estado1, cidade1[50], codigo1[4], estado2, cidade2[50], codigo2[4];
    float area1, area2;
    double pib1, pib2;

    // vamos pegar os dados da primeira carta:
    printf("Digite a letra do primeiro estado: ");
    scanf("%c", &estado1);
    printf("Digite o código da carta (com a letra do estado mais um número de 01 à 04): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    getchar();
    fgets( cidade1, 50, stdin);
    printf("Digite o valor da população: ");
    scanf("%d", &populacao1);
    printf("Digite o valor da área: ");
    scanf("%f", &area1);
    printf("Digite o valor do PIB: ");
    scanf("%lf", &pib1);
    pib1 = pib1*1000000000;
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // vamos pegar os dados da segunda carta:
    printf("\nDigite a letra do segundo estado: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (com a letra do estado mais um número de 01 à 04): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    getchar();
    fgets( cidade2, 50, stdin);
    printf("Digite o valor da população: ");
    scanf("%d", &populacao2);
    printf("Digite o valor da área: ");
    scanf("%f", &area2);
    printf("Digite o valor do PIB: ");
    scanf("%lf", &pib2);
    pib2 = pib2*1000000000;
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // exibindo os resultados da primeira carta:
    printf("\n----- PRIMEIRA CARTA -----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", cidade1);
    printf("Popuação: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", populacao1/area1);
    printf("PIB per Capita: %.2f\n\n", pib1/populacao1);

    // exibindo os resultados da segunda carta:
    printf("----- SEGUNDA CARTA -----\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("Populção: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", populacao2/area2);
    printf("PIB per Capita: %.2f \n\n", pib2/populacao2);

// Atributo (pontos turísticos)
    if(pontos_turisticos1 > pontos_turisticos2){
        printf("Carta 1: %s venceu", cidade1);
    }else {
        printf("Carta 2: %s venceu", cidade2);
    }

return 0;
}