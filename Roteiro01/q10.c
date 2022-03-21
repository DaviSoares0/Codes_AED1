#include <stdio.h>
int main(void)
{
    int numSerie, qtdTermos = 0;
    double pi,numerador, denominador, fracao, inverteSinal, calc;
    numerador = -1;
    inverteSinal = -1;

    printf("Informe a quantidade da série: ");
    scanf("%d", &numSerie);

    for(int i = 1; i <= numSerie; i++)
    {
        if(i % 2 != 0)
        {
            qtdTermos = qtdTermos + 1;
            denominador = i;
            numerador = numerador * inverteSinal;
            fracao = (numerador/denominador);
            calc = 4 * (fracao);
            pi = pi + calc;
            printf("pi = %.8f", pi);
            printf("\t N° de termos: %d\n", qtdTermos); 
        }
    }
}
