#include <stdio.h>
int multiplo(int n){
	int resultado = 0;
/*Laço de repetição para achar os multiplos de 7*/
	   for( n = 1; n <= 100; n++){
		   if ( n % 7 == 0){
/*Imprimir os multiplos*/
           printf("%i, ",n);
           resultado += n;
		   }
	   }	
/*Imprimir a soma dos multiplos*/
	printf("\n\nResultado da soma: %i\n\n",resultado);
	return 0;
}
int main(){
	int x;
/*Função criada*/
	multiplo(x);
	return 0;
}
