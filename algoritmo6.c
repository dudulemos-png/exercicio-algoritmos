#include <stdio.h>
int main()
{
    float salario;
    float porcentagem;
    float resultado1;
    float resultado2;
    printf ("Qual e o valor do seu salario: ");
    scanf ("%f", &salario);
    printf ("Qual foi a porcentagem de aumento: ");
    scanf ("%f", &porcentagem);
    resultado1 = (salario * porcentagem) / 100;
    resultado2 = salario + resultado1;
    printf ("O valor do aumento sera: %f\n", resultado1);
    printf ("E o valor do novo salario sera: %f", resultado2);
    return 0;
}
