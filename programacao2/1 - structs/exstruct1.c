/*

1. Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado dois pontos e exiba a distância entre
eles. 

*/

#include <stdio.h>
#include <math.h>

typedef struct{

    float x, y;

} Ponto;


int main (){

    Ponto ponto_a, ponto_b;
    float distancia;

    printf ("Digite o valor da coordenada X do ponto A: \n");
    scanf ("%f", &ponto_a.x);
    printf ("\n")

    printf ("Digite o valor da coordenada Y do ponto A: \n");
    scanf ("%f", &ponto_a.y);
    printf ("\n")
    
    printf ("Digite o valor da coordenada X do ponto B: \n");
    scanf ("%f", &ponto_b.x);
    printf ("\n")

    printf ("Digite o valor da coordenada Y do ponto B: \n");
    scanf ("%f", &ponto_b.y);
    printf ("\n")
    
    distancia = pow((ponto_b.x - ponto_a.x), 2) + pow((ponto_b.y - ponto_a.y), 2);
    distancia = sqrt (distancia);

    printf ("A distancia entre os pontos A e B eh de %.1f\n", distancia);

    return 0;

} // main