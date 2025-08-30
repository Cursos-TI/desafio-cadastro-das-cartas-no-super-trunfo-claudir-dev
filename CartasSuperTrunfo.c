#include <stdio.h>
#include <stdbool.h>

// variáveis globais da carta 1
char estado1[50], cidade1[50];
unsigned long int populacao1;
float area1, PIB1, densidade1, pib_per_capita1;
int turismo1;

// variáveis globais da carta 2
char estado2[50], cidade2[50];
unsigned long int populacao2;
float area2, PIB2, densidade2, pib_per_capita2;
int turismo2;

int pontos_carta1 = 0;
int pontos_carta2 = 0;

void calculo1() {
    densidade1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) PIB1 / populacao1;
    printf("A densidade populacional da sua cidade é de %.2f hab/km²\n", densidade1);
    printf("O PIB per capita da sua cidade é de %.2f R$\n\n", pib_per_capita1);
}

void calculo2() {
    densidade2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) PIB2 / populacao2;
    printf("A densidade populacional da sua cidade é de %.2f hab/km²\n", densidade2);
    printf("O PIB per capita da sua cidade é de %.2f R$\n\n", pib_per_capita2);
}

void carta1() {
    printf("\n--- Primeira carta ---\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);
    printf("Digite a cidade: ");
    scanf("%s", cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("\n--- Carta criada com sucesso! ---\n\n");
    printf("Estado: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f R$\nTurismo: %d\n",
           estado1, cidade1, populacao1, area1, PIB1, turismo1);

    calculo1();
}

void carta2() {
    printf("\n--- Segunda carta ---\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);
    printf("Digite a cidade: ");
    scanf("%s", cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &turismo2);

    printf("\n--- Carta criada com sucesso! ---\n\n");
    printf("Estado: %s\nCidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: %.2f R$\nTurismo: %d\n",
           estado2, cidade2, populacao2, area2, PIB2, turismo2);

    calculo2();
}

void comparacao() {
    printf("\n--- Comparação ---\n\n");

    // População
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu\n");
        pontos_carta1++;
    } else if (populacao1 < populacao2) {
        printf("População: Carta 2 venceu\n");
        pontos_carta2++;
    } else {
        printf("População: Empate\n");
    }

    // Área
    if (area1 > area2) {
        printf("Área: Carta 1 venceu\n");
        pontos_carta1++;
    } else if (area1 < area2) {
        printf("Área: Carta 2 venceu\n");
        pontos_carta2++;
    } else {
        printf("Área: Empate\n");
    }

    // PIB
    if (PIB1 > PIB2) {
        printf("PIB: Carta 1 venceu\n");
        pontos_carta1++;
    } else if (PIB1 < PIB2) {
        printf("PIB: Carta 2 venceu\n");
        pontos_carta2++;
    } else {
        printf("PIB: Empate\n");
    }

    // Turismo
    if (turismo1 > turismo2) {
        printf("Turismo: Carta 1 venceu\n");
        pontos_carta1++;
    } else if (turismo1 < turismo2) {
        printf("Turismo: Carta 2 venceu\n");
        pontos_carta2++;
    } else {
        printf("Turismo: Empate\n");
    }

    // Densidade 
    if (densidade1 < densidade2) {
        printf("Densidade: Carta 1 venceu\n");
        pontos_carta1++;
    } else if (densidade1 > densidade2) {
        printf("Densidade: Carta 2 venceu\n");
        pontos_carta2++;
    } else {
        printf("Densidade: Empate\n");
    }

    // PIB per capita
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per capita: Carta 1 venceu\n");
        pontos_carta1++;
    } else if (pib_per_capita1 < pib_per_capita2) {
        printf("PIB per capita: Carta 2 venceu\n");
        pontos_carta2++;
    } else {
        printf("PIB per capita: Empate\n");
     }   
    

     printf("\n--- Placar final ---\n\n");

     printf("Carta 1: %d pontos:\n", pontos_carta1);
     printf("Carta 2: %d pontos:\n\n", pontos_carta2);

     if(pontos_carta1 > pontos_carta2) {
          printf("A carta 1 é a grande vencedora!\n");
     } else if (pontos_carta2 > pontos_carta1) {
          printf("A carta 2 é a grande vencedora!\n");
     } else {
          printf("Empate!\n");
     }
}


int main() {
    printf("--- Bem vindo ao Super Trunfo de Cidades ---\n");
    carta1();
    carta2();
    comparacao();
     return 0;
}
