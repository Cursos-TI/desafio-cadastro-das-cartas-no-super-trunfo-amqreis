#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Nível Aventureiro - Cadastro e Cálculo de Propriedades

int main() {
    char codigo[4];  // Código da cidade (ex: A01)
    char nome[50];   // Nome da cidade
    long populacao;  // População da cidade
    float area;      // Área da cidade em km²
    float pib;       // PIB da cidade em bilhões
    int pontosTuristicos; // Número de pontos turísticos
    float densidadePopulacional, pibPerCapita;
    
    int numCartas;
    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &numCartas);
    
    for (int i = 0; i < numCartas; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);
        
        printf("Digite o código da cidade (ex: A01): ");
        scanf("%s", codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %[^
]", nome);

        printf("Digite a população da cidade: ");
        scanf("%ld", &populacao);

        printf("Digite a área da cidade (em km²): ");
        scanf("%f", &area);

        printf("Digite o PIB da cidade (em bilhões): ");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontosTuristicos);

        // Cálculo das novas propriedades
        densidadePopulacional = (area > 0) ? populacao / area : 0;
        pibPerCapita = (populacao > 0) ? pib / populacao : 0;

        // Exibindo os dados cadastrados
        printf("\n--- Dados da Carta %d ---\n", i + 1);
        printf("Código: %s\n", codigo);
        printf("Nome: %s\n", nome);
        printf("População: %ld\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões\n", pib);
        printf("Pontos Turísticos: %d\n", pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
        printf("PIB per Capita: %.2f bilhões/hab\n", pibPerCapita);
    }

    return 0;
}

