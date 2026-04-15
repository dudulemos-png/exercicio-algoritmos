#include <stdio.h>
int main()
{
    float largura;
    float comprimento;
    float area;
    printf ("Informe a largura do seu terreno: ");
    scanf ("%f", &largura);
    printf ("Informe agora o comprimento: ");
    scanf ("%f", &comprimento);
    area = largura * comprimento;
    printf ("A area total do seu terreno sera: %f", area);
    return 0;
}
