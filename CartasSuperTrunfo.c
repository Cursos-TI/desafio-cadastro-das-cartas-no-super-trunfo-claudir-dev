#include <stdio.h> 

int calculo (float populacao, float area, float PIB);
int capturaDados(void);
int repetir(void);

int capturaDados(void) {
    char estado[50];
    char cidade [50];
    float populacao;
    float area;
    float PIB;
    int turismo;

    printf("--- Bem vindo ao Super Trunfo de Cidades ---!\n\n");

    printf("Digite seu estado: ");
    scanf("%s", &estado);

    printf("Digite sua cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população da sua cidade: ");
    scanf("%f", &populacao);

    printf("Digite a area da dua cidade: ");
    scanf("%f", &area);

    printf("Digite o pip da dua cidade: ");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos existem na sua cidade?: ");
    scanf("%d", &turismo);


    printf("\n--- Sua carta foi criadda com sucesso!  ---\n");

    printf("Estado: %s\n",estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Area: %.2fKM²\n", area);
    printf("PIB: %.2fR$\n", PIB);
    printf("Pontos Turisticos: %d\n", turismo);
    calculo(populacao, area, PIB);
    repetir();

    return 0;

}

int calculo(float populacao, float area, float PIB) {
    float densidade;
    float pib_per_capita;

    densidade = (float)populacao / area;
    pib_per_capita = (float) PIB / populacao;

    printf("A densidade populacional da sua cidade é de %.2f habitantes por KM²\n", densidade);
    printf("O PIB per capita da sua cidade é de %.2f R$\n\n", pib_per_capita);

    return 0;

    
}

int repetir(void) {
    char reposta[1];

    printf("Deseja criar uma nova carta? (s/n): ");
    scanf("%s", reposta);

    if (reposta[0] == 's' || reposta[0] == 'S') {
        capturaDados();
    } else {
        printf("Obrigado por jogar!");
        
    }
    return 0;
    
}

int main () {
    capturaDados();
    return 0;
}

