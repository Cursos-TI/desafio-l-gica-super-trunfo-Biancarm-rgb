#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2, opcao1, opcao2;
    char estado1, cidade1[50], codigo1[4], estado2, cidade2[50], codigo2[4];
    float area1, area2, densidade_demografica1, densidade_demografica2;
    double pib1, pib2;
    float valor1_atributo1, valor2_atributo1;
    float valor1_atributo2, valor2_atributo2;
    float soma1 = 0, soma2 = 0;

    // vamos pegar os dados da primeira carta:
    printf("Digite a letra do primeiro estado: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (com a letra do estado mais um número de 01 à 04): ");
    scanf("%4s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade1); // Esse scanf lê os espaços, (colocar um espaço antes do '%' para funcionar)
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
    scanf("%4s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("Digite o valor da população: ");
    scanf("%d", &populacao2);
    printf("Digite o valor da área: ");
    scanf("%f", &area2);
    printf("Digite o valor do PIB: ");
    scanf("%lf", &pib2);
    pib2 = pib2*1000000000;
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculando a densidade:
    densidade_demografica1 = populacao1/area1;
    densidade_demografica2 = populacao2/area2;

    // exibindo os resultados da primeira carta:
    printf("\n----- PRIMEIRA CARTA -----\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Popuação: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_demografica1);
    printf("PIB per Capita: %.2f\n\n", pib1/populacao1);

    // exibindo os resultados da segunda carta:
    printf("----- SEGUNDA CARTA -----\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populção: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_demografica2);
    printf("PIB per Capita: %.2f \n\n", pib2/populacao2);

    // Switch para a escolha dos tributos
    printf("---- Escolha um tributo para comparação: ----\n\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha um tributo: ");
    scanf("%d", &opcao1);
    printf("\n");

    switch (opcao1) {
    case 1:
        valor1_atributo1 = populacao1;
        valor2_atributo1 = populacao2;
      break;
    case 2:
        valor1_atributo1 = area1;
        valor2_atributo1 = area2;
      break;
    case 3:
        valor1_atributo1 = pib1;
        valor2_atributo1 = pib2;
      break;
    case 4:
        valor1_atributo1 = pontos_turisticos1;
        valor2_atributo1 = pontos_turisticos2;
      break;
    case 5:
        valor1_atributo1 = densidade_demografica1;
        valor2_atributo1 = densidade_demografica2;
      break;
    default:
        printf("Opção inválida!");
    }
    do{ 
        printf("\n---- Agora vamos escolher o segundo tributo: ----\n\n");
        if (opcao1 != 1) printf("1. População\n");
        if (opcao1 != 2) printf("2. Área\n");
        if (opcao1 != 3) printf("3. PIB\n");
        if (opcao1 != 4) printf("4. Número de pontos turísticos\n");
        if (opcao1 != 5) printf("5. Densidade demográfica\n");
        printf("Escolha o segundo tributo: ");
        scanf("%d", &opcao2);
        printf("\n");

        if (opcao2 == opcao1) {
            printf("Você não pode repetir o atributo! Tente novamente.\n");
        }

    } while(opcao2 == opcao1);

     switch (opcao2) {
    case 1:
        valor1_atributo2 = populacao1;
        valor2_atributo2 = populacao2;
      break;
    case 2:
        valor1_atributo2 = area1;
        valor2_atributo2 = area2;
      break;
    case 3:
        valor1_atributo2 = pib1;
        valor2_atributo2 = pib2;
      break;
    case 4:
        valor1_atributo2 = pontos_turisticos1;
        valor2_atributo2 = pontos_turisticos2;
      break;
    case 5:
        valor1_atributo2 = densidade_demografica1;
        valor2_atributo2 = densidade_demografica2;
      break;
    default:
        printf("Opção inválida!");
    }
// --------- SOMA (com regra da densidade) ---------
    soma1 = valor1_atributo1 + valor1_atributo2;
    soma2 = valor2_atributo1 + valor2_atributo2;

    // ajuste para densidade (inverte impacto)
    if (opcao1 == 5) {
        soma1 -= 2 * valor1_atributo1;
        soma2 -= 2 * valor2_atributo1;
    }
    if (opcao2 == 5) {
        soma1 -= 2 * valor1_atributo2;
        soma2 -= 2 * valor2_atributo2;
    }
    // --------- RESULTADO ---------
    printf("\n--- RESULTADO ---\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    soma1 > soma2 ? printf("\n%s: venceu", cidade1) : 0;
    soma1 == soma2 ? printf("\nHouve um empate!") : 0;
    soma2 > soma1 ? printf("\n%s: venceu", cidade2) : 0;
}