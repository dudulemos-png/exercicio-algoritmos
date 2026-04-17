//16. Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um algoritmo para ler uma temperatura Celsius e imprimí-Ia em Fahrenheit
//(pesquise como fazer este tipo de conversão).
#include <stdio.h>
int main()
{
    float celcius, fahrenheit;
    printf ("Informe a temperatura em celcius: ");
    scanf ("%f", &celcius);
    fahrenheit = celcius * 1.8 + 32;
    printf ("essa temperatura em fahrenheit sera de: %f", fahrenheit);
    return 0;
}
