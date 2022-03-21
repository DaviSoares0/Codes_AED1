#include<stdio.h>
#include<string.h>

void imprime(int* pf){
  int contDivisores(int n);
  int i;
  printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
  for(i = 2; i < *pf; i++){
    if(contDivisores(i) == 2){
      printf("%i\n",i);
    }  
  }
  printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}
int contDivisores(int n){
  int i, cont = 0;

  for(i = 1; i < 100; i++){
    if(n % i == 0){
      cont++;
    }
  }

  return cont;
}
int main(){ 
  int f = 100;
  int* pf = &f;
  int soma = 0;
  int* psoma = &soma;
  
  imprime(pf);
  
  int i;
  for(i = 2; i < *pf; i++){
    if(contDivisores(i) == 2){
      *psoma += i;
    }  
  } 
  
  printf("soma = %d\n",soma);
  return 0;
}