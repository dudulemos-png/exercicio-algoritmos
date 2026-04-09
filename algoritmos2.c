#include <stdio.h>
int main()
{
    float valor;
    printf("digite um valor: ");
    scanf("%f", &valor);
    float resultado;
    resultado = valor * 2;
    printf("o dobro desse valor é: %f", resultado);
    return 0;
}
