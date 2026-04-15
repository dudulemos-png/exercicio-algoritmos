//A padaria AJB vende uma certa quantidade de pães franceses e uma quantidade de
//broa a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o
//dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto
//deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado
//para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as
//quantidades de pães e de broas, e depois calcular os dados solicitados.

#include <stdio.h>
int main()
{
    float paes, broas, arrecadado, poupanca;
    paes = 0.12;
    broas = 1,50;
    printf ("quantos paes foram vendidos: ");
    scanf ("%f", &paes);
    printf ("Quantas broas foram vendidas: ");
    scanf ("%f", &broas);
    paes = paes * 0.12;
    broas = broas * 1.50;
    arrecadado = paes + broas;
    poupanca = arrecadado * 0.10;
    printf ("o valor que voce arrecadou foi %f\n", arrecadado);
    printf ("e o valor que deve guardar em uma conta poupanca e: %f", poupanca);
    return 0;
}
