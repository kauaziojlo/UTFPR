/*

2) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
igual a zero, um ponteiro nulo deverá ser retornado.

*/

#include <stdio.h>
#include <stdlib.h>

int* retornaPonteiro(int n){

    int *ptr;
    
    if (n <= 0){
        return NULL;
    }

    ptr = (int*) malloc (n * sizeof (int));
    
    if (ptr == NULL){
        printf ("Erro ao alocar memoria ! \n");
    } // if

    return ptr;

} // função

int main (){

    int n, *vetor;
    
    printf ("Digite um valor inteiro para n: \n");
    scanf ("%d", &n);

    vetor = retornaPonteiro(n);

    if (vetor == NULL){
        return NULL;
    }
    
    for (int linha = 0; linha < n; linha++){
        printf("Vetor[%d]: %d\n", linha, vetor[linha]);
    }

    free (vetor);

    return 0;

} // main