//13. Construa um algoritmo para calcular a distância entre dois pontos do plano
//cartesiano. Cada ponto é um par ordenado (x,y).
#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, y1, y2, x, y, quadradox, quadradoy, soma, distancia;
    printf("Digite x1: ");
    scanf("%f", &x1);
    printf("Digite x2: ");
    scanf("%f", &x2);
    printf("Digite y1: ");
    scanf("%f", &y1);
    printf("Digite y2: ");
    scanf("%f", &y2);
    //DIFERENÇA DE X
    x = x2 - x1;
    //DIFERENÇA DE Y
    y = y2 - y1;
    quadradox = x * x;
    quadradoy = y * y;
    soma = quadradox + quadradoy;
    distancia = sqrt(soma);
    printf("A distancia e: %f", distancia);
    return 0;
}
