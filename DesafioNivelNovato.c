#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis para armazenar os dados das duas cartas
    char Estado1, Estado2;
    char CodigoDaCarta1[5], CodigoDaCarta2[5];
    char NomeDaCidade1[30], NomeDaCidade2[30];
    int Populacao1, Populacao2, NumerosDePontosTuristicos1, NumerosDePontosTuristicos2;
    int Escolha;
    float Area1, Area2; 
    float PIB1, PIB2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float PIBperCapita1, PIBperCapita2;

    // Entrada de dados para a primeira carta
    printf("\n --- Desafio Super Trunfo --- \n");

    printf("Digite a letra do estado (A-H) da primeira carta:\n");
    scanf(" %c", &Estado1);

    printf("Digite o código da primeira carta:\n");
    scanf("%s", CodigoDaCarta1);

    printf("Digite o nome da primeira cidade:\n");
    scanf(" %[^\n]s", NomeDaCidade1);  

    printf("Digite o número da população da cidade:\n");
    scanf("%d", &Populacao1);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &NumerosDePontosTuristicos1);

    // Cálculo para densidade populacional e PIB per capita
    DensidadePopulacional1 = Populacao1 / Area1;
    PIBperCapita1 = PIB1 / Populacao1;

    // Entrada de dados para a segunda carta
    printf("\n*** Digite a letra do estado (A-H) da segunda carta:\n");
    scanf(" %c", &Estado2); 

    printf("Digite o código da segunda carta:\n");
    scanf("%s", CodigoDaCarta2);

    printf("Digite o nome da cidade da segunda carta:\n");
    scanf(" %[^\n]s", NomeDaCidade2); 

    printf("Digite a população da cidade:\n");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade em km²:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade (em bilhões de reais):\n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &NumerosDePontosTuristicos2);

    // Cálculo para densidade populacional e PIB per capita
    DensidadePopulacional2 = Populacao2 / Area2;
    PIBperCapita2 = PIB2 / Populacao2;
    
    // Exibição dos dados cadastrados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c \n", Estado1);
    printf("Código: %s \n", CodigoDaCarta1);
    printf("Nome da Cidade: %s \n", NomeDaCidade1);
    printf("População: %d \n", Populacao1);
    printf("Área: %.2f km² \n", Area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", NumerosDePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional1);
    printf("PIB per Capita: %.2f reais \n", PIBperCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", CodigoDaCarta2);
    printf("Nome da Cidade: %s \n", NomeDaCidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %.2f km² \n", Area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", NumerosDePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² \n", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", PIBperCapita2);

    // Menu para escolher a entrada do atributo
    printf("\n*** Escolha um atributo para comparar: ***\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Números de Pontos Turísticos\n");
    printf("5- Densidade Populacional\n");
    scanf("%d", &Escolha);

    // Comparação de cartas

    switch (Escolha) {
    case 1: //População
        printf("\n---Comparação da População---\n");
        printf("Carta 1- %s (%c) %d habitantes \n", NomeDaCidade1, Estado1, Populacao1);
        printf("Carta 2- %s (%c) %d habitantes \n", NomeDaCidade2, Estado2, Populacao2);
    if (Populacao1 > Populacao2)
    {
        printf("\n---Carta 1 VENCEU!--- (%s)\n", NomeDaCidade1);
    } else if (Populacao1 < Populacao2) {
        printf("\n---Carta 2 VENCEU!--- (%s)\n", NomeDaCidade2);
    } else {
        printf("\n---Empate!---\n");
    }
        break;
    case 2: //Área
        printf("\n---Comparação Área---\n");
    if (Area1 > Area2)
    {
        printf("\n---Carta 1- VENCEU!--- (%s) \n", NomeDaCidade1);
    } else if (Area1 < Area2)
    {
        printf("\n---Carta 2 VENCEU!--- (%s)\n", NomeDaCidade2);
    } else {
        printf("\n---Empate!---\n");
    } 
        break;
    case 3: //PIB    
        printf("\n---Comparação PIB---\n");
    if (PIB1 > PIB2)
    {
        printf("\n---Carta 1- VENCEU!--- (%s) \n", NomeDaCidade1);
    } else if (PIB1 < PIB2)
    {
        printf("\n---Carta 2 VENCEU!--- (%s)\n", NomeDaCidade2);
    } else {
        printf("\n---Empate!---\n");
    } 
        break;
    case 4: //Número de Pontos Turísticos
        printf("\n---Comparação Pontos Turísticos---\n");
    if (NumerosDePontosTuristicos1 > NumerosDePontosTuristicos2)
    {
        printf("\n---Carta 1- VENCEU!--- (%s) \n", NomeDaCidade1);
    } else if (NumerosDePontosTuristicos1 < NumerosDePontosTuristicos2)
    {
        printf("\n---Carta 2 VENCEU!--- (%s)\n", NomeDaCidade2);
    } else {
        printf("\n---Empate!---\n");
    } 
        break;
    case 5: //Densidade Populacional
        printf("\n---Comparação Densidade Populacional---\n");
    if (DensidadePopulacional1 > DensidadePopulacional2) {
        printf("\n--- Resultado: Carta 1 venceu! --- (%s)\n", NomeDaCidade1);
    } else if (DensidadePopulacional1 < DensidadePopulacional2) {
        printf("\n--- Resultado: Carta 2 venceu! --- (%s)\n", NomeDaCidade2);
    } else {
        printf("\n--- Empate! ---\n");
    }
        break;
    case 6: //PIB per Capita
        printf("\n---Comparação PIB per Capita---\n");
    if (PIBperCapita1 > PIBperCapita2)
    {
        printf("\n---Carta 1- VENCEU!--- (%s) \n", NomeDaCidade1);
    } else if (PIBperCapita1 < PIBperCapita2)
    {
        printf("\n---Carta 2 VENCEU!--- (%s)\n", NomeDaCidade2);
    } else {
        printf("\n---Empate!---\n");
    } 
        break;  
    default:
        printf("Opção Inválida!\n");
        break;
    }


    return 0;
}
