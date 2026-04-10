#include <stdio.h>
int main()
{
    float distancia;
    float tempo;
    printf ("Digite um valor para representar a distancia: \n");
    scanf ("%f", &distancia);
    printf ("Digite um numero para representar o tempo: \n");
    scanf ("%f", &tempo);
    float resultado;
    resultado = distancia / tempo;
    printf ("a velocidade media é: %f", resultado);
    return 0;
}
