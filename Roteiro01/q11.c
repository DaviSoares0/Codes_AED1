#include <stdio.h>
#include <math.h>
void funcao (int x){
int cateto1,cateto2,hipotenusa;
/*usei três laços de repetição para achar o cateto adjacente, cateto oposto e a hipotenusa*/	
	for (cateto1 = 1; cateto1 <= x; cateto1++){
		for (cateto2 = 1; cateto2 <= x; cateto2++){
			for (hipotenusa = 1; hipotenusa <=x; hipotenusa++){
			    if(pow(cateto1,2) + (pow(cateto2,2)) == (pow(hipotenusa,2))){
				   printf("\n%i² + %i² = %d²\n",cateto1,cateto2,hipotenusa);	
				}  	
			}
		}
	}
}

int main(){
    int n;
/*recebi o número como parâmetro e criei uma função*/
	printf("Insira um número como parâmetro e mostrarei todos os triplos pitagóricos\n");
	printf("Informe o número: ");
	scanf("%i",&n);
	funcao(n);	
	return 0;
}