#include <stdio.h>
#include <string.h>

float valorItem(int numeroPedido){
  switch(numeroPedido){
    case 1:
      return 3.00;
    case 2:
      return 4.00;
    case 3:
      return 2.80;
    case 4:
      return 1.95;
    case 5:
      return 5.00;
    default:
      return -1;
  }
}

float vendaTotal(int pedido, int qtd){
  float total = qtd * valorItem(pedido);
  return total;
}

int main(){ 
    int pedido, qtd;
    int* ped = &pedido;
    int* pqtd = &qtd;
    printf("digite o numero do pedido: ");
    scanf("%d",ped);
    printf("digite a quantidade do pedido: ");
    scanf("%d",pqtd);

    printf("%.2f\n",vendaTotal(*ped, *pqtd));
  
    return 0;
}