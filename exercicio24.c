//ALUNO: EDUARDO DE SOUZA LEMOS
//Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
#include <stdio.h>
int main()
{
    float kg, gr;
    printf ("Qual o seu peso: ");
    scanf ("%f", &kg);
    gr = kg * 1000;
    printf ("O seu peso em gramas vai ser: %.1f", gr);
    return 0;
}
