#include <stdio.h>
int main(){

    float n, fat = 1 , i = 1;
    printf("Digite um numero: ");
    scanf("%f", &n);

    while(i <= n){
        fat = fat * i;
        printf("!%.f = %.3f\n", i, fat);
        i++;
    }
    return 0;
}