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

    //comparando os atributos das cartas
    /*printf ("comparando as cartas:\n");
    printf ("pontos turisticos: a carta 2 venceu! %d\n", pontosTuristicos > pontosTuristicos2);
    printf ("população: a carta 2 venceu! %d\n", população > população2);
    printf ("área: a carta 1 venceu! %d\n", area > area2);
    printf ("pib: a carta 2 venceu! %d\n", pib > pib2);
    printf ("densidade populacional: a carta 1 venceu! %d\n", densidadePopulacional < densidadePopulacional2);
    printf ("pib per capita: a carta 1 venceu! %d\n", pibpercapita > pibpercapita2);
    */
    printf ("\n");

    //comparando os atributos das cartas (usando if e else)
    printf ("Comparando os atributos\n");

    if (população1 > população2){
        printf("A população de Niquelândia é maior que a população Uruaçu\n");
    }
    else {
        printf("A população de Uruaçu é maior que população Niquelândia\n");
    }

    if (area1 > area2){
        printf("A área de Niquelândia é maior que a área Uruaçu\n");
    }
    else {
        printf ("A área de Uruaçu é maior que a área de Niquelândia\n");
    }

    if (pib1 > pib2){
        printf ("O pib de Niquelândia é maior que o pib de Uruaçu\n");
    }
    else {
        printf ("O pib de Uruaçu é maior que o pib de Niquelândia\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf ("Niquelândia tem mais pontos turisticos do que Uruaçu\n");
    }
    else {
        printf ("Uruaçu tem mais pontos turisticos do que Niquelândia\n");
    }

    if (densidadePopulacional1 < densidadePopulacional2){
        printf ("A densidade populacional de Niquelândia é menor do que a densidade populacional de Uruaçu\n");
    }
    else {
        printf ("A densidade populacional de Uruaçu é menor do que a densidade populacional de Niquelândia\n");
    }

    if (pibpercapita1 > pibpercapita2){
        printf ("O pib per capita de Niquelândia é maior que o pib per capita de Uruaçu\n");
    }
    else{
        printf ("O pib per capita de Uruaçu é maior que o pib per capita de Niquelândia\n");
    }

    if (superPoder1 > superPoder2){
        printf ("O super poder de Niquelândia é maior que o super poder de Uruaçu\n");
    }
    else {
        printf ("O super poder de Uruaçu é maior que o super poder de Niquelândia\n");
    }

    printf ("\n");

    //Menu interativo para comparar atributos
    int escolha;

    printf ("### Menu interativo! ###\n");
    printf ("### Comparando atributos Uruaçu X Niquelândia ###\n");
    printf ("1. População\n");
    printf ("2. Área\n");
    printf ("3. Pib\n");
    printf ("4. Números de pontos turisticos\n");
    printf ("5. Densidade populacional\n");

    printf("\n");

    printf ("Escolha qual atributo voçê quer comparar: ");
    scanf ("%d", &escolha);

    printf ("\n");

    switch (escolha)
    {
    case 1:
        if (população1 == população2){
            printf ("empate!\n");
        } else if (população1 > população2){
            printf ("Niquelândia (carta 1 ) venceu!\n");
        } else{
            printf ("Uruaçu (carta 2) venceu!\n");
        }
        printf ("Atributo comparado: Populaçâo\n");
        printf ("população de Uruaçu (carta 2) 42546 / População de Niquelândia (Carta 1) 34964\n");
        break;

    case 2:
        if (area1 == area2){
            printf ("Empate!\n");
        } else if (area1 > area2){
            printf ("Niquelândia (carta 1 ) venceu!\n");
        } else{
            printf ("Uruaçu (carta 2) venceu!\n");
        }
        printf ("Atributo comparado: Área\n");
        printf ("Área de Uruaçu (carta 2) 2142.00 / Área de Niquelândia (Carta 1) 36895.09\n");
        break;

    case 3:
        if (pib1 == pib2){
            printf ("Empate!\n");
        } else if (pib1 > pib2){
            printf ("Niquelândia (carta 1 ) venceu!\n");
        } else{
            printf ("Uruaçu (carta 2) venceu!\n");
        }
        printf ("Atributo comparado: Pib\n");
        printf ("Pib de Uruaçu (carta 2) 1300000000 / Pib de Niquelândia (Carta 1) 36895.09\n");
        break;

    case 4:
        if (pontosTuristicos1 == pontosTuristicos2){
            printf ("Empate!\n");
        } else if (pontosTuristicos1 > pontosTuristicos2){
            printf ("Niquelândia (carta 1 ) venceu!\n");
        } else {
            printf ("Uruaçu (carta 2) venceu!\n");
        }
        printf ("Atributo comparado: Números de pontos turisticos\n");
        printf ("Números de pontos turisticos de Uruaçu (carta 2) 36 / Números de pontos turisticos de Niquelândia (Carta 1) 30\n");
        break;

    case 5:
        if ((densidadePopulacional1 = (população1 / area1)) == (densidadePopulacional2 = (população2 / area2))){
            printf ("Empate!\n");
        } else if ((densidadePopulacional1 = (população1 / area1)) < (densidadePopulacional2 = (população2 / area2))){
            printf ("Niquelândia (carta 1 ) venceu!\n");
        } else{
            printf ("Uruaçu (carta 2) venceu!\n");
        }
        printf ("Atributo comparado: Densidade populacional\n");
        printf ("Densidade populacional de Uruaçu (carta 2) 19.86 / Densidade populacional de Niquelândia (Carta 1) 3.55\n");
        break;
    
    default:
    printf ("Opção invalida. Tente novamente!\n");
        break;
    }

    printf ("\n");



    return 0;

}