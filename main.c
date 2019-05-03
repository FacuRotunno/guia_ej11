#include <stdio.h>

void main() {

    float cel;
    float kel = 273.15;

    printf("Ingrese un valor Celsius: ");
    scanf ("%f", &cel);

    printf("El valor en kelvin es: %f", cel + kel);
}