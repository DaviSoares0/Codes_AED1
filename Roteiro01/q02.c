#include <stdio.h>
int main(){

    float graus, fahrenheit;
    graus = 30;

    printf("Celsius");
    printf(" Fahrenheit\n");

    for(int i = 0; i <= 20; i++){
        fahrenheit = (graus * 1.8 ) + 32;
        printf("%.2f", graus);
        printf("  = ");
        printf(" %.2f\n", fahrenheit);
        graus += 1;
    }

    return 0;
}