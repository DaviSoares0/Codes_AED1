#include <stdio.h>

void isPerfect(int *num ){
        int x = 0;
        int aux;
        
        /*laço faz a comparacao se os fatores menores que num, apartir do 1, são divisores de *num*/
        for(int i = 1; i < *num; i++){   
            if(*num % i == 0){ 
                x += i; 
                aux = i;
            }
        }
        if(x == *num){
            printf("A soma dos fatores: ");
            for(int i = 1; i <=aux; i++){
                printf("%d,",i);
            }
             printf(" = %d que eh um numero perfeiro\n", *num);
        }  

}

int main(){
    int *num, numero;

    /*AQUI PASSA O NUMERO DIGITADO PELO USUARIO COMO PARAMETRO PARA FUNCAO*/
    /*
    printf("Informe um valor: ");
    scanf("%d",&numero);
    num = &numero;
    isPerfect(num);
    /*

    /*Aqui o laço passa o valor de i a cada incremento de 1 a 1000 para a função isPerfect(), que verifica e imprime se o numero for perfeito*/
    for(int i = 1; i <= 1000; i ++){
        num = &i;
        isPerfect(num);

    }
    
    return 0;
}