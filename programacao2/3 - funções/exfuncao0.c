/*

1 - Implemente uma função em C que receba três números inteiros como parâmetros e retorne o maior deles. 
Na função main, chame essa função com diferentes valores de teste e exiba o resultado na tela.

*/

#include <stdio.h>
#include <stdlib.h>

int incrementaValor(int* valor){

    (*valor)++;
    printf ("Valor depois da funcao: %d \n", *valor);
    return 1;

} // função

int main (){

    int valor = 15;
    
    printf ("Valor antes da funcao: %d \n", valor);
    incrementaValor(&valor);

    return 0;

} // main