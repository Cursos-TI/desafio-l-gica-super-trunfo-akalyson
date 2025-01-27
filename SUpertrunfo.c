#include <stdio.h>
#include <time.h>
#include <string.h>

int main(){
    char estado01[20],codigo01[3],nome01[20],estado02[20],codigo02[3],nome02[20];
    int populacao01,populacao02,npt01,npt02;
    float area01, pib01, dp01, pibpc01,area02, pib02,dp02, pibpc02;
//entrada de dados
    printf("Digite o estado da primeira cidade: (Duas letras)\n");
    scanf(" %s", estado01);

    printf("Digite o codigo da primeira carta: (Um numero e duas letras)\n");
    scanf(" %s", codigo01);

    printf("Digite o nome da primeira cidade:\n");
    scanf(" %[^\n]", nome01);

    printf("Digite a populacao da primeira cidade:\n");
    scanf("%u", &populacao01);

    printf("Digite a area da primeira cidade em kilometros quadrados:\n");
    scanf("%f", &area01);

    printf("Digite o PIB da primeira cidade em bilhoes:\n");
    scanf("%f", &pib01);

    printf("Digite o numero de pontos turisticos da primeira cidade:\n");
    scanf("%i", &npt01);

//criacao das cartas pre definidas
    char nome1[20] = "Cuiaba", nome2[20] = "Rio de Janeiro", nome3[20] = "Belo Horizonte";
    char estado1[20] = "MT", estado2[20] = "RJ", estado3[20] = "MG";
    char codigo1[3] = "B01", codigo2[3] = "C01", codigo3[3] = "D01";
    int populacao1 =  650000, populacao2 = 6211000, populacao3 = 2316000;
    int npt1 = 25, npt2 = 58, npt3 = 28;
    float area1 = 3538, area2 = 1200, area3 = 331.4;

    int numero = time(NULL)%4;
    if(numero == 1){
        strcpy(nome02, nome1);
        strcpy(estado02, estado1);
        strcpy(codigo02, codigo1);
        populacao02 = populacao1;
        area02 = area1;
        npt02 = npt1;
    } 
    if(numero == 2){
        strcpy(nome02, nome2);
        strcpy(estado02, estado2);
        strcpy(codigo02, codigo2);
        populacao02 = populacao2;
        area02 = area2;
        npt02 = npt2;
    }
    if(numero == 3){
        strcpy(nome02, nome3);
        strcpy(estado02, estado3);
        strcpy(codigo02, codigo3);
        populacao02 = populacao3;
        area02 = area3;
        npt02 = npt3;
    }
//calculos de densidade populacional pib per capira
    dp01 = (float) (populacao01 / area01);
    dp02 = (float) (populacao02 / area02);
    pibpc01 = (double) (1000.0 * pib01) / populacao01;
    pibpc01 = pibpc01 * 1000000;
    pibpc02 = (double) (1000.0 * pib02) / populacao02;
    pibpc02 = pibpc02 * 1000000;

//exibir informacoes
    printf("\n--- Informacoes da Primeira Cidade ---\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Nome: %s\n", nome01);
    printf("Populacao: %u\n", populacao01);
    printf("Area: %.2f kilometros quadrados\n", area01);
    printf("Densidade Populacional: %.2f pessoas/km quadrado\n", dp01);
    printf("PIB: %.2f Bilhoes de reais\n", pib01);
    printf("PIB per Capita: %.2f reais\n", pibpc01);
    printf("Numero de pontos turisticos: %i\n", npt01);
//segunda cidade
    printf("\n--- Informacoes da Segunda Cidade ---\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Nome: %s\n", nome02);
    printf("Populacao: %u\n", populacao02);
    printf("Area: %.2f kilometros quadrados\n", area02);
    printf("Densidade Populacional: %.2f pessoas/km quadrado\n", dp02);
    printf("PIB: %.2f Bilhoes de reais\n", pib02);
    printf("PIB per Capita: %.2f reais\n", pibpc02);
    printf("Numero de pontos turisticos: %i\n", npt02);

    printf("Comparação de cartas");
    printf("Carta 1 - Estado: %s, Código: %s, População: %i", estado01, codigo01, populacao01);
    printf("Carta 2 - Estado: %s, Código: %s, População: %i", estado01, codigo01, populacao01);
    if(populacao01 > populacao02){
        printf("Carta 1 é a vencedora!");
    }else{
        printf("Carta 2 é a vencedora!");
    
    }
    return 0;
}