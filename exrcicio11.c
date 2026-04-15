//11. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a
//sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).

#include <stdio.h>
int main()
{
    float n1, n2, n3, calculo;
    printf ("qual foi sua primeira nota: ");
    scanf ("%f", &n1);
    printf ("qual foi sua segunda nota: ");
    scanf ("%f", &n2);
    printf ("qual foi sua terceira nota: ");
    scanf ("%f", &n3);
    n1 = n1 * 1;
    n2 = n2 * 2;
    n3 = n3 * 3;
    calculo = (n1 + n2 + n3) / 6;
    printf ("A media final ponderada sera: %f", calculo);
    return 0;
}
