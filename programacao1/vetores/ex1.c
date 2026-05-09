/*

1) Crie uma matriz identidade com dimensões 5 x 5

*/

#include <stdio.h>

int main (){

    int matriz [5][5];
    int linha = 0, coluna = 0;

    for (linha = 0; linha < 5; linha ++){
        for (coluna = 0; coluna < 5; coluna++){

            if (linha == coluna){
                matriz [linha][coluna] = 1;
            } else {
                matriz[linha][coluna] = 0;
            }

        } // for coluna
    
    } // for linha

    for (linha = 0; linha < 5; linha++){
        for (coluna = 0; coluna < 5; coluna++){
        
            printf ("%5i", matriz[linha][coluna]); // Exibe a Matriz
        
        } // for coluna 2
        
        printf ("\n");
    
    } // for linha 2

    return 0;

} // main