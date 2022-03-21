#include <stdio.h>

int funcao (int x){
int num,i, soma = 0;
	for(i = 1; i <= x; i++){
		printf("\nInforme o número %iº: ",i);
		scanf("%i",&num);
		soma += num;
	}
return printf("\nO resultado da soma dos inteiros é: %i",soma);		
}
int main(){
int n;
printf("Informe quantos números inteiros deseja somar: ");
scanf("%i",&n);
funcao(n);	
	return 0;
}