/*

3. Crie um programa que contenha uma matriz (3x3) de float. Imprima o
endereço de cada posição dessa matriz.

*/

#include <stdio.h>

int main (){

    float matriz [3][3];
    float *ptr;

    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            ptr = &matriz[linha][coluna];
            printf ("Endereco de memoria da posicao [%d][%d] da matriz = %p\n", linha, coluna, ptr);
        } // coluna
    } // linha
    
    return 0;

} // main