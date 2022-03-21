#include <stdio.h>
#include <stdlib.h>

void funcao(int Linha, int Coluna){
int c,l;
/*uso dois laços de repetição para imprimir o retângulo sólido de asteriscos*/
	for (l = 1; l <= Linha; l++){
		for(c = 1; c <= Coluna; c++){
		printf("* ");	
		}
	printf("\n");   	   
    }
printf("\n");		
}
int main(){	
int Lado1,Lado2;

printf("Para fazer o rêtangulo com asteriscos preciso que informe quantas linhas e colunas que vai querer.\n\n");
/*recebo o total de linhas e colunas*/

printf("Informe o total de linhas: ");
scanf("%i",&Lado1);	

printf("Informe o total de colunas: ");
scanf("%i",&Lado2);

/*caso o número de linha e coluna forem iguais peço para que o usuario repita já que se forem iguais serão um quadrado e não um retângulo*/
	while(Lado1 == Lado2){
	system("clear");
	   	printf("Esqueci de informar, o número de colunas não pode ser igual ao número de linhas\n\n");
	   	
	   	printf("Informe o total de linhas: ");
		scanf("%i",&Lado1);	

		printf("Informe o total de colunas: ");
		scanf("%i",&Lado2);
	}
	printf("\n");
	/*crio a função com as duas informações*/
		funcao(Lado1,Lado2);
	return 0;
}