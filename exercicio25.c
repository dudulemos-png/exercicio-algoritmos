//ALUNO: EDUARDO DE SOUZA LEMOS
//Faça um algoritmo que calcule e mostre a área de um trapézio.
#include <stdio.h>
int main()
{
    float basemenor, basemaior, altura, area;
    printf ("Qual seria o valor da base maior desse trapezio: ");
    scanf ("%f", &basemaior);
    printf ("Qual seria o valor da base menor: ");
    scanf ("%f", &basemenor);
    printf ("Para fazer esse calculo vamos precisar da altura desse trapezio tambem: ");
    scanf ("%f", &altura);
    area = (basemaior + basemenor) * altura / 2;
    printf ("A area desse trapezio seria: %.1f", area);
    return 0;
}
