#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
typedef struct {
    char estado;
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

// Função para limpar o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

// Função para ler os dados de uma carta
void ler_carta(Carta *c, int numero) {
    printf("\n--- CADASTRO DA CARTA %d ---\n", numero);
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &c->estado);
    limpar_buffer();

    printf("Digite o código da carta (ex: A01): ");
    scanf("%4s", c->codigo);
    limpar_buffer();

    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", c->cidade);
    limpar_buffer();

    printf("Digite a população da cidade: ");
    scanf("%d", &c->populacao);
    limpar_buffer();

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &c->area);
    limpar_buffer();

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &c->pib);
    limpar_buffer();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos);
    limpar_buffer();
}

// Função para exibir os dados de uma carta
void exibir_carta(Carta c, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Nome da Cidade: %s\n", c.cidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f bilhões de reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontos_turisticos);
}

int main() {
    Carta carta1, carta2;

    printf("Bem-vindo ao cadastro de cartas do Super Trunfo!\n");
    printf("Você irá cadastrar duas cartas.\n");

    // Cadastro das cartas
    ler_carta(&carta1, 1);
    ler_carta(&carta2, 2);

    // Exibição das cartas
    printf("\n--- CARTAS CADASTRADAS ---");
    exibir_carta(carta1, 1);
    exibir_carta(carta2, 2);

    return 0;
}