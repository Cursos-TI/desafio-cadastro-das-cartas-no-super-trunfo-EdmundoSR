#include <stdio.h>

int main() {
    
    char estado1, estado2;
    char codigo1[4];
    char codigo2[4];
    char cidade1[21], cidade2[21];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;
    float superpoder1, superpoder2;
    int opcao;
    
    printf("Desafio Super Trunfo\n");

    //exibição do menu
    printf("***--Menu de Gerenciamento de Super trunfo--***\n");
    printf("1. Cadastrar cartas\n");
    printf("2. Mostrar dados das cartas\n");
    printf("3. Comparar cartas\n");
    printf("0. Sair\n");
    printf("Escolha uma opção:");
    scanf("%d", &opcao);

   switch (opcao);
   {
   case 1:
        printf("Digite as informações da carta 1.\n");
        printf("Digite a letra do estado: ");
        scanf(" %c", &estado1);

        printf("Digite o código da carta: ");
        scanf(" %3s", codigo1);

        printf("Digite o nome da cidade: ");
        scanf(" %20s", cidade1);

        printf("Digite a população: ");
        scanf("%d", &populacao1);

        printf("Digite área em km²: ");
        scanf("%f", &area1);

        printf("Digite o PIB: ");
        scanf("%f",&pib1);

        printf("Digite números de pontos turísticos: ");
        scanf("%d", &turisticos1);

        printf("Digite as informações da carta 2.\n");
        printf("Digite a letra do estado: ");
        scanf(" %c",&estado2);

        printf("Digite o código da carta: ");
        scanf("%3s", codigo2);

        printf("Digite o nome da cidade: ");
        scanf(" %20s", cidade2);

        printf("Digite a população: ");
        scanf("%d", &populacao2);

        printf("Digite área em km²: ");
        scanf("%f", &area2);

        printf("Digite o PIB: ");
        scanf("%f", &pib2);

        printf("Digite números de pontos turísticos: ");
        scanf("%d", &turisticos2);
    break;
    case 2:
    
   
   default:
    break;
   }
    }

    

    printf("Digite as informações da carta 2.\n");
    printf("Digite a letra do estado: ");
    scanf(" %c",&estado2);

    printf("Digite o código da carta: ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %20s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite números de pontos turísticos: ");
    scanf("%d", &turisticos2);

    //Mostra dados das cartas.
    printf("As informações da carta 1 é.\n");
    printf("Estado da carta é: %c\n", estado1);
    printf("O código da carta é: %s\n", codigo1);
    printf("A cidade é: %s\n", cidade1);
    printf("A população é: %d\n", populacao1);
    printf("A área em km² é: %.2f\n", area1);
    printf("O PIB é: %.2f\n", pib1);
    printf("Números de pontos turísticos é: %d\n", turisticos1 );
    densidade1 = (float)(populacao1 / area1);
    printf("Densidade populacional é: %.2f\n", densidade1);
    pibcapita1 = (float)(pib1 / populacao1);
    printf("Pib per capita é: %.2f\n", pibcapita1);
    superpoder1 = (float)(populacao1 + area1 + pib1 + turisticos1 + pibcapita1 + (1 / densidade1));
    printf("Super poder é: %.2f\n", superpoder1);

    printf("As informações da carta 2 é.\n");
    printf("Estado da carta é: %c\n", estado2);
    printf("O código da carta é: %s\n", codigo2);
    printf("A cidade é: %s\n", cidade2);
    printf("A população é: %d\n", populacao2);
    printf("A área em km² é: %.2f\n", area2);
    printf("O PIB é: %.2f\n", pib2);
    printf("Números de pontos turísticos é: %d\n", turisticos2);
    densidade2 = (float)(populacao2 / area2);
    printf("Densidade populacional é: %.2f\n", densidade2);
    pibcapita2 = (float)(pib2 / populacao2);
    printf("Pib per capita é: %.2f\n", pibcapita2);
    superpoder2 = (float)(populacao2 + area2 + pib2 + turisticos2 + pibcapita2 + (1 / densidade2));
    printf("Super poder é: %.2f\n", superpoder2);

    //Comparação da cartas.
    printf("populacao1 > populacao2: %d\n", populacao1 > populacao2);
    printf("area1 > area2: %d\n", area1 > area2);
    printf("pib1 > pib2: %d\n", pib1 > pib2);
    printf("turisticos1 > turisticos2: %d\n", turisticos1 > turisticos2);
    printf("densidade1 < densidade2: %d\n", densidade1 < densidade2);
    printf("pibcapita1 > pibcapita2: %d\n", pibcapita1 > pibcapita2);
    printf("superpoder1 > superpoder2: %d\n", superpoder1 > superpoder2);

    return 0;
}
