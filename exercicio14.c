//14. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final.
#include <stdio.h>
int main()
{
    float salario1, salario2, salario3;
    printf ("informe o seu salario: ");
    scanf ("%f", &salario1);
    salario2 = salario1 * 1.15;
    printf ("o seu salario com o aumento sera de: %f\n", salario2);
    salario3 = salario2 * 0.92;
    printf ("o seu salario final sera:%f", salario3);
    return 0;
}
