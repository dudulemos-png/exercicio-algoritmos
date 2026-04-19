//19. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é
//suficientemente longa. Assumindo que seja possível medir sua sombra e a do prédio no
//chão, e que você lembre da sua altura, faça um algoritmo para ler os dados necessários
//e calcular a altura do prédio.
#include <stdio.h>
int main()
{
    float altura, sombra, predio, resultado;
    printf ("Digite sua altura: ");
    scanf ("%f", &altura);
    printf ("Digite sua altura da sombra no chao: ");
    scanf ("%f", &sombra);
    printf ("Digite tambem quanto mede a sombra do predio: ");
    scanf ("%f", &predio);
    altura = altura * predio;
    resultado = altura / sombra;
    printf ("O predio teria %.1f metros de altura", resultado);
    return 0;
}
