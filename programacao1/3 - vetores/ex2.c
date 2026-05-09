/*

2) Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
retorna a soma dos elementos da sua diagonal principal e
da sua diagonal secundária.

*/

#include <stdio.h>

int main (){

    int matriz [3][3];
    int linha = 0, coluna = 0;
    int somadiag1 = 0; // Soma diagonal principal
    int somadiag2 = 0; // Soma diagonal secundária

    // DIGITAÇÃO DE NÚMEROS
    for (linha = 0; linha < 3; linha ++){
        for (coluna = 0; coluna < 3; coluna++){

            printf ("Digite o numero %d %d da matriz: \n", linha + 1, coluna + 1);
            scanf ("%d", &matriz[linha][coluna]);
            
            somadiag1 = matriz [0][0] + matriz [1][1] + matriz [2][2];
            somadiag2 = matriz [2][0] + matriz [1][1] + matriz [0][2];
            printf ("\n");


        } // for coluna

    } // for linha
    
    
    // EXIBIÇÃO
    for (linha = 0; linha < 3; linha++){
        for (coluna = 0; coluna < 3; coluna++){
        
            printf ("%3i", matriz[linha][coluna]); // Exibe a Matriz

        } // for 3.1
        
        printf ("\n");

    } // for 3.2

    printf ("\n");
    printf ("A soma da diagonal principal da matriz e:  %d \n", somadiag1);
    printf ("\n");
    printf ("A soma da diagonal secundaria da matriz e:  %d \n", somadiag2);
        
    return 0;

} // main