/*

1) Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado dois pontos e exiba a distância entre
eles. 

*/

#include <stdio.h>
#include <math.h>

typedef struct {
        
    float x, y;
        
} Ponto;


int main (){

    Ponto ponto_a, ponto_b;
    float distancia = 0;

    printf ("X do ponto A: \n");
    scanf ("%f", &ponto_a.x);
    
    printf ("Y do ponto A: \n");
    scanf ("%f", &ponto_a.y);

    printf ("X do ponto B: \n");
    scanf ("%f", &ponto_b.x);

    printf ("Y do ponto B: \n");
    scanf ("%f", &ponto_b.y);

    distancia = pow((ponto_b.x - ponto_a.x), 2) + pow((ponto_b.y - ponto_a.y), 2);
    distancia = sqrt (distancia);

    printf ("Distancia entre A e B: %.1f \n", distancia);
    return 0;

} // main