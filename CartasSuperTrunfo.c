#include <stdio.h>

int main() {

printf ("Seja bem vindo ao desafio - Cartas Super Trunfo!\n\n");

//banco de dados

char cidade1 [20], cidade2 [20], estado [20], codigo1 [3], codigo2 [3];
int populacao1, populacao2, turismo1, turismo2;
float pib1, pib2, area1, area2;

printf ("Cadastre as cartas.\n");
printf ("Estado (A):\n");
scanf ("%s", &estado);

printf ("Cidade 1:\n");
scanf ("%s", &cidade1);

printf ("Código da Carta (A01):\n");
scanf ("%s", &codigo1);

printf ("População:\n");
scanf ("%d", &populacao1);

printf ("Área:\n");
scanf ("%f", &area1);

printf ("PIB:\n");
scanf ("%f", &pib1);

printf ("Número de Pontos Turísticos:\n");
scanf ("%d\n", &turismo1);






    return 0;
}
