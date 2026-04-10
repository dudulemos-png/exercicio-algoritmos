#include <stdio.h>
int main()
{
    float distancia;
    float consumo;
    float gasolina;
    float resultado;
    printf ("Qual sera o valor da sua distancia percorrida na viagem em km: ");
    scanf ("%f", &distancia);
    printf ("Qual foi o valor do comsumo do carro em km: ");
    scanf ("%f", &consumo);
    printf ("Qual o valor da gasolina: ");
    scanf ("%f", &gasolina);
    resultado = (distancia / consumo) * gasolina;
    printf ("O valor com combustivel a ser gasto nessa viagem e: %f", resultado);
    return 0;
}
