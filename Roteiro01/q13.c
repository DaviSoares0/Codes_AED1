#include <stdio.h>
/*Respondido com base no calculo de Chistian Zeller*/ 

int main(){

    int dia, mes, ano;

    printf("Informe a data atual:\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    if(mes < 3){
        mes += 12;
        ano -= 1;
    }

    int k = ano % 100;
    int j = ano / 100;

    int zeller = (dia + (((mes + 1) * 26) / 10) + k + (k/4) + (j/4) + (5 * j) ) % 7;

    int h = zeller;

    switch (h)
    {
    case 0:
        printf("Sabado");
        break;
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terca-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
    
    default:
        break;
    }
}