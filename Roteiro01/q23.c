#include <stdio.h>

int funcao (int x){
	if(x == 0){
	 return x;	
	}else{
/*enquanto o x não é 0, ele vai imprimir o resto da divisão*/
	 printf("%d",x % 10);
/*o x vai assumir o valor inteiro da divisão*/
	 x = x/10;
	 return funcao(x);	
	}		
}
int main(){
int n;
printf("Informe um número qualquer e mostrarei ele invertido: ");
scanf("%i",&n);
/*recebi o valor a ser invertido e criei uma função*/
funcao(n);	
	return 0;
}