/*

2. Crie um programa que contenha um vetor float (tamanho 10). Imprima o
endereço de cada posição desse vetor.

*/

#include <stdio.h>

int main (){

    float vetor[10];
    float *ptr;

    for (int linha = 0; linha < 10; linha++){
        ptr = &vetor[linha]; // Aponta o endereço de memória de cada posição do vetor
        printf ("Endereco de memoria Vetor[%d]: %p\n", linha, ptr);
    } // For para exibir os endereços de memória de cada posição do vetor

    return 0;

} // main