//ALUNO: EDUARDO DE SOUZA LEMOS
//Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira nota e peso 3 para a segunda nota.
#include <stdio.h>
int main()
{
    float n1, n2, media;
    printf ("Qual foi sua nota na primeira prova: ");
    scanf ("%f", &n1);
    printf ("Qual foi sua nota na segunda prova: ");
    scanf ("%f", &n2);
    n1 = n1 * 2;
    n2 = n2 * 3;
    media = (n1 + n2) / 5;
    printf ("A sua media ponderada sera: %.1f", media);
    return 0;
}
