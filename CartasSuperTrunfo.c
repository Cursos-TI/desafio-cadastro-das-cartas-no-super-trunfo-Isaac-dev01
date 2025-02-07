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
printf ("1- São Paulo(A)\n");
printf ("- São Paulo(A01)\n");
printf ("População: ");
scanf ("%f", &PPBRA01);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRA01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRA01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRA01);

printf ("- Campinas(A02)\n");
printf ("População: ");
scanf ("%f", &PPBRA02);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRA02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRA02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRA02);

printf ("- Sorocaba(A03)\n");
printf ("População: ");
scanf ("%f", &PPBRA03);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRA03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRA03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRA03);

printf ("- Santos(A04)\n");
printf ("População: ");
scanf ("%f", &PPBRA04);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRA04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRA04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRA04);

printf ("2- Rio de Janeiro(B)\n");
printf ("- Rio de Janeiro(B01)\n");
printf ("População: ");
scanf ("%f", &PPBRB01);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRB01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRB01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRB01);

printf ("- Niterói(B02)\n");
printf ("População: ");
scanf ("%f", &PPBRB02);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRB02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRB02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRB02);

printf ("- Petrópolis(B03)\n");
printf ("População: ");
scanf ("%f", &PPBRB03);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRB03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRB03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRB03);

printf ("- Nova Iguaçu(B04)\n");
printf ("População: ");
scanf ("%f", &PPBRB04);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRB04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRB04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRB04);

printf ("3- Minas Gerais(C)\n");
printf ("- Belo Horizonte(C01)\n");
printf ("População: ");
scanf ("%f", &PPBRC01);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRC01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRC01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRC01);

printf ("- Uberlândia(C02)\n");
printf ("População: ");
scanf ("%f", &PPBRC02);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRC02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRC02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRC02);

printf ("- Juiz de Fora(C03)\n");
printf ("População: ");
scanf ("%f", &PPBRC03);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRC03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRC03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRC03);

printf ("- Contagem(C04)\n");
printf ("População: ");
scanf ("%f", &PPBRC04);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRC04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRC04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRC04);

printf ("4- Bahia(D)\n");
printf ("- Salvador(D01)\n");
printf ("População: ");
scanf ("%f", &PPBRD01);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRD01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRD01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRD01);

printf ("- Feira de Santana(D02)\n");
printf ("População: ");
scanf ("%f", &PPBRD02);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRD02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRD02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRD02);

printf ("- Vitória da Conquista(D03)\n");
printf ("População: ");
scanf ("%f", &PPBRD03);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRD03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRD03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRD03);

printf ("- Itabuna(D04)\n");
printf ("População: ");
scanf ("%f", &PPBRD04);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRD04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRD04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRD04);

printf ("5- Rio Grande do Sul(E)\n");
printf ("- Porto Alegre(E01)\n");
printf ("População: ");
scanf ("%f", &PPBRE01);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRE01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRE01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRE01);

printf ("- Caxias do Sul(E02)\n");
printf ("População: ");
scanf ("%f", &PPBRE02);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRE02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRE02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRE02);

printf ("- Pelotas(E03)\n");
printf ("População: ");
scanf ("%f", &PPBRE03);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRE03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRE03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRE03);

printf ("- Santa Maria(E04)\n");
printf ("População: ");
scanf ("%f", &PPBRE04);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRE04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRE04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRE04);

printf ("6- Paraná(F)\n");
printf ("- Curitiba(F01)\n");
printf ("População: ");
scanf ("%f", &PPBRF01);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRF01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRF01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRF01);

printf ("- Londrina(F02)\n");
printf ("População: ");
scanf ("%f", &PPBRF02);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRF02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRF02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRF02);

printf ("- Maringá(F03)\n");
printf ("População: ");
scanf ("%f", &PPBRF03);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRF03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRF03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRF03);

printf ("- Ponta Grossa(F04)\n");
printf ("População: ");
scanf ("%f", &PPBRF04);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRF04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRF04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRF04);

printf ("7- Pernambuco(G)\n");
printf ("- Recife(G01)\n");
printf ("População: ");
scanf ("%f", &PPBRG01);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRG01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRG01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRG01);

printf ("- Olinda(G02)\n");
printf ("População: ");
scanf ("%f", &PPBRG02);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRG02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRG02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRG02);

printf ("- Caruaru(G03)\n");
printf ("População: ");
scanf ("%f", &PPBRG03);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRG03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRG03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRG03);

printf ("- Petrolina(G04)\n");
printf ("População: ");
scanf ("%f", &PPBRG04);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRG04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRG04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRG04);

printf ("8- Ceará(H)\n");
printf ("- Fortaleza(H01)\n");
printf ("População: ");
scanf ("%f", &PPBRH01);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRH01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRH01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRH01);

printf ("- Sobral(H02)\n");
printf ("População: ");
scanf ("%f", &PPBRH02);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRH02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRH02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRH02);

printf ("- Juazeiro do Norte(H03)\n");
printf ("População: ");
scanf ("%f", &PPBRH03);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRH03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRH03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRH03);

printf ("- Crato(H04)\n");
printf ("População: ");
scanf ("%f", &PPBRH04);
printf ("Área (Em km²): ");
scanf ("%f", &AREABRH04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBBRH04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTBRH04);

printf ("\n");

printf ("Agora, chegou a vez da Argentina.\n");
printf ("Insira os dados de cada cidade abaixo.\n");

printf ("1- Buenos Aires(A)\n");
printf ("- Buenos Aires(A01)\n");
printf ("População: ");
scanf ("%f", &PPARA01);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARA01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARA01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARA01);

printf ("- La Plata(A02)\n");
printf ("População: ");
scanf ("%f", &PPARA02);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARA02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARA02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARA02);

printf ("- Mar del Plata(A03)\n");
printf ("População: ");
scanf ("%f", &PPARA03);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARA03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARA03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARA03);

printf ("- Bahía Blanca(A04)\n");
printf ("População: ");
scanf ("%f", &PPARA04);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARA04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARA04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARA04);

printf ("2- Córdoba(B)\n");
printf ("- Córdoba(B01)\n");
printf ("População: ");
scanf ("%f", &PPARB01);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARB01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARB01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARB01);

Printf ("- Villa María(B02)\n");
printf ("População: ");
scanf ("%f", &PPARB02);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARB02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARB02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARB02);

Printf ("- Río Cuarto(B03)\n");
printf ("População: ");
scanf ("%f", &PPARB03);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARB03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARB03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARB03);

Printf ("- Alta Gracia(B04)\n");
printf ("População: ");
scanf ("%f", &PPARB04);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARB04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARB04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARB04);

printf ("3- Santa Fe(C)\n");
printf ("- Rosario(C01)\n");
printf ("População: ");
scanf ("%f", &PPARC01);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARC01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARC01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARC01);

printf ("- Santa Fe(C02)\n");
printf ("População: ");
scanf ("%f", &PPARC02);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARC02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARC02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARC02);

printf ("- Rafaela(C03)\n");
printf ("População: ");
scanf ("%f", &PPARC03);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARC03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARC03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARC03);

printf ("- Venado Tuerto(C04)\n");
printf ("População: ");
scanf ("%f", &PPARC04);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARC04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARC04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARC04);

printf ("4- Mendoza(D)\n");
printf ("- Mendoza(D01)\n");
printf ("População: ");
scanf ("%f", &PPARD01);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARD01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARD01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARD01);

printf ("- San Rafael(D02)\n");
printf ("População: ");
scanf ("%f", &PPARD02);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARD02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARD02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARD02);

printf ("- Luján de Cuyo(D03)\n");
printf ("População: ");
scanf ("%f", &PPARD03);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARD03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARD03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARD03);

printf ("- Malargüe(D04)\n");
printf ("População: ");
scanf ("%f", &PPARD04);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARD04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARD04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARD04);

printf ("5- Tucumán(E)\n");
printf ("- San Miguel de Tucumán(E01)\n");
printf ("População: ");
scanf ("%f", &PPARE01);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARE01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARE01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARE01);

printf ("- Tafí Viejo(E02)\n");
printf ("População: ");
scanf ("%f", &PPARE02);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARE02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARE02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARE02);

printf ("- Yerba Buena(E03)\n");
printf ("População: ");
scanf ("%f", &PPARE03);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARE03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARE03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARE03);

printf ("- Monteros(E04)\n");
printf ("População: ");
scanf ("%f", &PPARE04);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARE04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARE04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARE04);

printf ("6- Salta(F)\n");
printf ("- Salta(F01)\n");
printf ("População: ");
scanf ("%f", &PPARF01);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARF01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARF01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARF01);

printf ("- Orán(F02)\n");
printf ("População: ");
scanf ("%f", &PPARF02);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARF02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARF02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARF02);

printf ("- Tartagal(F03)\n");
printf ("População: ");
scanf ("%f", &PPARF03);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARF03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARF03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARF03);

printf ("- Cafayate(F04)\n");
printf ("População: ");
scanf ("%f", &PPARF04);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARF04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARF04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARF04);

printf ("7- Entre Ríos(G)\n");
printf ("- Paraná(G01)\n");
printf ("População: ");
scanf ("%f", &PPARG01);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARG01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARG01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARG01);

printf ("- Concordia(G02)\n");
printf ("População: ");
scanf ("%f", &PPARG02);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARG02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARG02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARG02);

printf ("- Gualeguaychú(G03)\n");
printf ("População: ");
scanf ("%f", &PPARG03);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARG03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARG03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARG03);

printf ("- Villaguay(G04)\n");
printf ("População: ");
scanf ("%f", &PPARG04);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARG04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARG04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARG04);

printf ("8- Chubut(H)\n");
printf ("- Comodoro Rivadavia(H01)\n");
printf ("População: ");
scanf ("%f", &PPARH01);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARH01);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARH01);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARH01);

printf ("- Puerto Madryn(H02)\n");
printf ("População: ");
scanf ("%f", &PPARH02);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARH02);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARH02);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARH02);

printf ("- Trelew(H03)\n");
printf ("População: ");
scanf ("%f", &PPARH03);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARH03);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARH03);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARH03);

printf ("- Esquel(H04)\n");
printf ("População: ");
scanf ("%f", &PPARH04);
printf ("Área (Em km²): ");
scanf ("%f", &AREAARH04);
printf ("PIB (Em R$): ");
scanf ("%f", &PIBARH04);
printf ("Número de Pontos Turísticos: ");
scanf ("%i", &NPTARH04);

    return 0;
}
