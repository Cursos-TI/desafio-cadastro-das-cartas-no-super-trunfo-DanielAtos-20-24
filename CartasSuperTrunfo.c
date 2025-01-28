#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//Teste Daniel Moreira

int main() {

    int codigo;
    char nome[20];
    int populacao;
    float area;
    float pib;
    char pontosTuristicos [100];
    
    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade: \n"); 
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite os pontos turisticos: \n");
    scanf("%s", &pontosTuristicos);

    printf("Código da cidade: %d\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n" , populacao);
    printf("Área da cidade: %f\n", area);
    printf("PIB da cidade: %f\n", pib);
    printf("Pontos turisticos: %s\n", pontosTuristicos);

 return 0;
}

