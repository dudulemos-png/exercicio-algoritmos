#include <stdio.h>
int main()
{
    float base;
    float altura;
    printf ("Digite um numero para representar a base desse triangulo: ");
    scanf ("%f", &base);
    printf ("Digite um numero para representar a altura desse triangulo: ");
    scanf ("%f", &altura);
    float resultado;
    resultado = (base * altura) / 2;
    printf ("O valor da area desse tringulo e: %f", resultado);
    return 0;
}
