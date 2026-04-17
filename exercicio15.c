//Calcule a área de uma pizza que possui um raio R (pi=3.14)
#include <stdio.h>
int main()
{
    float raio, calculo;
    printf ("informe o valor do R: ");
    scanf ("%f", &raio);
    calculo = raio * raio * 3.14;
    printf ("a area da pizza sera de:%.1f", calculo);
    return 0;
}
