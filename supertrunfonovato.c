#include <stdio.h>

int main(){
    char estado1[50], estado2[50];
    char codcard1[50], codcard2[50];
    char cityname1[50], cityname2[50]; 
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int numptur1, numptur2;

    printf("Insira o Estado da Carta 1 (uma letra de 'A' a 'H'): \n");
    scanf("%s", &estado1);

    printf("Insira o Código da Carta 1 (um num de 01 a 04): \n");
    scanf("%s", &codcard1);

    printf("Insira o Nome da Cidade da Carta 1: \n");
    scanf("%s", &cityname1);

    printf("Insira o Número de Habitantes da Cidade da Carta 1: \n");
    scanf("%d", &populacao1);

    printf("Insira a Área (em km2) da Cidade da Carta 1: \n");
    scanf("%f", &area1);

    printf("Insira o PIB da Cidade da Carta 1: \n");
    scanf("%f", &pib1);

    printf("Insira o Número de Pontos Turísticos da Cidade da Carta 1: \n");
    scanf("%d", &numptur1);


    printf("Insira o Estado da Carta 2 (uma letra de 'A' a 'H'): \n");
    scanf("%s", &estado2);

    printf("Insira o Código da Carta 2 (um num de 01 a 04): \n");
    scanf("%s", &codcard2);

    printf("Insira o Nome da Cidade da Carta 2: \n");
    scanf("%s", &cityname2);

    printf("Insira o Número de Habitantes da Cidade da Carta 2: \n");
    scanf("%d", &populacao2);

    printf("Insira a Área (em km2) da Cidade da Carta 2: \n");
    scanf("%f", &area2);

    printf("Insira o PIB da Cidade da Carta 2: \n");
    scanf("%f", &pib2);

    printf("Insira o Número de Pontos Turísticos da Cidade da Carta 2: \n");
    scanf("%d", &numptur2);


    printf("Informações da Carta 1: \n");
    printf("Estado: %s\nCódigo da Carta: %s%s\nNome da Cidade: %s \n", estado1, estado1, codcard1, cityname1);
    printf("População: %d\nÁrea em km2: %f\nPIB: %f \n", populacao1, area1, pib1);
    printf("Número de Pontos Turísticos: %d\n\n", numptur1);

    printf("Informações da Carta 2: \n");
    printf("Estado: %s\nCódigo da Carta: %s%s\nNome da Cidade: %s \n", estado2, estado2, codcard2, cityname2);
    printf("População: %d\nÁrea em km2: %f\nPIB: %f \n", populacao2, area2, pib2);
    printf("Número de Pontos Turísticos: %d", numptur2);

    return 0;

}