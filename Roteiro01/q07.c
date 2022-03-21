#include <stdio.h>

void funcao(int principal){
int numero[5],i,n,m;

	   printf("Insira 5 números entre 1 e 30\n");
	   
/*um laço de repetição para ler os números inseridos*/
	for(i = 0; i <= 4; i++){
    	printf("Número %iº: ",i+1);
		scanf("%i",&numero[i]);
		
/*caso o número não esteja entre 1 e 30 terá que inserir o número novamente*/
		while(numero[i] < 1 || numero[i] > 30){
			printf("Insira novamente o número %iº: ",i+1);
			scanf("%i",&numero[i]);	
		}
    }	
/*Imprimir os asteriscos usando três laços de repetição*/
	for (i = 0; i <= 4; i++){
		for (n = 1; n <= 30; n++){
			if (n == numero[i]){
				for(m = 1; m <= n; m++){
					printf("* ");   	
				}
				printf("\n\n");	
			}	
		}
	}
} 
int main(){
	
	int Principal;
	
/*Criação da função*/
	funcao(Principal);
	return 0;
}