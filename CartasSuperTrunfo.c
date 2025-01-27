#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Definindo variáveis para os atributos da cidade
    char codigo[4];  // Código da cidade (ex: A01)
    char nome[50];   // Nome da cidade
    long populacao;  // População da cidade
    float area;      // Área da cidade em km²
    float pib;       // PIB da cidade em bilhões
    int pontosTuristicos; // Número de pontos turísticos
    
    // Sugestão: Permitir o cadastro de várias cartas
    int numCartas;
    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &numCartas);
    
    // Loop para cadastrar as cartas
    for (int i = 0; i < numCartas; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);
        
        // Capturando dados da cidade
        printf("Digite o código da cidade (ex: A01): ");
        scanf("%s", codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", nome); // Captura strings com espaços

        printf("Digite a população da cidade: ");
        scanf("%ld", &populacao);

        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area);

        printf("Digite o PIB da cidade (em bilhões): ");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos);

        // Exibindo os dados cadastrados
        printf("\n--- Dados da Carta %d ---\n", i + 1);
        printf("Código: %s\n", codigo);
        printf("Nome: %s\n", nome);
        printf("População: %ld\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões\n", pib);
        printf("Pontos Turísticos: %d\n", pontosTuristicos);
    }

    return 0;
}
