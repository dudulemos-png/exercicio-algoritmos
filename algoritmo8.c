#include <stdio.h>
int main ()
{
    int saque;
    int cedula10;
    int cedula5;
    int cedula1;
    int resto1;
    int resto2;
    printf ("Qual o valor do saque: ");
    scanf ("%d", &saque);
    cedula10 = saque / 10;
    resto1 = saque % 10;
    cedula5 = resto1 / 5;
    resto2 = resto1 % 5;
    cedula1 = resto2;
    printf ("cedulas de 10: %d\n", cedula10);
    printf ("cedulas de 5: %d\n", cedula5);
    printf ("cedulas de 1: %d\n", cedula1);
    return 0;
}
