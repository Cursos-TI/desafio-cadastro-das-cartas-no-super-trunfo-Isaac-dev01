#include <stdio.h>

int main() {
printf ("Desafio Cartas Super Trunfos - Brasil vs Argentina\n\n");

printf ("Serão divididos 8 estados, identificados pelas letras de A a H.\n");
printf ("Cada estado terá 4 cidades, numeradas de 1 a 4.\n\n");

printf ("Estados e as cidades do Brasil:\n");
printf ("1- São Paulo(A):\n");
printf ("- São Paulo(A01)\n- Campinas(A02)\n- Sorocaba(A03)\n- Santos(A04)\n");
printf ("2- Rio de Janeiro(B):\n");
printf ("- Rio de Janeiro(B01)\n- Niterói(B02)\n- Petrópolis(B03)\n- Nova Iguaçu(B04)\n");
printf ("3- Minas Gerais(C):\n");
printf ("- Belo Horizonte(C01)\n- Uberlândia(C02)\n- Juiz de Fora(C03)\n- Contagem(C04)\n");
printf ("4- Bahia(D):\n");
printf ("- Salvador(D01)\n- Feira de Santana(D02)\n- Vitória da Conquista(D03)\n- Itabuna(D04)\n");
printf ("5- Rio Grande do Sul(E):\n");
printf ("- Porto Alegre(E01)\n- Caxias do Sul(E02)\n- Pelotas(E03)\n- Santa Maria(E04)\n");
printf ("6- Paraná(F):\n");
printf ("- Curitiba(F01)\n- Londrina(F02)\n- Maringá(F03)\n- Ponta Grossa(F04)\n");
printf ("7- Pernambuco(G):\n");
printf ("- Recife(G01)\n- Olinda(G02)\n- Caruaru(G03)\n- Petrolina(G04)\n");
printf ("8- Ceará(H):\n");
printf ("- Fortaleza(H01)\n- Sobral(H02)\n- Juazeiro do Norte(H03)\n- Crato(H04)\n\n");

printf ("Estados e as cidades da Argentina:\n");
printf ("1- Buenos Aires(A):\n");
printf ("- Buenos Aires(A01)\n- La Plata(A02)\n- Mar del Plata(A03)\n- Bahía Blanca(A04)\n");
printf ("2- Córdoba(B):\n");
printf ("- Córdoba(B01)\n- Villa María(B02)\n- Río Cuarto(B03)\n- Alta Gracia(B04)\n");
printf ("3- Santa Fe(C):\n");
printf ("- Rosario(C01)\n- Santa Fe(C02)\n- Rafaela(C03)\n- Venado Tuerto(C04)\n");
printf ("4- Mendoza(D):\n");
printf ("- Mendoza(D01)\n- San Rafael(D02)\n- Luján de Cuyo(D03)\n- Malargüe(D04)\n");
printf ("5- Tucumán(E):\n");
printf ("- San Miguel de Tucumán(E01)\n- Tafí Viejo(E02)\n- Yerba Buena(E03)\n- Monteros(E04)\n");
printf ("6- Salta(F):\n");
printf ("- Salta(F01)\n- Orán(F02)\n- Tartagal(F03)\n- Cafayate(F04)\n");
printf ("7- Entre Ríos(G):\n");
printf ("- Paraná(G01)\n- Concordia(G02)\n- Gualeguaychú(G03)\n- Villaguay(G04)\n");
printf ("8- Chubut(H):\n");
printf ("- Comodoro Rivadavia(H01)\n- Puerto Madryn(H02)\n- Trelew(H03)\n- Esquel(H04)\n\n");

//Banco de dados do Brasil.

float PPBRA01, PPBRA02, PPBRA03, PPBRA04, AREABRA01, AREABRA02, AREABRA03, AREABRA04, PIBBRA01, PIBBRA02, PIBBRA03, PIBBRA04;
int NPTBRA01, NPTBRA02, NPTBRA03, NPTBRA04;
float PPBRB01, PPBRB02, PPBRB03, PPBRB04, AREABRB01, AREABRB02, AREABRB03, AREABRB04, PIBBRB01, PIBBRB02, PIBBRB03, PIBBRB04;
int NPTBRB01, NPTBRB02, NPTBRB03, NPTBRB04;
float PPBRC01, PPBRC02, PPBRC03, PPBRC04, AREABRC01, AREABRC02, AREABRC03, AREABRC04, PIBBRC01, PIBBRC02, PIBBRC03, PIBBRC04;
int NPTBRC01, NPTBRC02, NPTBRC03, NPTBRC04;
float PPBRD01, PPBRD02, PPBRD03, PPBRD04, AREABRD01, AREABRD02, AREABRD03, AREABRD04, PIBBRD01, PIBBRD02, PIBBRD03, PIBBRD04;
int NPTBRD01, NPTBRD02, NPTBRD03, NPTBRD04;
float PPBRE01, PPBRE02, PPBRE03, PPBRE04, AREABRE01, AREABRE02, AREABRE03, AREABRE04, PIBBRE01, PIBBRE02, PIBBRE03, PIBBRE04;
int NPTBRE01, NPTBRE02, NPTBRE03, NPTBRE04;
float PPBRF01, PPBRF02, PPBRF03, PPBRF04, AREABRF01, AREABRF02, AREABRF03, AREABRF04, PIBBRF01, PIBBRF02, PIBBRF03, PIBBRF04;
int NPTBRF01, NPTBRF02, NPTBRF03, NPTBRF04;
float PPBRG01, PPBRG02, PPBRG03, PPBRG04, AREABRG01, AREABRG02, AREABRG03, AREABRG04, PIBBRG01, PIBBRG02, PIBBRG03, PIBBRG04;
int NPTBRG01, NPTBRG02, NPTBRG03, NPTBRG04;
float PPBRH01, PPBRH02, PPBRH03, PPBRH04, AREABRH01, AREABRH02, AREABRH03, AREABRH04, PIBBRH01, PIBBRH02, PIBBRH03, PIBBRH04;
int NPTBRH01, NPTBRH02, NPTBRH03, NPTBRH04;

//Banco de dados da Argentina.

float PPARA01, PPARA02, PPARA03, PPARA04, AREAARA01, AREAARA02, AREAARA03, AREAARA04, PIBARA01, PIBARA02, PIBARA03, PIBARA04;
int NPTARA01, NPTARA02, NPTARA03, NPTARA04;
float PPARB01, PPARB02, PPARB03, PPARB04, AREAARB01, AREAARB02, AREAARB03, AREAARB04, PIBARB01, PIBARB02, PIBARB03, PIBARB04;
int NPTARB01, NPTARB02, NPTARB03, NPTARB04;
float PPARC01, PPARC02, PPARC03, PPARC04, AREAARC01, AREAARC02, AREAARC03, AREAARC04, PIBARC01, PIBARC02, PIBARC03, PIBARC04;
int NPTARC01, NPTARC02, NPTARC03, NPTARC04;
float PPARD01, PPARD02, PPARD03, PPARD04, AREAARD01, AREAARD02, AREAARD03, AREAARD04, PIBARD01, PIBARD02, PIBARD03, PIBARD04;
int NPTARD01, NPTARD02, NPTARD03, NPTARD04;
float PPARE01, PPARE02, PPARE03, PPARE04, AREAARE01, AREAARE02, AREAARE03, AREAARE04, PIBARE01, PIBARE02, PIBARE03, PIBARE04;
int NPTARE01, NPTARE02, NPTARE03, NPTARE04;
float PPARF01, PPARF02, PPARF03, PPARF04, AREAARF01, AREAARF02, AREAARF03, AREAARF04, PIBARF01, PIBARF02, PIBARF03, PIBARF04;
int NPTARF01, NPTARF02, NPTARF03, NPTARF04;
float PPARG01, PPARG02, PPARG03, PPARG04, AREAARG01, AREAARG02, AREAARG03, AREAARG04, PIBARG01, PIBARG02, PIBARG03, PIBARG04;
int NPTARG01, NPTARG02, NPTARG03, NPTARG04;
float PPARH01, PPARH02, PPARH03, PPARH04, AREAARH01, AREAARH02, AREAARH03, AREAARH04, PIBARH01, PIBARH02, PIBARH03, PIBARH04;
int NPTARH01, NPTARH02, NPTARH03, NPTARH04;

printf ("Agora insira os dados de cada cidade abaixo.\n");

    return 0;
}
