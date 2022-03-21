#include <stdio.h>
int main(){
    /*Declaração das variaveis e funções*/
    char escolha;
    void menuA();
    void menuB();
    void menuC();
    void menuD();


    printf("--------------------------DIGITE------------------------------\n");
    printf("a -> para calcular o Maximo divisor comum entre dois inteiros\n");
    printf("b -> Fatorial de um numero real\n");
    printf("c -> A  serie de fibonacci\n");
    printf("d -> Verificar se o numero inserido e natural e primo\n");
    scanf("%c",&escolha); /*Armazena a escolha do usuario*/


    /*Chama o menu correspondente a cada ação escolhida pelo usuario*/
    switch (escolha)
    {
    case 'a':
        menuA();
        break;
    case 'b':
        menuB();
        break;
    case 'c':
        menuC();
    case 'd':
        menuD();
    default:
        break;
    }
    return 0;
}

void menuA(){
    int a, b, result;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite outro numero: ");
    scanf("%d", &b);
    int Mdc(int a, int b);
    result = Mdc(a, b);
    printf("MDC  = %d\n", result);
}
void menuB(){
    int n, result;
    int fatorial(int n);
    printf("Informe um numero: ");
    scanf("%d", &n);
    result = fatorial(n);
    printf("!%d = %d",n, result);
}
void menuC(){
    int f, result;
    int fibonacci(int f);
    printf("Informe um numeo: ");
    scanf("%d", &f);    
    result = fibonacci(f);
    printf("%d", result);
    
}
void menuD(){
    int num, result;
    int isPrime(int x);
    printf("Informe um numero: ");
    scanf("%d", &num);
    isPrime(num);
  
}

int Mdc(int a, int b){  
    if(a % b != 0){
        return Mdc(b, a % b);
    }else{
        return b;
    }
}

int fatorial (int n){
  int resultado;  
  if ( n <= 1 )
    return (1);
  else
  {
    resultado = n * fatorial(n- 1);
    return (resultado);
  }
}

int fibonacci(int f){
    if (f == 0){
        return 0;
    }else if( f == 1){
        return 1;
    }else{
        return fibonacci(f-1) + fibonacci(f-2);
    }
}

int cont = 0, i = 0;
int isPrime(int x) {
	if (i <= x) {
		i++;
		if (x % i == 0) {
			printf("%i, é divisor\n",i);
			cont++;	
		}
		return isPrime(x);
	}
	if (cont == 2) {
		return printf("\n%i é um número natural primo\n\n", x);
	}else {
		return printf("\n%i não é um número primo\n\n", x);
	}
}

    
