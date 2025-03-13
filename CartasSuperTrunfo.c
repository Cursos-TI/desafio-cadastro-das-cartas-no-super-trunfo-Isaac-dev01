#include <stdio.h>

int main() {

printf ("Seja bem vindo ao desafio - Cartas Super Trunfo!\n\n");

//banco de dados

char cidade1 [10], cidade2 [10], estado [10], codigo1 [3], codigo2 [3];
int populacao1, populacao2, turismo1, turismo2;
float pib1, pib2, area1, area2, DP1, DP2, PPP1, PPP2;

printf ("Cadastre as cartas.\n");
printf ("Estado(A):\n");
scanf ("%s", &estado);
printf ("Estado(A): %s\n", estado);

printf ("Cidade 1:\n");
scanf ("%s", &cidade1);
printf ("Cidade 1: %s\n", cidade1);

printf ("Código da Carta (A01):\n");
scanf ("%s", &codigo1);
printf ("Código da Carta(A01): %s\n", codigo1);

printf ("População:\n");
scanf ("%d", &populacao1);
printf ("População: %d\n", populacao1);

printf ("Área:\n");
scanf ("%f", &area1);
printf ("Área: %.3f\n", area1);

printf ("PIB:\n");
scanf ("%f", &pib1);
printf ("PIB: %.3f\n", pib1);


printf ("Número de Pontos Turísticos:\n");
scanf ("%d", &turismo1);
printf ("Número de Pontos Turísticos: %d\n", turismo1);

DP1 = populacao1 / area1;

printf ("Dencidade populacional: %f\n", DP1);

PPP1 = pib1 / populacao1;

printf ("PIB per capita: %f\n", PPP1);

printf ("\n");

printf ("Cidade 2:\n");
scanf ("%s", &cidade2);
printf ("Cidade 2: %s\n", cidade2);


printf ("Código da Carta(A02):\n");
scanf ("%s", &codigo2);
printf ("Código da Carta(A02): %s\n", codigo2);

printf ("População:\n");
scanf ("%d", &populacao2);
printf ("População: %d\n", populacao2);

printf ("Área:\n");
scanf ("%f", &area2);
printf ("Área: %.3f\n", area2);


printf ("PIB:\n");
scanf ("%f", &pib2);
printf ("PIB: %.3f\n", pib2);


printf ("Número de Pontos Turísticos:\n");
scanf ("%d", &turismo2);
printf ("Número de Pontos Turísticos: %d\n", turismo2);

DP2 = populacao2 / area2;

printf ("Dencidade populacional: %f\n", DP2);

PPP2 = pib2 / populacao2;

printf ("PIB per capita: %f\n", PPP2);



    return 0;
}
