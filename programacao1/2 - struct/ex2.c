/*

2) Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida,
declare e leia do teclado dois pontos e exiba a distância
entre eles.

srqt() – retorna a raiz quadrada e
pow() – retorna a potência de um número.
Ambos são encontrados na biblioteca math.h (#include math.h)

*/

#include <stdio.h>
#include <math.h>

typedef struct {
    
    float x;
    float y;

} Ponto;

int main() {
    
    Ponto pontoA, pontoB;
    float distancia;

    // PONTO A
    printf("Digite a coordenada X do ponto A: ");
    scanf("%f", &pontoA.x);

    printf("Digite a coordenada Y do ponto A: ");
    scanf("%f", &pontoA.y);

    // PONTO B
    printf("Digite a coordenada X do ponto B: ");
    scanf("%f", &pontoB.x);

    printf("Digite a coordenada Y do ponto B: ");
    scanf("%f", &pontoB.y);

    // Cálculo da distância entre os pontos A e B
    distancia = sqrt(pow(pontoB.x - pontoA.x, 2) + pow(pontoB.y - pontoA.y, 2));

    // Exibe o resultado
    printf ("\n");
    printf("A distancia entre os pontos A e B é: %.2f\n", distancia);

    return 0;
}