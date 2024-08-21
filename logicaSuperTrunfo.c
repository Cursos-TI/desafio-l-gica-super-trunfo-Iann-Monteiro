#include <stdio.h>

typedef struct {
    char estado;
    int codigo;
    char nome[30];
    double populacao;
    double area;
    double pib;
    int numPontosTuristicos;
} Carta;

int comparaCartas(Carta c1, Carta c2, int atributo1, int atributo2) {
    int resultado1, resultado2;

    switch (atributo1) {
        case 1:
            resultado1 = (c1.populacao > c2.populacao) ? 1 : (c1.populacao < c2.populacao) ? -1 : 0;
            break;
        case 2:
            resultado1 = (c1.area > c2.area) ? 1 : (c1.area < c2.area) ? -1 : 0;
            break;
        case 3:
            resultado1 = (c1.pib > c2.pib) ? 1 : (c1.pib < c2.pib) ? -1 : 0;
            break;
        case 4:
            resultado1 = (c1.numPontosTuristicos > c2.numPontosTuristicos) ? 1 : (c1.numPontosTuristicos < c2.numPontosTuristicos) ? -1 : 0;
            break;
        default:
            resultado1 = 0;
            break;
    }

    switch (atributo2) {
        case 1:
            resultado2 = (c1.populacao > c2.populacao) ? 1 : (c1.populacao < c2.populacao) ? -1 : 0;
            break;
        case 2:
            resultado2 = (c1.area > c2.area) ? 1 : (c1.area < c2.area) ? -1 : 0;
            break;
        case 3:
            resultado2 = (c1.pib > c2.pib) ? 1 : (c1.pib < c2.pib) ? -1 : 0;
            break;
        case 4:
            resultado2 = (c1.numPontosTuristicos > c2.numPontosTuristicos) ? 1 : (c1.numPontosTuristicos < c2.numPontosTuristicos) ? -1 : 0;
            break;
        default:
            resultado2 = 0;
            break;
    }

    return (resultado1 + resultado2 > 0) ? 1 : (resultado1 + resultado2 < 0) ? -1 : 0;
}

int main() {
    Carta carta1, carta2;

    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);
    printf("Código: ");
    scanf("%d", &carta1.codigo);
    printf("Nome: ");
    scanf("%s", carta1.nome);
    printf("População: ");
    scanf("%lf", &carta1.populacao);
    printf("Área: ");
    scanf("%lf", &carta1.area);
    printf("PIB: ");
    scanf("%lf", &carta1.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.numPontosTuristicos);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);
    printf("Código: ");
    scanf("%d", &carta2.codigo);
    printf("Nome: ");
    scanf("%s", carta2.nome);
    printf("População: ");
    scanf("%lf", &carta2.populacao);
    printf("Área: ");
    scanf("%lf", &carta2.area);
    printf("PIB: ");
    scanf("%lf", &carta2.pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.numPontosTuristicos);

    int escolha1, escolha2;
    printf("\nEscolha o primeiro atributo para comparar:\n1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    scanf("%d", &escolha1);
    printf("Escolha o segundo atributo para comparar:\n1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n");
    scanf("%d", &escolha2);

    int resultado = comparaCartas(carta1, carta2, escolha1, escolha2);
    if (resultado > 0)
        printf("Carta 1 venceu!\n");
    else if (resultado < 0)
        printf("Carta 2 venceu!\n");
    else
        printf("Empate!\n");

    return 0;
}