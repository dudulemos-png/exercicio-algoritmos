//ALUNO: EDUARDO DE SOUZA LEMOS
// Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
#include <stdio.h>
#include <math.h>
int main()
{
    float cateto1, cateto2, hipotenusa, calculo;
    printf ("Quanto mede um cateto desse triangulo: ");
    scanf ("%f", &cateto1);
    printf ("Quanto mede o outro cateto desse triangulo: ");
    scanf ("%f", &cateto2);
    calculo = (cateto1 * cateto1) + (cateto2 * cateto2);
    hipotenusa = sqrt(calculo);
    printf ("A hipotenusa desse triangulo e: %f", hipotenusa);
    return 0;
}
