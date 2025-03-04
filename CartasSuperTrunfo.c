#include <stdio.h>

// Desafio Super Trunfo - Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando
// Tema 1 - Cadastro das cartas 
// Odjetivo: No nivel novato você deve criar as cartas representando as cidades utilizando  
// as seguintes propriedades: Código da carta, Nome da cidade, Área, Pontos turísticos, População, PIB
// Área para definição das variaveis para armazenar as propriedades das cidades 
    int main() {
        int populacao1, populacao2;
        float area1, area2;
        int pontosTuristicos1, pontosTuristicos2;
        float pib1, pib2;
        char codigoCarta1[10], codigoCarta2[10], nomeCidade1[50], nomeCidade2[50];
        char estado1, estado2;

     // Área para entrada de dados  
        printf("Código da primeira carta: \n");
        scanf("%3s", &codigoCarta1); 

        
        printf("Código da segunda carta: \n");
        scanf("%3s", &codigoCarta2); 

        printf("Digite o Estado A01: \n");
        scanf("%3s", &estado1); 

        printf("Digite o Estado B02: \n");
        scanf("%3s", &estado2); 

     
        printf("Nome da primeira cidade: \n");
        scanf("%s", &nomeCidade1);  
        
        printf("Nome da segunda cidade: \n");
        scanf("%s", &nomeCidade2);  
     
        printf("A área da primeira cidade: \n");
        scanf("%f", &area1);   
        
        printf("A área da segunda cidade: \n");
        scanf("%f", &area2);    
     
        printf("Quantos pontos turísticos tem a primeira cidade?: \n");
        scanf("%d", &pontosTuristicos1);  
        
        printf("Quantos pontos turísticos tem a segunda cidade?: \n");
        scanf("%d", &pontosTuristicos2);  

        printf("População da primeira cidade: \n");
        scanf("%d", &populacao1);   
        
        printf("População da segunda cidade: \n");
        scanf("%d", &populacao2); 
       
        printf("O PIB da primeira cidade: \n");
        scanf("%f", &pib1); 
        
        printf("O PIB da segunda cidade: \n");
        scanf("%f", &pib2);  
     
    // Área para exibição dos dados da cidade
        printf("\n--- INFORMAÇÕES DA CIDADE ---\n");
        printf("Digite o primeiro Estado: %\n", estado1);
        printf("Código da primeira sua carta: %s\n", codigoCarta1);
        printf("Nome da primeira cidade: %s\n", nomeCidade1);
        printf("Área: %2f\n", area1);  
        printf("Pontos Turísticos: %d\n", pontosTuristicos1);
        printf("População: %d\n", populacao1);
        printf("PIB: %2f\n", pib1);

        printf("\n Codigo da segunda carta: %s\n", codigoCarta2);
        printf("Digite o primeiro Estado: %\n", estado2);
        printf("Nome da segunda cidade: %s\n", nomeCidade2);
        printf("Área: %2f\n", area2);  
        printf("Pontos Turísticos: %d\n", pontosTuristicos2);
        printf("População: %d\n", populacao2);
        printf("PIB: %2f\n", pib2);

        return 0;
     }
     

  
    


