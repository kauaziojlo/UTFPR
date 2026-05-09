#include <stdio.h>

int main (){

    int N = 50; // Tamanho do vetor 
    int x[N]; // Declara o vetor com tamanho N 
    
    printf("\n O conteudo do vetor: \n");
    for (int linha = 0; linha < N; linha++){
        printf("%i ", x[linha]);
    } // for

    return 0;

} // main