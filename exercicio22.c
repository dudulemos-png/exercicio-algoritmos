//ALUNO: EDUARDO DE SOUZA LEMOS
//21. Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses
//números.
#include <stdio.h>
int main()
{
    float n1, n2, n3, resultado;
    printf ("Digite um numero: ");
    scanf ("%f", &n1);
    printf ("Digite outro numero: ");
    scanf ("%f", &n2);
    printf ("Digite so mais um numero: ");
    scanf ("%f", &n3);
    resultado = n1 * n2 * n3;
    printf ("A multiplicacao desses tres numeros e: %.1f", resultado);
    return 0;
}
