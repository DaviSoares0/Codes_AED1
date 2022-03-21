#include <stdio.h>
#include <math.h>
int main(){

    int calcRaiz(int a, int b, int c);
    int a, b, c;

    printf("Informe os coeficientes da função:\n");
    printf("a: ");
    scanf("%d", &a);
    if(a == 0){
        printf("Não é uma função do segundo grau\n");
    }else{
        printf("b: ");
        scanf("%d", &b);
        printf("c: ");
        scanf("%d", &c);
        calcRaiz(a, b, c);
    } 
    return 0;
}

int calcRaiz(int a, int b, int c){

    int delta = pow(b,2)-(4*(a*c));

    if(delta < 0){
    printf("A funcao nao tem raizes reais\n");
    }else{
        int x1 = (- b + sqrt(delta)) / 2 * a;
        int x2 = ( -b - sqrt(delta)) / 2 * a;
        printf("X\' = %d\n", x1);
        printf("x2\" = %d\n", x2);

    }
}