#include <stdio.h>

int main () {
int i;
    for ( i = 1; i <= 100; i++) {
        int numero = i;
        char *romanos[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C"};
        int arabicos[] = {1, 4, 5, 9, 10, 40, 50, 90, 100};
        // acha a quantidade de elementos no array
        int indice = (sizeof(arabicos) / sizeof(arabicos[0])) - 1;
        while (numero > 0) {
            if (numero >= arabicos[indice]) {
                printf("%s", romanos[indice]);
                numero -= arabicos[indice];
            } else {
                indice--;
            }
        }
        printf("\n");
    }
return 0;
}