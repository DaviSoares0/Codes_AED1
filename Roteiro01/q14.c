#include <stdio.h>
#include <math.h>
int main(){

    float catOp, catAdj, compHip;
    float hipotenuza(float a, float b);

    printf("Digite o valor do cateto oposto: ");
    scanf("%f", &catOp);
    printf("Digite o valor do cateto adjacente: ");
    scanf("%f", &catAdj);

    compHip = hipotenuza(catOp, catAdj);
    printf("Comprimento da hipotenuza eh: %.3f\n", compHip);
    return 0;
}

float hipotenuza(float a, float b){
    float c;
    c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}