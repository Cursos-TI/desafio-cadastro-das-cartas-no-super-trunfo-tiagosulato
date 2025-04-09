#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Tiago

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
    int  pontos_turisticos1, pontos_turisticos2;
    int comp_pontosTuristicos, compPibpercapita, comp_populacao;
    int compArea, compPib, compSuperpoder, compDensidade;
    unsigned long int populacao1, populacao2;

    char estado1, estado2;
    char codcarta1[50];
    char nomecidade1[50];
    char codcarta2[50];
    char nomecidade2[50];

    float area1, pib1, area2, pib2, superpoder1, superpoder2; 
    float densid_populacional1, pib_percapita1, densid_populacional2, pib_percapita2;
   

    // Cadastro das Cartas:
    
    printf("Vamos digitar os dados da carta 1 \n");

    printf("Digite a letra estado:\n ");
    scanf(" %s", &estado1);

    printf("Digite o codigo da carta:\n");
    scanf(" %s", &codcarta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %s", &nomecidade1);

    printf ("Digite a população da cidade \n");
    scanf(" %lu", &populacao1);

    printf ("Digite a area da cidade em Km² \n");
    scanf("      %f", &area1);

    printf ("Digite o pib da cidade \n");
    scanf("      %f", &pib1);

    printf ("Digite a quantidade de Pontos Turisticos da cidade \n");
    scanf("      %i", &pontos_turisticos1);

    
    //atribuindo valor as variaveis carta 2

    printf ("Vamos digitar os dados da carta 2 \n");

    printf ("Digite a letra estado \n");
    scanf(" %c", &estado2);

    printf ("Digite o codigo da carta \n");
    scanf(" %s", &codcarta2);

    printf ("Digite o nome da cidade \n");
    scanf(" %s", &nomecidade2);

    printf ("Digite a população da cidade \n");
    scanf(" %lu", &populacao2);

    printf ("Digite a area da cidade em Km² \n");
    scanf(" %f", &area2);

    printf ("Digite o pib da cidade \n");
    scanf(" %f", &pib2);

    printf ("Digite a quantidade de Pontos Turisticos da cidade \n");
    scanf(" %i", &pontos_turisticos2);

    //calculando densidade e Pib per Capita

    densid_populacional1 = populacao1 / area1;
    densid_populacional2 = populacao2 / area2;
    pib_percapita1 = pib1 / populacao1;
    pib_percapita2 = pib2 / populacao2;

    //calculando super poder e comparando as cartas

    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_percapita1 + (1/densid_populacional1);
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_percapita2 + (1/densid_populacional2);

    comp_populacao = populacao1 > populacao2;
    compArea = area1 > area2;
    compPib =  pib1 > pib2;
    compSuperpoder = superpoder1 > superpoder2;
    compDensidade = densid_populacional1 > densid_populacional2; 
    compPibpercapita = pib_percapita1 > pib_percapita2;
    comp_pontosTuristicos = pontos_turisticos1 > pontos_turisticos2;

    // Exibição dos Dados das Cartas:
    // saída de dados carta 1
    
     printf ("Carta 1 \n");

     printf ("Estado: %c \n", estado1);
 
     printf ("Numero da Carta: %s \n", codcarta1);
 
     printf ("Nome da Cidade: %s \n", nomecidade1);
 
     printf ("População: %lu \n", populacao1);
 
     printf ("Area: %.2f Km²\n", area1);
 
     printf ("PIB: %.2f Bilhôes de reais\n", pib1);
 
     printf ("Pontos Turisticos: %i \n", pontos_turisticos1);

     printf ("Densidade Populacional: %.2f hab/km² \n", densid_populacional1);

     printf ("PIB per Capita: %.2f Reais \n ", pib_percapita1);

     printf ("Super Poder: %.2f \n \n",superpoder1);
 
     // Saída de dados carta 2
     printf ("Carta 2 \n");
 
     printf ("Estado: %c \n", estado2);
 
     printf ("Numero da Carta: %s \n", codcarta2);
 
     printf ("Nome da Cidade: %s \n", nomecidade2);
 
     printf ("População: %lu \n", populacao2);
 
     printf ("Area: %.2f Km²\n", area2);
 
     printf ("PIB: %.2f Bilhôes de reais\n", pib2);
 
     printf ("Pontos Turisticos: %i \n", pontos_turisticos2);

     printf ("Densidade Populacional: %.2f hab/km² \n", densid_populacional2);

     printf ("PIB per Capita: %.2f Reais \n ", pib_percapita2);

     printf ("Super Poder: %.2f \n \n", superpoder2);

     //Saída de Dados do vencedor
     printf ("Vamos ver o vencedor agora\n\n");

     printf ("População (Carta 1 vence se o resultado for 1): %i \n ",comp_populacao);

     printf ("Area (Carta 1 vence se o resultado for 1): %i \n ",compArea);

     printf ("PIB (Carta 1 vence se o resultado for 1): %i \n ",compPib);

     printf ("Pontos turisticos (Carta 1 vence se o resultado for 1): %i \n ",comp_pontosTuristicos);

     printf ("Densidade Populacional (Carta 1 vence se o resulatdo for 0): %i \n",compDensidade);

     printf ("PIB per Capita (Carta 1 vence se o resultado for 1): %i \n ",compPibpercapita);

     printf ("Super poder (Carta 1 vence se o resultado for 1): %i \n ",compSuperpoder);


    return 0;
}
