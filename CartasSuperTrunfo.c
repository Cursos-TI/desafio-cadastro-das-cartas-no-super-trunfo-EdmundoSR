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

    char estado1, estado2;
    char codigo1[4];
    char codigo2[4];
    char cidade1[21], cidade2[21];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;

    printf("Desafio Super Trunfo\n");
    printf("Informe os dados abaixo\n");

    // Informações da primeira carta.
    
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

    // Informações da segunda carta.

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
    printf("\O estado da carta é: %c\n", estado1);
    printf("O código da carta é: %s\n", codigo1);
    printf("A cidade é: %s\n", cidade1);
    printf("A população é: %d\n", populacao1);
    printf("A área em km² é: %.2f\n", area1);
    printf("O PIB é: %.2f\n", pib1);
    printf("Números de pontos turísticos é: %d\n", turisticos1 );

    printf("As informações da carta 2 é.\n");
    printf("\O estado da carta é: %c\n", estado2);
    printf("O código da carta é: %s\n", codigo2);
    printf("A cidade é: %s\n", cidade2);
    printf("A população é: %d\n", populacao2);
    printf("A área em km² é: %.2f\n", area2);
    printf("O PIB é: %.2f\n", pib2);
    printf("Números de pontos turísticos é: %d\n", turisticos2);

    return 0;
}
