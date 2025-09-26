//                                        JOGO DE CARTAS SUPER TRUNFO 
#include<stdio.h>

int main() {
//                                        INFORMAÇÕES CARTA 1 

    char codigocarta1[10];
    char estadocarta1[10];
    char nomedacidade1[20];
    int populaçãocarta1;
    float areaemkmcarta1;  
    float pibcarta1;
    int numpontosturitcarta1;

 //                                       INFORMAÇÕES CARTA 2

    char codigocarta2[10];
    char estadocarta2[10];
    char nomedacidade2[20];
    int populaçãocarta2;
    float areaemkmcarta2;  
    float pibcarta2;
    int numpontosturitcarta2;

//                                        ENTRADA DE DADOS CARTA 1 




    printf("____ Digite os dados da Carta 1: ___\n");

    printf("Digite o código da carta:\n");
    scanf("%s", codigocarta1);  

    printf("Digite o estado:\n");
    scanf("%s", estadocarta1);  

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade1); 

    printf("Digite a população da cidade:\n");
    scanf("%d", &populaçãocarta1);
    

    printf("Digite a area em Km²:\n");
    scanf("%f", &areaemkmcarta1);
  
    printf("Digite o PIB:\n");
    scanf("%f", &pibcarta1);
   
    printf("Digite o numero de pontos turísticos:\n");
    scanf("%d", &numpontosturitcarta1);


    //                                      EXIBINDO DADOS PARA VERIFICAÇÃO 
    
    printf("\n___ DADOS DA CARTA 1 ___ \n");
    printf("\n");
    printf("Código: %s\n", codigocarta1);
    printf("Estado: %s\n", estadocarta1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populaçãocarta1);
    printf("Área: %.2f km²\n", areaemkmcarta1);
    printf("PIB: %.2f\n", pibcarta1);
    printf("Pontos turísticos: %d\n", numpontosturitcarta1);


    printf("\n");

 //                                              ENTRADA DE DADOS CARTA 2 
    

   printf("____ Digite os dados da Carta 2: ___\n");

   
    printf("Digite o código da carta:\n");
    scanf("%s", codigocarta2);  

    printf("Digite o estado:\n");
    scanf("%s", estadocarta2);  

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade2); 

    printf("Digite a população da cidade:\n");
    scanf("%d", &populaçãocarta2);
    

    printf("Digite a area em Km²:\n");
    scanf("%f", &areaemkmcarta2);
  
    printf("Digite o PIB:\n");
    scanf("%f", &pibcarta2);
   
    printf("Digite o numero de pontos turísticos:\n");
    scanf("%d", &numpontosturitcarta2);


//                                      EXIBINDO DADOS PARA VERIFICAÇÃO 
    
    printf("\n___ DADOS DA CARTA 2 ___ \n");
    printf("\n");
    printf("Código: %s\n", codigocarta2);
    printf("Estado: %s\n", estadocarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populaçãocarta2);
    printf("Área: %.2f km²\n", areaemkmcarta2);
    printf("PIB: %.2f\n", pibcarta2);
    printf("Pontos turísticos: %d\n", numpontosturitcarta2);


    printf("\n");  
    
    
    
    return 0;
}