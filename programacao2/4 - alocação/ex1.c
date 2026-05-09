/*

1) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima

*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    int *vetor; // ponteiro para armazenar a memória na variável
    int tamanho; // tamanho serve apenas para detectar qual tamanho do vetor o usuário deseja

    printf ("Digite o tamanho do vetor: \n");
    scanf ("%d", &tamanho);

    vetor = (int*) malloc (tamanho * sizeof(int*));
    
    if (vetor == NULL){
        printf ("Erro ao alocar memoria ! \n");
        return 1;
    }

    for (int linha = 0; linha < tamanho; linha++){
        printf ("Digite o valor do vetor[%d]: \n", linha);
        scanf ("%d", &vetor[linha]);
    } // for

    for (int linha = 0; linha < tamanho; linha++){
        printf ("Valor do vetor[%d]: %d \n", linha, vetor[linha]);
    } // for

    free(vetor);

    return 0;

} // main