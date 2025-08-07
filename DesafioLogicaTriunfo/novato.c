#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaCidade;

void exibirCarta(CartaCidade c) {
    printf("\n--- Carta da Cidade ---\n");
    printf("Código: %s\n", c.codigo);
    printf("Nome: %s\n", c.nome);
    printf("Estado: %s\n", c.estado);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: R$ %.2f bilhões\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontosTuristicos);
}

int main() {
    CartaCidade carta1, carta2;
    int escolha;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome da cidade: ");
    fgets(carta1.nome, sizeof(carta1.nome), stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = 0;

    printf("Estado: ");
    fgets(carta1.estado, sizeof(carta1.estado), stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = 0;

    printf("Código da carta: ");
    fgets(carta1.codigo, sizeof(carta1.codigo), stdin);
    carta1.codigo[strcspn(carta1.codigo, "\n")] = 0;

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    getchar(); // limpar o buffer

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome da cidade: ");
    fgets(carta2.nome, sizeof(carta2.nome), stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = 0;

    printf("Estado: ");
    fgets(carta2.estado, sizeof(carta2.estado), stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = 0;

    printf("Código da carta: ");
    fgets(carta2.codigo, sizeof(carta2.codigo), stdin);
    carta2.codigo[strcspn(carta2.codigo, "\n")] = 0;

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibir as cartas cadastradas
    exibirCarta(carta1);
    exibirCarta(carta2);

    // Escolha do atributo para comparar
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    scanf("%d", &escolha);

    printf("\n--- Resultado da Comparação ---\n");

    switch (escolha) {
        case 1:
            if (carta1.populacao > carta2.populacao)
                printf("%s venceu por ter maior população.\n", carta1.nome);
            else if (carta1.populacao < carta2.populacao)
                printf("%s venceu por ter maior população.\n", carta2.nome);
            else
                printf("Empate em população!\n");
            break;

        case 2:
            if (carta1.area > carta2.area)
                printf("%s venceu por ter maior área.\n", carta1.nome);
            else if (carta1.area < carta2.area)
                printf("%s venceu por ter maior área.\n", carta2.nome);
            else
                printf("Empate em área!\n");
            break;

        case 3:
            if (carta1.pib > carta2.pib)
                printf("%s venceu por ter maior PIB.\n", carta1.nome);
            else if (carta1.pib < carta2.pib)
                printf("%s venceu por ter maior PIB.\n", carta2.nome);
            else
                printf("Empate em PIB!\n");
            break;

        case 4:
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("%s venceu por ter mais pontos turísticos.\n", carta1.nome);
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                printf("%s venceu por ter mais pontos turísticos.\n", carta2.nome);
            else
                printf("Empate em pontos turísticos!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
