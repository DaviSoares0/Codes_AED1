#include <stdio.h>
int main(){
int i;
printf("CONVERSÂO DA TABELA ASCII DO 0 AO 127\n");
	for (i = 0; i<= 127; i++){
	printf("%c ", i);
		if (i % 10 == 0){
		printf("\n");	
		}
	}
	return 0;
}
/*Dependendo de onde estiver rorando o código, ele pode deixar de apresentar alguns caracteres.*/