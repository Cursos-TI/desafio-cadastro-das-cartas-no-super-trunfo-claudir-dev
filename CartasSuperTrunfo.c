#include <stdio.h>
#include <string.h>

int nova_carta();

typedef struct {
    char estado[50];
    char cidade[50];
    float populacao;
    float area;
    float pib;
    int turismo;
} carta1;

int main() {

    carta1 cartas;

    printf("--- Bem vindo ao Super Trunfo de Cidades ---!\n\n");

    printf("Digite seu estado: ");
    fgets(cartas.estado, sizeof(cartas.estado), stdin);

    printf("Digite sua cidade: ");
    fgets(cartas.cidade, sizeof(cartas.cidade), stdin);

    printf("digite a população da sua ciade: ");
    scanf("%f", &cartas.populacao);

    printf("Digite a area da sua cidade: ");
    scanf("%f", &cartas.area);

    printf("Digite o PIB da sua cidade: ");
    scanf("%f", &cartas.pib);

    printf("Quantos pontos turisticos tem na sua cidade: ");
    scanf("%d", &cartas.turismo);

    printf("\n--- Sua carta foi criadda com sucesso!  ---\n");

    printf("Estado: %s", cartas.estado);
    printf("Cidade: %s", cartas.cidade);
    printf("População: %f\n", cartas.populacao);
    printf("Area: %.2fKM²\n", cartas.area);
    printf("PIB: %.2fR$\n", cartas.pib);
    printf("Pontos Turisticos: %d\n\n", cartas.turismo);

    nova_carta(); 

    return 0;

}

int nova_carta() {
    
    char reposta [1];

    printf("Deseja criar uma nova carta? (s/n): ");
    scanf("%s", reposta);

    if (reposta[0] == 's' || reposta[0] == 'S') {
        main();
    } else {
        printf("Obrigado por jogar o super trunfo de cidades!");
    }

    return 0;

}


