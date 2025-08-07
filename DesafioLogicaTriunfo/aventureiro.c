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
    printf("Área: %.2f km²\
