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

int compararAtributo(CartaCidade c1, CartaCidade c2, int atributo) {
    switch (atributo) {
        case 1: return (c1.populacao > c2.populacao) ? 1 : (c1.populacao < c2.populacao ? 2 : 0);
        case 2: return (c1.area > c2.area) ? 1 : (c1.area < c2.area ? 2 : 0);
        case 3: return (c1.pib > c2.pib) ? 1 : (c1.pib < c2.pib ? 2 : 0);
        case 4: return (c1.pontosTuristicos > c2.pontosTuristicos) ? 1 : (c1.pontosTuristicos < c2.pontosTuristicos ? 2 : 0);
        default: return -1;
    }
}

void exibirResultado(int r, const char* nome1, const char* nome2, const char* atributo) {
    if (r == 1)
        printf("%
