/*

4) Faça um programa que multiplique por 5 a
matriz A (preenchida a partir do teclado) para gerar a
matriz C.

*/

#include <stdio.h>

int main (){

    int matriz [5][5];
    int linha = 0, coluna = 0;


    // DIGITANDO VALORES DA MATRIZ
    for (linha = 0; linha < 5; linha++){
        for (coluna = 0; coluna < 5; coluna++){

            printf ("Digite o numero %d %d da matriz A \n", linha + 1, coluna + 1);
            scanf ("%d", &matriz[linha][coluna]);

            matriz[linha][coluna] = matriz[linha][coluna] * 5;
            printf ("\n");

        } // for coluna

    } // for linha

    printf ("\n");
    

    // EXIBINDO MATRIZ
    for (linha = 0; linha < 5; linha++){
        for (coluna = 0; coluna < 5; coluna++){
        
            printf ("%5i", matriz[linha][coluna]); // Exibe a Matriz
        
        } // for coluna 2
        
        printf ("\n");
    
    } // for linha 2

    return 0;

} // main