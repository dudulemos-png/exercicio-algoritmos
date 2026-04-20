//Calcule o volume de uma caixa d'água cilíndrica
#include <stdio.h>
#include <math.h>
int main()
{
    float raio, altura, volume, capacidade;
    printf ("Qual o raio da caixa: ");
    scanf ("%f", &raio);
    printf ("Qaul a altura da caixa: ");
    scanf ("%f", &altura);
    volume = 3.14 * raio * raio * altura;
    capacidade = volume * 1000;
    printf ("o volume da caixa e: %.1f", capacidade);
    return 0;
}
