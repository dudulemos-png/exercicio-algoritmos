//A granja galinha feliz possui um controle automatizado de cada frango da sua
//produção. No pé direito do frango há um anel com um chip de identificação; no pé
//esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo
//que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo
//para calcular o gasto total da granja para marcar todos os seus frangos.
#include <stdio.h>
int main()
{
    float frango, gasto;
    printf ("Qual a quantidade de frangos da granja: ");
    scanf ("%f", &frango);
    gasto = frango * 11;
    printf ("o gasto total da granja sera de: %f", gasto);
    return 0;
}
