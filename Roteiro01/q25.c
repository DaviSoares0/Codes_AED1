#include <stdio.h>

int main(){
   int m, n, resultado;
   int f_m_n(int m, int n);

   printf("Informe o falor de M: ");
   scanf("%d", &m);
   printf("Informe o valor de N: ");
   scanf("%d", &n);

   resultado = f_m_n(m, n);
 
   printf("Resultado = %d\n", resultado);
    
}

int f_m_n(int m, int n){

     int resultado;

     if(n == 1){
        resultado = m + 1;
     }
     else if(m == 1){
        resultado = n + 1;
     }
     else if(m > 1 && n > 1){

        resultado = f_m_n(m, n-1) + f_m_n(m - 1, n);
     }
     return resultado;
}