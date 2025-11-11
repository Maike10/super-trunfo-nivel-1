#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
   printf ("Super Trunfo!\n");
   printf ("\n");


   //Carta 1

   //variaveis:
    int carta1 = 1;
    int estado1 = 'a';
    int pontosTuristicos1 = 30;
    char codigo1 [10] = "a01";
    char cidade1 [20] = "niquelandia";
    double população1 = 34964;
    float area1 = 9843;
    unsigned long int pib1 = 1290000000;
    float densidadePopulacional1;
    float pibpercapita1;
    float superPoder1 = (pib1 + pontosTuristicos1 + população1 + area1) + (pib1 / população1) - (população1 / area1);

    //Calculo de densidade populacional e pib per capita
    densidadePopulacional1 = (população1 / area1);
    pibpercapita1 = (pib1 / população1);
    
    //sequencia de printfs
    printf ("carta: %d\n" , carta1);
    printf ("estado: %c\n" , estado1);
    printf ("codigo: %s\n" , codigo1);
    printf ("cidade: %s\n" , cidade1);
    printf ("população: %.0f\n" , população1);
    printf ("área: %.2f\n" , area1);
    printf ("pib: %.2f\n" , pibpercapita1);
    printf ("numeros de pontos turisticos: %d\n" , pontosTuristicos1);
    printf ("densidade populacional: %.2f\n" , densidadePopulacional1);
    printf ("pib per capita: %.2f\n" , pibpercapita1);
    printf ("super poder: %.0f\n", superPoder1);



    printf("\n");


    
    //Carta 2

    //variaveis:
    int carta2 = 2;
    int estado2 = 'b';
    int pontosTuristicos2 = 36;
    char codigo2 [10] = "a02";
    char cidade2 [20] = "uruaçu";
    double população2 = 42546;
    float area2 = 2142;
    unsigned long int pib2 = 1300000000;
    float densidadePopulacional2;
    float pibpercapita2;
    float superPoder2 = (pib2 + pontosTuristicos2 + população2 + area2) + (pib2 / população2) - (população2 / area2);

    //Calculo de densidade populacional e pib per capita
    densidadePopulacional2 = (população2 / area2);
    pibpercapita2 = (pib2 / população2);
    
    //sequencia de printfs
    printf ("carta: %d\n" , carta2);
    printf ("estado: %c\n" , estado2);
    printf ("codigo: %s\n" , codigo2);
    printf ("cidade: %s\n", cidade2);
    printf ("população: %.0f\n" , população2);
    printf ("área: %.2f\n" , area2);
    printf ("pib: %.2lu\n" , pib2);
    printf ("numeros de pontos turisticos: %d\n" , pontosTuristicos2);
    printf ("densidade populacional: %.2f\n" , densidadePopulacional2);
    printf ("pib per capita: %.2f\n" , pibpercapita2);
    printf ("super poder: %.0f\n", superPoder2);

    printf ("\n");

    //Menu interativo, declarando variáveis.
    float valor1, valor2, valor3, valor4;
    int atributo1, atributo2, atributo3, atributo4;
    float soma1, soma2;

    //Inicio do jogo!
    printf ("Bem vindo ao jogo, Super Trunfo!\n");
    printf ("\n");
    printf ("Escolha os atributos da carta 1\n");
    printf ("1. Pontos turisticos\n");
    printf ("2. População\n");
    printf ("3. Área\n");
    printf ("Primeiro atributo: ");
    scanf ("%d", &atributo1);
    printf ("Segundo atributo: ");
    scanf ("%d", &atributo2);
    printf("\n");

    printf ("Agora escolha os atributos da carta 2\n");
    printf ("1. Pontos turisticos\n");
    printf ("2. População\n");
    printf ("3. Área\n");
    printf ("Primeiro atributo: ");
    scanf ("%d", &atributo3);
    printf ("Segundo atributo: ");
    scanf ("%d", &atributo4);
    printf ("\n");
    

    if (atributo1 == atributo2){
        printf ("Voçê escolheu o mesmo atributo para a carta 1. Escolha atributos diferentes!\n");
        printf ("\n");
    } else {
    switch (atributo1)
    {
    case 1:
        printf ("Voçê escolheu as opções: 'Pontos turísticos' e ");
        (valor1 = pontosTuristicos1);
        break;

    case 2:
        printf ("Voçê escolheu as opções: 'População' e ");
        (valor1 = população1);
        break;

    case 3:
        printf ("Voçê escolheu as opções: 'Área' e ");
       (valor1 = area1);
        break;
    
    default:
    printf ("Entrada com valores inválidos para atributos da carta 1. Tente novamente!\n");
        break;
    }
    }

if (atributo1 == atributo2){

    } else {
        switch (atributo2)
    {
    case 1:
        printf ("'Pontos turísticos' para a carta 1\n");
        (valor2 = pontosTuristicos1);
        break;

    case 2:
        printf ("'População' para a carta 1\n");
        (valor2 = população1);
        break;

    case 3:
        printf ("'Área' para a carta 1\n");
        (valor2 = area1);
        break;
    
    default:
    printf ("Entrada com valores inválidos para atributos da carta 1. Tente novamente!\n");
        break;
    }
    }


    if (atributo1 == atributo2){

    } else {
    soma1 = valor1 + valor2;
    printf ("A soma dos dois atributos selecionados da carta 1 é: %.2f\n", soma1);
    printf ("\n");
    }



    if (atributo3 == atributo4){
        printf ("Voçê escolheu o mesmo atributo para a carta 2. Escolha atributos diferentes!\n");
        printf ("\n");
    } else {
    switch (atributo3)
    {
    case 1:
        printf ("Voçê escolheu as opções: 'Pontos turísticos' e ");
        (valor3 = pontosTuristicos1);
        break;

    case 2:
        printf ("Voçê escolheu as opções: 'População' e ");
        (valor3 = população1);
        break;

    case 3:
        printf ("Voçê escolheu as opções: 'Área' e ");
       (valor3 = area1);
        break;
    
    default:
    printf ("Entrada com valores inválidos para atributos da carta 1. Tente novamente!\n");
        break;
    }
    }

if (atributo3 == atributo4){

    } else {
        switch (atributo4)
    {
    case 1:
        printf ("'Pontos turísticos' para a carta 2\n");
        (valor4 = pontosTuristicos1);
        break;

    case 2:
        printf ("'População' para a carta 2\n");
        (valor4 = população1);
        break;

    case 3:
        printf ("'Área' para a carta 2\n");
        (valor4 = area1);
        break;
    
    default:
    printf ("Entrada com valores inválidos para atributos da carta 2. Tente novamente!\n");
        break;
    }
    }
    
    
    if (atributo3 == atributo4){

    } else {
    soma2 = valor3 + valor4;
    printf ("A soma dos dois atributos selecionados da carta 2 é: %.2f\n", soma2);
    printf ("\n");
    }


    soma1 > soma2 ? 1 : 0;

   if (soma1 > soma2){
        printf ("Resultado final: A carta 1 venceu!\n");
    } else if (soma1 < soma2){
        printf ("Resultado final: A carta 2 venceu!\n");
    } else {
        printf ("Resultado final: Empate!\n");
    }



    return 0;

}