#include <stdio.h>
int main(){
    void menu();
    menu();

}
/*Função pega os tempos inseridos pelo usuáriose passa para a função tempo e depois apresenta o resultado*/
void menu(){

    float tempo(float h, float m, float s, float h2, float m2, float s2); /*Declração da função tempo*/
    float hora, minutos, segundos, hora2, minutos2, segundos2;
    float resultado;

    printf("Informe o primeiro tempo:\n");
    printf("Digite a hora: ");
    scanf("%f", &hora);
    printf("Digite os minutos: ");
    scanf("%f", &minutos);
    printf("Digite os segundos: ");
    scanf("%f", &segundos);
    printf("Informe o segundo tempo\n");
    printf("Digite a hora: ");
    scanf("%f", &hora2);
    printf("Digite os minutos: ");
    scanf("%f", &minutos2);
    printf("Digite os segundos: ");
    scanf("%f", &segundos2);

    resultado = tempo(hora, minutos, segundos, hora2, minutos2, segundos2);/*passando os parâmetros para a função tempo. e resultado recebe o valor que a função retorna.*/
    printf("Quantidade de tempo em segundos entre os dois tempos = %f .Aproximadamente %.2f horas\n", resultado, resultado/3600);
}

//* A função recebe os valores digitados pelo usuário como parâmetro. Depois converte os valores da horas e minutos para segundos*/
float tempo(float h, float m, float s, float h2, float m2, float s2){
    float tempo1 = (h * 3600) + (m * 60) + s; /*soma todas as horas convertidas para segundos do tempo 1*/
    float tempo2 = (h2 * 3600) + (m2 * 60) + s2; /* soma todas as horas convertidas para segundos do tempo 2*/
    float result = (tempo2 - tempo1); /*calcula o numero de sengudos entre o tempo 1 e o tempo 2.*/
    return result;
}