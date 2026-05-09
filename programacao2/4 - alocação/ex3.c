/*

3) Digite uma variável n para armazenar o tamanho de vetores de A e B, depois chame uma função
que retorne o ponteiro de c, o qual deve ser alocado dinamicamente. Depois imprima o vetor C
na função main.

C[linha] = A[linha] * B[linha]

*/

#include <stdio.h>
#include <stdlib.h>

int* produto_vetores (int *a, int *b, int n){

    int *c;

    c = (int*) malloc (n * sizeof (int));
    
    if (c == NULL){
        printf ("Erro ao alocar memoria !\n");
        return NULL;
        exit(1);
    } // if

    for (int linha = 0; linha < n; linha++){
        c[linha] = a[linha] * b[linha];
    } // for

    return c;

} // funcao

int main (){
    
    int *a, *b, *c;
    int n;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    // Aloca os vetores A e B
    a = (int*) malloc(n * sizeof(int));
    b = (int*) malloc(n * sizeof(int));

    if (a == NULL || b == NULL){
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    // Preencher o vetor A
    for (int linha = 0; linha < n; linha++){
        printf("Digite A[%d]: ", linha);
        scanf("%d", &a[linha]);
    }

    // Preencher o vetor B
    for (int linha = 0; linha < n; linha++){
        printf("Digite B[%d]: ", linha);
        scanf("%d", &b[linha]);
    }

    // Chamar a função para calcular C
    c = funcao(a, b, n);

    // Mostrar vetor C
    printf("Resultado C = A * B: \n");
        
    for (int linha = 0; linha < n; linha++){
        printf("C[%d] = %d\n", linha, c[linha]);
    }

    // Liberar memória
    free(a);
    free(b);
    free(c);

    return 0;

} // main