#include <stdio.h>

int main (){
   printf ("Super Trunfo!\n");
   printf ("\n");


   //Carta 1

   //variaveis:
    int carta = 1;
    int estado = 'a';
    int pontosTuristicos = 30;
    char codigo [10] = "a01";
    char cidade [20] = "niquelandia";
    double população = 34964;
    float area = 9843;
    unsigned long int pib = 1290000000;
    float densidadePopulacional;
    float pibpercapita;
    float superPoder = (pib + pontosTuristicos + população + area) + (pib / população) - (população / area);

    //Calculo de densidade populacional e pib per capita
    densidadePopulacional = (população / area);
    pibpercapita = (pib / população);
    
    //sequencia de printfs
    printf ("carta: %d\n" , carta);
    printf ("estado: %c\n" , estado);
    printf ("codigo: %s\n" , codigo);
    printf ("cidade: %s\n" , cidade);
    printf ("população: %.0f\n" , população);
    printf ("área: %.2f\n" , area);
    printf ("pib: %.2lu\n" , pib);
    printf ("numeros de pontos turisticos: %d\n" , pontosTuristicos);
    printf ("densidade populacional: %.2f\n" , densidadePopulacional);
    printf ("pib per capita: %.2f\n" , pibpercapita);
    printf ("super poder: %.0f\n", superPoder);



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

    if (população > população2){
        printf("A população de Niquelândia é maior que a população Uruaçu\n");
    }
    else {
        printf("A população de Uruaçu é maior que população Niquelândia\n");
    }

    if (area > area2){
        printf("A área de Niquelândia é maior que a área Uruaçu\n");
    }
    else {
        printf ("A área de Uruaçu é maior que a área de Niquelândia\n");
    }

    if (pib > pib2){
        printf ("O pib de Niquelândia é maior que o pib de Uruaçu\n");
    }
    else {
        printf ("O pib de Uruaçu é maior que o pib de Niquelândia\n");
    }

    if (pontosTuristicos > pontosTuristicos2){
        printf ("Niquelândia tem mais pontos turisticos do que Uruaçu\n");
    }
    else {
        printf ("Uruaçu tem mais pontos turisticos do que Niquelândia\n");
    }

    if (densidadePopulacional < densidadePopulacional2){
        printf ("A densidade populacional de Niquelândia é menor do que a densidade populacional de Uruaçu\n");
    }
    else {
        printf ("A densidade populacional de Uruaçu é menor do que a densidade populacional de Niquelândia\n");
    }

    if (pibpercapita > pibpercapita2){
        printf ("O pib per capita de Niquelândia é maior que o pib per capita de Uruaçu\n");
    }
    else{
        printf ("O pib per capita de Uruaçu é maior que o pib per capita de Niquelândia\n");
    }

    if (superPoder > superPoder2){
        printf ("O super poder de Niquelândia é maior que o super poder de Uruaçu\n");
    }
    else {
        printf ("O super poder de Uruaçu é maior que o super poder de Niquelândia\n");
    }

    printf ("\n");




    return 0;

}