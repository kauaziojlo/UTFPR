/*

4) Escreva uma função que receba como parâmetro um valor L e um valor C e retorne
o ponteiro para uma matriz alocada dinamicamente contendo L linhas e C colunas.
Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.

*/

#include <stdio.h>
#include <stdlib.h>

int** preencheMatriz(int l, int c){

    int** matriz;

    for (int linha = 0; linha < l; linha++){
        
        matriz = malloc(l * sizeof(int*));

        matriz[linha] = (int*) malloc (c * sizeof(int));
        
        if (matriz[c] == NULL){
        printf ("Erro ao alocar memoria !\n");
        return NULL;
        }
    }

    for (int linha = 0; linha < l; linha++){
        for (int coluna = 0; coluna < c; coluna++){    
            matriz[linha][coluna] = 0;
        }
    }

    return matriz;

} // funcao


int main (){

    int l, c;
    int** matriz;

    printf ("Linhas da matriz: \n");
    scanf ("%d", &l);

    printf ("Colunas da matriz: \n");
    scanf ("%d", &c);

    matriz = preencheMatriz (l, c);

    for (int linha = 0; linha < l; linha++){
        for (int coluna = 0; coluna < c; coluna++){
            printf ("Matriz[%d][%d]: %d \n", linha, coluna, matriz[linha][coluna]);
        }
    }

    for (int linha = 0; linha < l; linha++){
        free (matriz[linha]);
    }
    
    free (matriz);
    return 0;

} // main