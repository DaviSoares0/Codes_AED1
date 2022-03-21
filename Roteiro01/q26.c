#include <stdio.h>
int main(){

    int Ackermann(int m, int n);
    int m, n, resultado;

    printf("Informe um valor para m: ");
    scanf("%d", &m);
    printf("Informe um valor para n: ");
    scanf("%d", &n);

    resultado = Ackermann(m, n);

    printf("Resultado: %d", resultado);

    return 0;
}
int Ackermann(int m, int n){

    if(m == 0){
        return n + 1;
    }
    else if(m > 0  &&  n == 0){
       
        return Ackermann(m - 1, 1);
    }
    else if(m > 0 && n > 0){
        return Ackermann(m - 1, Ackermann(m, n- 1));
    }
}