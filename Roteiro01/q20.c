#include<stdio.h>
int soma(int numero){
	int soma = 0;
	while (numero != 0){
		soma += numero % 10;
		numero = numero / 10;
	}
	 return soma;
}

int main(){
	int x;
	printf("digite o numero inteiro:\n");
	scanf("%d",&x);	 
	
	int recebe = soma(x);
	printf("%d\n", recebe);
	
	 
}