#include <stdio.h>
int main()
{
    float a;
    float b;
    float vazio;
    printf ("Digite um valor para A: ");
    scanf ("%f", &a);
    printf ("Digite um valor para B:");
    scanf ("%f", &b);
    vazio = a;
    a = b;
    b = vazio;
    printf ("O novo valor de A sera: %f\n", a);
    printf ("O novo valor de B sera: %f", b);
    return 0;
}
