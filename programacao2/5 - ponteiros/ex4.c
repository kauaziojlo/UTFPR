/*

4. Crie um programa que contenha um vetor de inteiros de tamanho 5.
Utilizando aritmética de ponteiros, leia os dados do teclado e exiba seus
valores multiplicado por 2. Em seguida, exiba o endereço de memória das
posições que contém valores pares.

*/

#include <stdio.h>

int main (){

    int vetor [5];
    int *ptr;

    for (int linha = 0; linha < 5; linha++){
        printf ("Vetor[%d]:\n", linha);
        scanf ("%d", &vetor[linha]);
        vetor[linha] = vetor[linha] * 2;
    } // for

    for (int linha = 0; linha < 5; linha++){
        
        printf ("Valor do Vetor[%d] x 2: %d \n", linha, vetor[linha]);
    
    } // for

    for (int linha = 0; linha < 5; linha++){
        
        if (vetor[linha] % 2 == 0){
            ptr = &vetor[linha];
            printf ("Posicao do vetor[%d] contem numero par: %p \n", linha, ptr);
        } // if
    
    } // for

    return 0;

} // main