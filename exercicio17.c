//A empresa AJB paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de umdeterminado funcionário. Considere que o salário líquido é igual ao salário brutodescontando-se 10% de impostos.
#include <stdio.h>
int main()
{
 float imposto, bruto, liquido, normais, extra;
 printf ("quantas horas normais o funcionario trabalhou: ");
 scanf ("%f",&normais);
 printf ("e quantas horas extras: ");
 scanf ("%f", &extra);
 bruto = normais * 10 + extra * 15;
 imposto = bruto * 0.10;
 liquido = bruto - imposto;
 printf ("seu salario liquido sera de: %.2f", liquido);
 return 0;
}
