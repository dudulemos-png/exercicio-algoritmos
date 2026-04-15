//12. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma
//sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o
//usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a
//uma venda, e a máquina informe quanto será o valor arrecadado.
#include <stdio.h>
int main()
{
    int pequena, media, grande, total;
    printf ("qual a quantidade de camisetas pequenas: ");
    scanf ("%d", &pequena);
    printf ("qual a quantidade de camisetas medias: ");
    scanf ("%d", &media);
    printf ("Qual a quantidade de camisetas medias: ");
    scanf ("%d", &grande);
    pequena = pequena * 10;
    media = media * 12;
    grande = grande * 15;
    total = pequena + media + grande;
    printf ("o valor arrecadado seria: %d", total);
    return 0;
}
