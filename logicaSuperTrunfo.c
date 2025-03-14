#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    // variaveis das carta 1 e 2
    char estado_1[20] ,estado_2[20];
    char codigo_da_carta_1[4], codigo_da_carta_2[4];
    char nome_da_cidade_1[50], nome_da_cidade_2[50];
    unsigned long int populacao_1, populacao_2;
    float area_em_km_1, area_em_km_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int atribulto1, atribulto2;
    int resultado1, resultado2;

    
    printf("\ncarta 1: \n");

     // cadastro da carta 1 / coleta de dados
    printf("estado: ");
    scanf("%s", &estado_1);
    printf("código da carta: ");
    scanf("%s", &codigo_da_carta_1);
    printf("nome da cidade: ");
    getchar();   // limpar o buffer
    fgets(nome_da_cidade_1, 50, stdin); // usando fgets para dar espaço no nome da cidade
    nome_da_cidade_1[strcspn(nome_da_cidade_1, "\n")] = '\0'; // Remove o '\n' no final da string
    printf("populacão: ");
    scanf("%d", &populacao_1);
    printf("Área km²: ");
    scanf("%f", &area_em_km_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("números de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_1);

   
    printf("\ncarta 2: \n");

    //cadastro da carta 2 / coleta de dados
    printf("estado: ");
    scanf("%s", &estado_2);
    printf("código da carta: ");
    scanf("%s", &codigo_da_carta_2);
    printf("nome da cidade: ");
    getchar(); // para limpar o buffer 
    fgets(nome_da_cidade_2, 50, stdin); // usando fgets para dar espaço no nome da cidade
    nome_da_cidade_2[strcspn(nome_da_cidade_2, "\n")] = '\0'; // Remove o '\n' no final da string
    printf("populacão: ");
    scanf("%d", &populacao_2);
    printf("Área km²: ");
    scanf("%f", &area_em_km_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("números de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_2);


    // calculo da densidade populacional
    densidade_populacional1 = populacao_1 / area_em_km_1;
    densidade_populacional2 = populacao_2 / area_em_km_2;

    // calculo do pib per capita
    pib_per_capita1 = (pib_1 * 1000000000) / populacao_1; // multipliquei o pib pois ele nao estava dividindo pela populacao
    pib_per_capita2 = (pib_2 * 1000000000) / populacao_2;

    // calculo do super poder
    super_poder1 = (area_em_km_1 + pib_1 + pib_per_capita1 + (1 / densidade_populacional1) + pontos_turisticos_1);
    super_poder2 = (area_em_km_2 + pib_2 + pib_per_capita2 + (1 / densidade_populacional2) + pontos_turisticos_2);

    // exibindo os dados da carta 1 / saida de dados
    printf("\n---- dados da carta 1 ----\n");

    printf("\n\nestado: %s \n", estado_1);
    printf("código da carta: %s\n", codigo_da_carta_1);
    printf("nome da cidade: %s\n", nome_da_cidade_1); // fgets ja inclui \n
    printf("populão: %d\n", populacao_1);
    printf("Área km²: %.2f km²\n", area_em_km_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("número de pontos turisticos: %d\n", pontos_turisticos_1);
    printf("densidade populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capit: %.2f reais\n", pib_per_capita1);
    printf("o super poder e de %.2f", super_poder1);

    //exibindo os dados da carta 2 / saida de dados
    printf("\n---- dados da carta 2 ----\n");
    
    printf("\n\nestado: %s \n", estado_2);
    printf("código da carta: %s\n", codigo_da_carta_2);
    printf("nome da cidade: %s\n", nome_da_cidade_2); // fgets ja inclui \n
    printf("população: %d\n", populacao_2);
    printf("Área km²: %.2f km²\n", area_em_km_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("número de pontos turisticos: %d\n", pontos_turisticos_2);
    printf("densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capit: %.2f reais\n", pib_per_capita2);
    printf("o super poder e de %.2f", super_poder2);

    // escolha do primeiro atribulto
    printf("\n\n*** bem vindo ao jogo Super Trunfo! ***\n");
    printf("escolha o seu primeiro atribulto\n");
    printf("1. população\n");
    printf("2. Área km²\n");
    printf("3. PIB\n");
    printf("4. pontos turisticos\n");
    printf("5. densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. super poder\n");
    printf("digite seu primeiro atribulto: ");
    scanf("%d", &atribulto1);

    // primeiro switch comparando os atribultos
    switch (atribulto1){
    case 1:  
        printf("voçê escolheu o primeiro atribulto: população\n");
        resultado1 = populacao_1 > populacao_2 ? 1 : 0;
        break;
    case 2:
        printf("voçê escolheu o primeiro atribulto: Área km²\n");
        resultado1 = area_em_km_1 > area_em_km_2 ? 1 : 0;
        break;
    case 3:
        printf("voçê escolheu o primeiro atribulto: PIB\n");
        resultado1 = pib_1 > pib_2 ? 1: 0;
        break;
    case 4:
        printf("voçê escolheu o primeiro atribulto: pontos turisticos\n");
        resultado1 = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
        break;
    case 5:
        printf("voçê escolheu o primeiro atribulto: densidade populacional\n");
        resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        break;
    case 6:
        printf("voçê escolheu o primeiro atribulto: PIB per capita\n");
        resultado1 = pib_1 > pib_per_capita2 ? 1 : 0;
        break;
    case 7:
        printf("voçê escolheu o primeiro atribulto: super poder\n");
        resultado1 = super_poder1 > super_poder2 ? 1 : 0;
        break;
    default:
        printf("opção invalida, escolha outra\n");
        break;
}
    // escolha do segundo atribulto
    printf("escolha o seu segundo atribulto, diferenre do primeiro.\n");
    printf("1. população\n");
    printf("2. Área km²\n");
    printf("3. PIB\n");
    printf("4. pontos turisticos\n");
    printf("5. densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. super poder\n");
    printf("digite seu segundo atribulto: ");
    scanf("%d", &atribulto2);

    if (atribulto1 == atribulto2){
      printf("você ja escolheu esse atribulto\n");
    } else {
      switch (atribulto2){ // segundo switch comparando os atribultos
      case 1:  
          printf("voçê escolheu o segundo atribulto: população\n");
          resultado2 = populacao_1 > populacao_2 ? 1 : 0;
          break;
      case 2:
          printf("voçê escolheu o segundo atribulto: Área km²\n");
          resultado2 = area_em_km_1 > area_em_km_2 ? 1 : 0;
          break;
      case 3:
          printf("voçê escolheu o segundo atribulto: PIB\n");
          resultado2 = pib_1 > pib_2 ? 1: 0;
          break;
      case 4:
          printf("voçê escolheu o segundo atribulto: pontos turisticos\n");
          resultado2 = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
          break;
      case 5:
          printf("voçê escolheu o segundo atribulto: densidade populacional\n");
          resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
          break;
      case 6:
          printf("voçê escolheu o segundo atribulto: PIB per capita\n");
          resultado2 = pib_1 > pib_per_capita2 ? 1 : 0;
          break;
      case 7:
          printf("voçê escolheu o segundo atribulto: super poder\n");
          resultado2 = super_poder1 > super_poder2 ? 1 : 0;
          break;
      default:
          printf("opção invalida, escolha outra\n");
          break;
    }
    }
    // resultado dos atribultos
    if (resultado1 && resultado2){
      printf("a carta 1 (%s) venceu!\n", nome_da_cidade_1);
    } else if (resultado1 != resultado2){
      printf("as cartas empataram!\n");
    } else {
      printf("a carta 2 (%s) venceu!\n", nome_da_cidade_2);
    }

  return 0;
}