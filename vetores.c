#include <stdio.h>
int main()
{
    int num[15],i;
    for (i=0; i<15; i++)
    {
       printf ("posicao %d do vetor: ", i);
       scanf ("%d", &num[i]);
    }
    printf("\nVetor na ordem invertida:\n");

    for (i = 14; i >= 0; i--)

    {

            printf ("\n elemento %d na posicao %d",i, num [i]);

    }
    return 0;
}
