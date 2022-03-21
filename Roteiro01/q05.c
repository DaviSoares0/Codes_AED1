#include <stdio.h>

void funcao (int x){
int num,i, soma = 0,somadosquadrados = 0,somadoscubos = 0;
	for(i = 1; i <= x; i++){
		soma += i;
		somadosquadrados += (i*i);
		somadoscubos += (i*i*i);
	}
printf("\nO resultado da soma é: %i",soma);		
printf("\nO resultado da soma dos quadrados é: %i",somadosquadrados);
printf("\nO resultado da soma dos cubos é: %i",somadoscubos);
}
int main(){
int n;
printf("Nesse programa vou fazer a soma, a soma dos quadrados e a soma dos cubos do número 1 até o número que você vai informar");
printf("\nInforme até qual número você quer: ");
scanf("%i",&n);
funcao(n);	
	return 0;
}