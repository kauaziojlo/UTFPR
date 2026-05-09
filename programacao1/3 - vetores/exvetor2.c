/*

2) Faça um código para verificar as posições de memória
ocupada pelo vetor.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int N;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &N);

    int *vetor = (int *)malloc(N * sizeof(int)); // Aloca o vetor

    if (vetor == NULL){
        printf("Erro na alocação de memória! \n");
        return 1;
    } // if

    for (int linha = 0; linha < N; linha++){
        vetor[linha] = N - linha;
    } // for 1

    
    printf ("\n")
    printf("Conteúdo do vetor e suas posições de memória: \n");
    
    for (int linha = 0; linha < N; linha++){
        
        printf("Posição %d: Valor = %d | Endereço = %p \n", linha, vetor[linha], (void*)&vetor[linha]);
    
    } // for 2

    free(vetor); // Libera memória alocada no vetor

    return 0;

} // main