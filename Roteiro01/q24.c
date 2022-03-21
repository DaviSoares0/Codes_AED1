#include<stdio.h>

int soma( int n){
	int soma = 0;
	int i;
	for(i=0; i<=n; i++){
		soma = soma + i;
	}
	return soma;
}
 int main(void){
 	int n;
 	printf("digite o valor de n\n");
 	scanf("%d",&n);
 	int recebe = soma(n);
 	printf("%d\n",recebe );
 }