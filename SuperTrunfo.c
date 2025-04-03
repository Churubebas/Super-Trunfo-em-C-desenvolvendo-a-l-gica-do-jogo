#include<stdio.h> 
#include<string.h> //inclusão para facilitar a utilizacao do fgets.


int main(){
    char estado1[3], estado2[3];
    char codigo1[6], codigo2[6];
    char nome1[100], nome2[100];
    char* compa;
    int populacao1, populacao2, pontos1, pontos2, menu, repe=1, comparacao, selecao1, selecao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2, superpoder1, superpoder2, soma1, soma2;
    //todos as variaveis do programa.

     while (repe==1)//loop "infinito", para facilitar a utilizacao do programa.
     {
          
        printf("#>#># Bem Vindo ao Jogo Super Trunfo #<#<#\n");
        printf("\t>>> MENU <<<\n");
        printf("\t1. Cadastrar Cartas\n");
        printf("\t2. Comparacao Simples\n");
        printf("\t3. Comparacao Dinamica\n");
        printf("\t4. Sair\n");
        scanf("%d", &menu);
        fflush(stdin);
        //menu principal
        switch(menu)
        {
        case 1://cadastro das duas cartas
            printf("Cadastre a Primeira Carta:\n");

            printf("Insira a abreviacao do Estado: Ex. RR (Roraima) \n");
                scanf("%s", &estado1);
                fflush(stdin);
          
            printf("Insira o Codigo do Estado, ex. Abreviacao(RR) e o DDD(095): \"RR095\" \n");
                scanf("%s", &codigo1);
                    fgetc(stdin);
                                            
            printf("Insira o nome da Cidade:\n");
                fgets(nome1, 100, stdin);
                nome1[strlen(nome1)-1] = '\0';
                fflush(stdin);
                                   
            printf("Insira a Populacao:\n");
                scanf("%d", &populacao1);
                fflush(stdin);
              
            printf("Insira a Area da cidade em Km2\n");
                scanf("%f", &area1);
                fflush(stdin);
                      
            printf("Insira o PIB:\n");
                scanf("%f", &pib1);
                fflush(stdin);
                    
            printf("Insira o numero de pontos turristicos:\n");
                scanf("%d", &pontos1);
                fflush(stdin);
             
                printf("Cadastre Segunda Carta\n");

                printf("Insira a abreviacao do Estado:\n");
                    scanf("%s", &estado2);
                    fflush(stdin);
          
                printf("Insira o Codigo do Estado\n");
                    scanf("%s", &codigo2);
                    fgetc(stdin);
            
                printf("Insira o nome da Cidade:\n");
                    fgets(nome2, 100, stdin);
                    nome2[strlen(nome2)-1] = '\0';
                    fflush(stdin);
                      
                printf("Insira a Populacao:\n");
                    scanf("%d", &populacao2);
                    fflush(stdin);
          
                printf("Insira a Area da cidade em Km2\n");
                    scanf("%f", &area2);
                    fflush(stdin);
        
                printf("Insira o PIB:\n");
                    scanf("%f", &pib2);
                    fflush(stdin);
       
                printf("Insira o numero de pontos turristicos:\n");
                    scanf("%d", &pontos2);
                    fflush(stdin);
       //calculos para densidade demografica, PIB percapita e super poder das cartas.
        densidade1 = (float)(populacao1 / area1);
        densidade2 = (float)(populacao2 / area2);
        percapita1 = (float)(pib1 / populacao1);
        percapita2 = (float)(pib2 / populacao2);
        superpoder1 = (float)(populacao1+area1+pib1+pontos1+densidade1+percapita1);
        superpoder2 = (float)(populacao2+area2+pib2+pontos2+densidade2+percapita2);
        //impressao das cartas cadastradas.
        puts("\n");
        printf("Carta 1\n");

        printf("Estado: %s\n", estado1);

        printf("Codigo: %s\n", codigo1);

        printf("Nome da Cidade: %s\n", nome1);

        printf("Populacao: %d\n", populacao1);

        printf("Area: %.2f, em km2\n", area1);

        printf("Densidade Demografica: %.2f\n", densidade1);

        printf("PIB: %.2f de Reais\n", pib1);

        printf("PIB per capita: %.2f\n", percapita1);

        printf("Numero de pontos Turisticos: %d\n", pontos1);

        printf("SUPER PODER! = %.2f\n", superpoder1);

        puts("\n");
        printf("Carta 2\n");

        printf("Estado: %s\n", estado2);

        printf("Codigo: %s\n", codigo2);

        printf("Nome da Cidade: %s\n", nome2);

        printf("Populacao: %d\n", populacao2);

        printf("Area: %.2f, em km2\n", area2);

        printf("Densidade Demografica: %.2f\n", densidade2);

        printf("PIB: %.2f Bilhoes de Reais\n", pib2);

        printf("PIB per capita: %.2f\n", percapita2);

        printf("Numero de pontos Turisticos: %d\n", pontos2);

        printf("SUPER PODER! = %.2f\n\n", superpoder2);

        
            break;
        
        case 2://comparacao simples das cartas cadastradas(apenas 1 atributo), contendo o empate.

            printf(">>>Qual Atributo voce gostaria de comparar?<<<\n");
            printf("\t1. Populacao\n");
            printf("\t2. Area\n");
            printf("\t3. Densidade Demografica\n");
            printf("\t4. Pib\n");
            printf("\t5. Pib Per Capita\n");
            printf("\t6. Pontos Turristicos\n");
            printf("\t7. *SUPER PODER*\n");
            scanf("%d", &comparacao);
            fgetc(stdin);
            switch (comparacao)
            {
                case 1:

                if (populacao1==populacao2)
        {printf("Populacao Empatada\n");
        }else{compa = (populacao1>populacao2)? "Carta 1 Ganha na Populacao\n" : "Carta 2 Ganha na Populacao\n";
                printf("%s", compa);     
        };break;

                case 2:

                if (area1==area2)
        {printf("Area Empatada\n");
        }else{compa = (area1>area2)? "Carta 1 Ganha na Area\n" : "Carta 2 Ganha na Area\n";
                printf("%s", compa);            
        }break;

                case 3:

            if (densidade1==densidade2)
        {printf("Densidade Demografica Empatada\n");
        }else{compa = (densidade1<densidade2)? "Carta 1 Ganha na Densidade Demografica\n" : "Carta 2 Ganha na Densidade Demografica\n";//logica diferente, pois o menor ganha.
                printf("%s", compa);            
        }break;

                case 4:

            if (pib1==pib2)
        {printf("Pib Empatado\n");
        }else{compa = (pib1>pib2)? "Carta 1 Ganha no PIB\n" : "Carta 2 Ganha no PIB\n";
                printf("%s", compa);            
        }break;

                case 5:

            if (percapita1==percapita2)
        {printf("PIB per Capita Empatado\n");
        }else{compa = (percapita1>percapita2)? "Carta 1 Ganha no PIB Per Capita\n" : "Carta 2 Ganha no PIB Per Capita\n";
                printf("%s", compa);            
        }break;

                case 6:

            if (pontos1==pontos2)
        {printf("Pontos Turristicos Empatado\n");
        }else{compa = (pontos1>pontos2)? "Carta 1 Ganha nos Pontos Turristicos\n" : "Carta 2 Ganha nos Pontos Turristicos\n";
                printf("%s", compa);            
        }break;

                case 7:

            if (superpoder1==superpoder2)
        {printf("Super Poder Empatado!\n");
        }else{compa = (superpoder1>superpoder2)? "Carta 1 Ganha no SUPER PODER!\n" : "Carta 2 Ganha no SUPER PODER\n";
                printf("%s", compa);            
        }break;
        
            default:
                break;}
        break;    

        case 3://comparacao dinamica, com menu interativo e dinamico, sendo dois atributos e apagando a primeira selecao de atributo.(fim na linha 1630).
               //so vi que nao tinha nescecidade do menu interativo e dinamico apos ja ter codado :(
            
            printf(">>>Qual o primeiro Atributo voce quer comparar?<<<\n");
            printf("\t1. Populacao\n");
            printf("\t2. Area\n");
            printf("\t3. Densidade Demografica\n");
            printf("\t4. Pib\n");
            printf("\t5. Pib Per Capita\n");
            printf("\t6. Pontos Turristicos\n");
            printf("\t7. *SUPER PODER*\n");
            scanf("%d", &selecao1);
            fflush(stdin);

            if (selecao1==1)
            {
                printf(">>>Qual o segundo atributo voce quer comparar?<<<\n");
                printf("\t2. Area\n");
                printf("\t3. Densidade Demografica\n");
                printf("\t4. Pib\n");
                printf("\t5. Pib Per Capita\n");
                printf("\t6. Pontos Turristicos\n");
                printf("\t7. *SUPER PODER*\n");
                scanf("%d", &selecao2);
                fflush(stdin);

                switch (selecao2)
                {
                case 2:
                if (populacao1>populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                }else if (populacao1<populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome2, populacao2);
                }else if (populacao1 == populacao2){
                    printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}

                if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }
                soma1 = (float)populacao1+area1;
                soma2 = (float)populacao2+area2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }
                                     
                break;

                case 3:
                if (populacao1>populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                }else if (populacao1<populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome2, populacao2);
                }else if (populacao1 == populacao2){
                    printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}

                if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }

                soma1 = (float)populacao1+densidade1;
                soma2 = (float)populacao2+densidade2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }                                
                 break; 
                 
                case 4:
                 if (populacao1>populacao2){
                     printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                 }else if (populacao1<populacao2){
                     printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao2);
                 }else if (populacao1 == populacao2){
                     printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}
 
                 if (pib1>pib2){
                     printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                 }else if (pib1<pib2){
                     printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                 }else if (pib1 == pib2){
                     printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                 }
 
                 soma1 = (float)populacao1+pib1;
                 soma2 = (float)populacao2+pib2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 5:
                 if (populacao1>populacao2){
                     printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                 }else if (populacao1<populacao2){
                     printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao2);
                 }else if (populacao1 == populacao2){
                     printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}
 
                 if (percapita1>percapita2){
                     printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                 }else if (percapita1<percapita2){
                     printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                 }else if (percapita1 == percapita2){
                     printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                 }
 
                 soma1 = (float)populacao1+percapita1;
                 soma2 = (float)populacao2+percapita2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 6:
                 if (populacao1>populacao2){
                     printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                 }else if (populacao1<populacao2){
                     printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao2);
                 }else if (populacao1 == populacao2){
                     printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}
 
                 if (pontos1>pontos2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                 }else if (pontos1<pontos2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                 }else if (pontos1 == pontos2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                 }
 
                 soma1 = (float)populacao1+pontos1;
                 soma2 = (float)populacao2+pontos2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 7:
                 if (populacao1>populacao2){
                     printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                 }else if (populacao1<populacao2){
                     printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao2);
                 }else if (populacao1 == populacao2){
                     printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}
 
                 if (superpoder1>superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                 }else if (superpoder1<superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                 }else if (superpoder1 == superpoder2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                 }
 
                 soma1 = (float)populacao1+superpoder1;
                 soma2 = (float)populacao2+superpoder2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;
                  default:
                  printf("Invalido!");
                  break;

            }}else if (selecao1==2)
            {
                printf(">>>Qual o segundo atributo voce quer comparar?<<<\n");
                printf("\t1. Populacao\n");
                printf("\t3. Densidade Demografica\n");
                printf("\t4. Pib\n");
                printf("\t5. Pib Per Capita\n");
                printf("\t6. Pontos Turristicos\n");
                printf("\t7. *SUPER PODER*\n");
                scanf("%d", &selecao2);
                fflush(stdin);

                switch (selecao2)
                {
                case 1:
                if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }
                if (populacao1>populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                }else if (populacao1<populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome2, populacao2);
                }else if (populacao1 == populacao2){
                    printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}
                
                soma1 = (float)populacao1+area1;
                soma2 = (float)populacao2+area2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }
                                     
                break;

                case 3:
                if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }

                if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }

                soma1 = (float)area1+densidade1;
                soma2 = (float)area2+densidade2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }                                
                 break; 
                 
                case 4:
                 if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }
 
                 if (pib1>pib2){
                     printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                 }else if (pib1<pib2){
                     printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                 }else if (pib1 == pib2){
                     printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                 }
 
                 soma1 = (float)area1+pib1;
                 soma2 = (float)area2+pib2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 5:
                  if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }
 
                 if (percapita1>percapita2){
                     printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                 }else if (percapita1<percapita2){
                     printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                 }else if (percapita1 == percapita2){
                     printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                 }
 
                 soma1 = (float)area1+percapita1;
                 soma2 = (float)area2+percapita2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 6:
                  if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }
 
                 if (pontos1>pontos2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                 }else if (pontos1<pontos2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                 }else if (pontos1 == pontos2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                 }
 
                 soma1 = (float)area1+pontos1;
                 soma2 = (float)area2+pontos2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 7:
                  if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }
 
                 if (superpoder1>superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                 }else if (superpoder1<superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                 }else if (superpoder1 == superpoder2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                 }
 
                 soma1 = (float)area1+superpoder1;
                 soma2 = (float)area2+superpoder2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;
                  default:
                  printf("Invalido!");
                  break;

            }}else if (selecao1==3)
            {
                printf(">>>Qual o segundo atributo voce quer comparar?<<<\n");
                printf("\t1. Populacao\n");
                printf("\t2. Area\n");
                printf("\t4. Pib\n");
                printf("\t. Pib Per Capita\n");
                printf("\t6. Pontos Turristicos\n");
                printf("\t7. *SUPER PODER*\n");
                scanf("%d", &selecao2);
                fflush(stdin);

                switch (selecao2)
                {
                case 1:
                if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }
                if (populacao1>populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                }else if (populacao1<populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome2, populacao2);
                }else if (populacao1 == populacao2){
                    printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}
                
                soma1 = (float)populacao1+densidade1;
                soma2 = (float)populacao2+densidade2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }
                                     
                break;

                case 2:
                if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }
                if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }

                soma1 = (float)area1+densidade1;
                soma2 = (float)area2+densidade2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }                                
                 break; 
                 
                case 4:
                 if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }
 
                 if (pib1>pib2){
                     printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                 }else if (pib1<pib2){
                     printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                 }else if (pib1 == pib2){
                     printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                 }
 
                 soma1 = (float)densidade1+pib1;
                 soma2 = (float)densidade2+pib2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 5:
                  if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }
 
                 if (percapita1>percapita2){
                     printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                 }else if (percapita1<percapita2){
                     printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                 }else if (percapita1 == percapita2){
                     printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                 }
 
                 soma1 = (float)densidade1+percapita1;
                 soma2 = (float)densidade2+percapita2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 6:
                  if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }
 
                 if (pontos1>pontos2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                 }else if (pontos1<pontos2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                 }else if (pontos1 == pontos2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                 }
 
                 soma1 = (float)densidade1+pontos1;
                 soma2 = (float)densidade1+pontos2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 7:
                  if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }
 
                 if (superpoder1>superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                 }else if (superpoder1<superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                 }else if (superpoder1 == superpoder2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                 }
 
                 soma1 = (float)densidade1+superpoder1;
                 soma2 = (float)densidade2+superpoder2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;
                  default:
                  printf("Invalido!");
                  break;

            }
            }else if (selecao1==4)
            {
                printf(">>>Qual o segundo atributo voce quer comparar?<<<\n");
                printf("\t1. Populacao\n");
                printf("\t2. Area\n");
                printf("\t3. Densidade Demografica\n");
                printf("\t5. Pib Per Capita\n");
                printf("\t6. Pontos Turristicos\n");
                printf("\t7. *SUPER PODER*\n");
                scanf("%d", &selecao2);
                fflush(stdin);

                switch (selecao2)
                {
                case 1:
                if (pib1>pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                }else if (pib1<pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                }else if (pib1 == pib2){
                    printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                }
                if (populacao1>populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                }else if (populacao1<populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome2, populacao2);
                }else if (populacao1 == populacao2){
                    printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}
                
                soma1 = (float)populacao1+pib1;
                soma2 = (float)populacao2+pib2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }
                                     
                break;

                case 2:
                    if (pib1>pib2){
                        printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                    }else if (pib1<pib2){
                        printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                    }else if (pib1 == pib2){
                        printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                    }
                if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }

                soma1 = (float)area1+pib1;
                soma2 = (float)area2+pib2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }                                
                 break; 
                 
                case 3:
                 if (pib1>pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                }else if (pib1<pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                }else if (pib1 == pib2){
                    printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                }
                 if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }
                   
                 soma1 = (float)densidade1+pib1;
                 soma2 = (float)densidade2+pib2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 5:
                  if (pib1>pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                }else if (pib1<pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                }else if (pib1 == pib2){
                    printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                }
 
                 if (percapita1>percapita2){
                     printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                 }else if (percapita1<percapita2){
                     printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                 }else if (percapita1 == percapita2){
                     printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                 }
 
                 soma1 = (float)pib1+percapita1;
                 soma2 = (float)pib2+percapita2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 6:
                  if (pib1>pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                }else if (pib1<pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                }else if (pib1 == pib2){
                    printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                }
                 if (pontos1>pontos2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                 }else if (pontos1<pontos2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                 }else if (pontos1 == pontos2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                 }
 
                 soma1 = (float)pib1+pontos1;
                 soma2 = (float)pib2+pontos2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 7:
                  if (pib1>pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                }else if (pib1<pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                }else if (pib1 == pib2){
                    printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                }
 
                 if (superpoder1>superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                 }else if (superpoder1<superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                 }else if (superpoder1 == superpoder2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                 }
 
                 soma1 = (float)pib1+superpoder1;
                 soma2 = (float)pib2+superpoder2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;
                  default:
                  printf("Invalido!");
                  break;

            }
            }else if (selecao1==5)
            {
                printf(">>>Qual o segundo atributo voce quer comparar?<<<\n");
                printf("\t1. Populacao\n");
                printf("\t2. Area\n");
                printf("\t3. Densidade Demografica\n");
                printf("\t4. Pib\n");
                printf("\t6. Pontos Turristicos\n");
                printf("\t7. *SUPER PODER*\n");
                scanf("%d", &selecao2);
                fflush(stdin);

                switch (selecao2)
                {
                case 1:
                if (percapita1>percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                }else if (percapita1<percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                }else if (percapita1 == percapita2){
                    printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                }
                if (populacao1>populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                }else if (populacao1<populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome2, populacao2);
                }else if (populacao1 == populacao2){
                    printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}
                
                soma1 = (float)populacao1+percapita1;
                soma2 = (float)populacao2+percapita2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }
                                     
                break;

                case 2:
                    if (percapita1>percapita2){
                        printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                    }else if (percapita1<percapita2){
                        printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                    }else if (percapita1 == percapita2){
                        printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                    }
                if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }

                soma1 = (float)area1+percapita1;
                soma2 = (float)area2+percapita2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }                                
                 break; 
                 
                case 3:
                 if (percapita1>percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                }else if (percapita1<percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                }else if (percapita1 == percapita2){
                    printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                }
                 if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }
                   
                 soma1 = (float)densidade1+percapita1;
                 soma2 = (float)densidade2+percapita2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 4:
                  if (percapita1>percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                }else if (percapita1<percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                }else if (percapita1 == percapita2){
                    printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                }
                  if (pib1>pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                }else if (pib1<pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                }else if (pib1 == pib2){
                    printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                }
                  
                 soma1 = (float)pib1+percapita1;
                 soma2 = (float)pib2+percapita2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 6:
                  if (percapita1>percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                }else if (percapita1<percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                }else if (percapita1 == percapita2){
                    printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                }
                 if (pontos1>pontos2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                 }else if (pontos1<pontos2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                 }else if (pontos1 == pontos2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                 }
 
                 soma1 = (float)percapita1+pontos1;
                 soma2 = (float)percapita2+pontos2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 7:
                  if (percapita1>percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                }else if (percapita1<percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                }else if (percapita1 == percapita2){
                    printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                }
 
                 if (superpoder1>superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                 }else if (superpoder1<superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                 }else if (superpoder1 == superpoder2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                 }
 
                 soma1 = (float)percapita1+superpoder1;
                 soma2 = (float)percapita2+superpoder2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;
                  default:
                  printf("Invalido!");
                  break;

            }
            }else if (selecao1==6)
            {
                printf(">>>Qual o segundo atributo voce quer comparar?<<<\n");
                printf("\t1. Populacao\n");
                printf("\t2. Area\n");
                printf("\t3. Densidade Demografica\n");
                printf("\t4. Pib\n");
                printf("\t5. Pib Per Capita\n");
                printf("\t7. *SUPER PODER*\n");
                scanf("%d", &selecao2);
                fflush(stdin);

                switch (selecao2)
                {
                case 1:
                if (pontos1>pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                }else if (pontos1<pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                }else if (pontos1 == pontos2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                }
                if (populacao1>populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                }else if (populacao1<populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome2, populacao2);
                }else if (populacao1 == populacao2){
                    printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}
                
                soma1 = (float)populacao1+pontos1;
                soma2 = (float)populacao2+pontos2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }
                                     
                break;

                case 2:
                    if (pontos1>pontos2){
                        printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                    }else if (pontos1<pontos2){
                        printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                    }else if (pontos1 == pontos2){
                        printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                    }
                if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }

                soma1 = (float)area1+pontos1;
                soma2 = (float)area2+pontos2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }                                
                 break; 
                 
                case 3:
                 if (pontos1>pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                }else if (pontos1<pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                }else if (pontos1 == pontos2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                }
                 if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }
                   
                 soma1 = (float)densidade1+pontos1;
                 soma2 = (float)densidade2+pontos2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 4:
                  if (pontos1>pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                }else if (pontos1<pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                }else if (pontos1 == pontos2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                }
                  if (pib1>pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                }else if (pib1<pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                }else if (pib1 == pib2){
                    printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                }
                  
                 soma1 = (float)pib1+pontos1;
                 soma2 = (float)pib2+pontos2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 5:
                  if (pontos1>pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                }else if (pontos1<pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                }else if (pontos1 == pontos2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                }
                  if (percapita1>percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                }else if (percapita1<percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                }else if (percapita1 == percapita2){
                    printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                }
                 
 
                 soma1 = (float)percapita1+pontos1;
                 soma2 = (float)percapita2+pontos2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 7:
                  if (pontos1>pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                }else if (pontos1<pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                }else if (pontos1 == pontos2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                }
 
                 if (superpoder1>superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                 }else if (superpoder1<superpoder2){
                     printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                 }else if (superpoder1 == superpoder2){
                     printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                 }
 
                 soma1 = (float)pontos1+superpoder1;
                 soma2 = (float)pontos2+superpoder2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;
                  
                  default:
                  printf("Invalido!");
                  break;

            }
            }else if (selecao1==7)
            {
                printf(">>>Qual o segundo atributo voce quer comparar?<<<\n");
                printf("\t1. Populacao\n");
                printf("\t2. Area\n");
                printf("\t3. Densidade Demografica\n");
                printf("\t4. Pib\n");
                printf("\t5. Pib Per Capita\n");
                printf("\t6. Pontos Turristicos\n");
                scanf("%d", &selecao2);
                fflush(stdin);

                switch (selecao2)
                {
                case 1:
                if (superpoder1>superpoder2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                }else if (superpoder1<superpoder2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                }else if (superpoder1 == superpoder2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                }
                if (populacao1>populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome1, populacao1);
                }else if (populacao1<populacao2){
                    printf("Carta %s Venceu na Populacao com %d\n", nome2, populacao2);
                }else if (populacao1 == populacao2){
                    printf("Carta %s e %s empataram na populacao com %d\n", nome1,nome2, populacao1);}
                
                soma1 = (float)populacao1+superpoder1;
                soma2 = (float)populacao2+superpoder2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }
                                     
                break;

                case 2:
                    if (superpoder1>superpoder2){
                        printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                    }else if (superpoder1<superpoder2){
                        printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                    }else if (superpoder1 == superpoder2){
                        printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                    }
                if (area1>area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome1, area1);
                }else if (area1<area2){
                    printf("Carta %s Venceu na Area com %.2f\n", nome2, area2);
                }else if (area1 == area2){
                    printf("Carta %s e %s empataram na Area com %.2f\n", nome1,nome2, area1);
                }

                soma1 = (float)area1+superpoder1;
                soma2 = (float)area2+superpoder2;

                if (soma1>soma2){
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }else if (soma1<soma2)
                {
                    printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                }else if (soma1==soma2)
                {
                    printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                }                                
                 break; 
                 
                case 3:
                 if (superpoder1>superpoder2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                }else if (superpoder1<superpoder2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                }else if (superpoder1 == superpoder2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                }
                 if (densidade1>densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome1, densidade1);
                }else if (densidade1<densidade2){
                    printf("Carta %s Venceu na Densidade Demografica com %.2f\n", nome2, densidade2);
                }else if (densidade1 == densidade2){
                    printf("Carta %s e %s empataram na Densidade Demografica com %.2f\n", nome1,nome2, densidade1);
                }
                   
                 soma1 = (float)densidade1+superpoder1;
                 soma2 = (float)densidade2+superpoder2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 4:
                  if (superpoder1>superpoder2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                }else if (superpoder1<superpoder2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                }else if (superpoder1 == superpoder2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                }
                  if (pib1>pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome1, pib1);
                }else if (pib1<pib2){
                    printf("Carta %s Venceu no PIB com %.2f\n", nome2, pib2);
                }else if (pib1 == pib2){
                    printf("Carta %s e %s empataram no PIB com %.2f\n", nome1,nome2, pib1);
                }
                  
                 soma1 = (float)pib1+superpoder1;
                 soma2 = (float)pib2+superpoder2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                case 5:
                  if (superpoder1>superpoder2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                }else if (superpoder1<superpoder2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                }else if (superpoder1 == superpoder2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                }
                  if (percapita1>percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome1, percapita1);
                }else if (percapita1<percapita2){
                    printf("Carta %s Venceu no PIB per capita com %.2f\n", nome2, percapita2);
                }else if (percapita1 == percapita2){
                    printf("Carta %s e %s empataram no PIB per capita com %.2f\n", nome1,nome2, percapita1);
                }
                 
 
                 soma1 = (float)percapita1+superpoder1;
                 soma2 = (float)percapita2+superpoder2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;
                  

                case 6:
                  if (superpoder1>superpoder2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, superpoder1);
                }else if (superpoder1<superpoder2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, superpoder2);
                }else if (superpoder1 == superpoder2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, superpoder1);
                }
 
                if (pontos1>pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome1, pontos1);
                }else if (pontos1<pontos2){
                    printf("Carta %s Venceu nos Pontos Turristicos com %.2f\n", nome2, pontos2);
                }else if (pontos1 == pontos2){
                    printf("Carta %s e %s empataram nos Pontos Turristicos com %.2f\n", nome1,nome2, pontos1);
                }
 
                 soma1 = (float)pontos1+superpoder1;
                 soma2 = (float)pontos2+superpoder2;
 
                 if (soma1>soma2){
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }else if (soma1<soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim ganhando da carta %s que e: %.2f\n\n", nome2, soma2, nome1, soma1);
                 }else if (soma1==soma2)
                 {
                     printf("A soma da carta %s e: %.2f assim empatando com a soma da carta %s que e: %.2f\n\n", nome1, soma1, nome2, soma2);
                 }                                
                  break;

                  default:
                  printf("Invalido!");
                  break;

            }
          break;
            }
        break;   
        case 4:// opcao de saida do programa com a quebra do loop infinito.
           
        repe++;
        printf(">#>#>#> SUPER TRUNFO Finalizado. <#<#<#<");

                  
        default:
            break;
        }

     }}
               

