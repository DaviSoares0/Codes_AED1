#include <stdio.h>

int funcao (int a, int b){
    int result;
	if (a == 0 || b == 0) {
		return 0;
	}else if ( a == 1) {
		return b;
	}else if ( b == 1) {
		return a;
	}else {
		result = funcao(a * b, b/b);
        return result;
	}	
}
int main(){
int x1,x2;

printf("Dígite um valor para x1: ");	
scanf("%i",&x1);

printf("Dígite um valor para x2: ");	
scanf("%i",&x2);

funcao(x1,x2);
printf("\n\ny = %i",funcao(x1,x2));
	return 0;
}