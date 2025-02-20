#include <stdio.h>

int main (){

    //variaveis
    char estado, nome_cidade[40], codigo_carta[30];
    int populacao, pontos_turisticos;
    float area, pib, pib_per, dens_pop, superpoder;

    //recebimento de dados
    printf("PRIMEIRA CARTA\n");
    printf("\nEstado (de A à H):\n");
    scanf("%c", &estado);
    printf("Codígo da cidade: \n");
    scanf("%s", &codigo_carta);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade);
    printf("Digite sua população: \n");
    scanf("%d", &populacao);
    printf("Digite sua área: \n");
    scanf("%f", &area);
    printf("Digite seu PIB: \n");
    scanf("%f", &pib);
    printf("Digite seus pontos turistícos: \n");
    scanf("%d", &pontos_turisticos);

    //operaçoes
    //populacao base foi feita para equilibrar o superpoder ja que definiria muito os seus pontos por ser milhões.
    pib_per = (float) populacao / pib;
    dens_pop = (float) populacao / area;
    int populacao_base = populacao / 10000;
    superpoder = populacao_base + -dens_pop + pontos_turisticos + pib + pib_per + area;

    //entrega de informações
    
    printf("\nCódigo dessa Carta: %s\n", codigo_carta);
    printf("Nome: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Densidadad Populacioanl: %.2f\n", dens_pop);
    printf("Área: %.2f em km²\n", area);
    printf("PIB: %.2f em bilhões de reais\n", pib);
    printf("PIB per Capita: %.2f\n", pib_per);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("\nO poder da sua cidade = %.0f\n", superpoder);

    //segunda carta

    //variaveis2
    char estado1;
    char codigo_carta1[40], nome_cidade1[40];
    int populacao1, pontos_turisticos1;
    float area1, pib1, pib_per1, dens_pop1, superpoder1;

    //recebimento de dados2
    printf("\nSEGUNDA CARTA:\n");
    printf("\nEstado (de A à H):\n");
    scanf(" %c", &estado1);
    printf("Código da cidade: \n");
    scanf("%s", &codigo_carta1);
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_cidade1);
    printf("Digite sua população: \n");
    scanf("%d", &populacao1);
    printf("Digite sua área: \n");
    scanf("%f", &area1);
    printf("Digite seu PIB: \n");
    scanf("%f", &pib1);
    printf("Digite seus pontos turistícos: \n");
    scanf("%d", &pontos_turisticos1);

    //operaçoes
    //populacao base foi feita para equilibrar o superpoder ja que definiria muito os seus pontos por ser milhões.
    pib_per1 = (float) populacao1 / pib1;
    dens_pop1 = (float) populacao1 / area1;
    int populacao_base1 = populacao1 / 10000;
    superpoder1 = populacao_base1 + -dens_pop1 + pontos_turisticos1 + pib1 + pib_per1 + area1;

    //entrega de informações
    
    printf("\nCódigo da Primeira Carta: %s\n", codigo_carta);
    printf("Nome: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Densidadad Populacioanl: %.2f\n", dens_pop);
    printf("Área: %.2f em km²\n", area);
    printf("PIB: %.2f em bilhões de reais\n", pib);
    printf("PIB per Capita: %.2f\n", pib_per);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("\nO poder da sua cidade = %.0f\n", superpoder);
    
    printf("\nCódigo da Segunda Carta: %c%s\n", estado1);
    printf("Nome: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Densidadad Populacioanl: %.2f\n", dens_pop1);
    printf("Área: %.2f em km²\n", area1);
    printf("PIB: %.2f em bilhões de reais\n", pib1);
    printf("PIB per Capita: %.2f\n", pib_per1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("\nO poder da sua cidade = %.0f\n", superpoder1);

    //comparação
    printf("\nCOMPARAÇÃO\n");
    printf("Maior população: %d");

    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", populacao > populacao1 ? 1 : 2, populacao > populacao1);
    printf("Área: Carta %d venceu (%d)\n", area > area1 ? 1 : 2, area > area1);
    printf("PIB: Carta %d venceu (%d)\n", pib > pib1 ? 1 : 2, pib > pib1);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos_turisticos > pontos_turisticos1 ? 1 : 2, pontos_turisticos > pontos_turisticos1);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", dens_pop < dens_pop1 ? 1 : 2, dens_pop < dens_pop1);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_per > pib_per1 ? 1 : 2, pib_per > pib_per1);
    printf("Super Poder: Carta %d venceu (%d)\n", superpoder > superpoder1 ? 1 : 2, superpoder > superpoder1);

    printf("\nFINALIZADO\n");

    return 0;

}