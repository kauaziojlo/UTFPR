/** 

Exercício: Faça um programa com 2 variáveis, A e B, 
onde A terá o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B, AxB e A/B. 
Em seguida, faça B incrementar de uma unidade e repita as 4 operações.

**/

#include <stdio.h>
#include <stdlib.h>

int main (){

    int a = 40, b = -1;
    int soma, subtracao, multiplicacao, divisao;

    soma = a + b;
    printf ("A + B = %d\n", soma);

    subtracao = a - b;
    printf ("A - B = %d\n", subtracao);

    multiplicacao = a * b;
    printf ("A x B = %d\n", multiplicacao);

    divisao = a / b;
    printf ("A : B = %d\n", divisao);

    b++;

    printf ("\n");
    printf ("Aperte enter para incrementar B\n");
    getchar ();
    printf ("Incrementando...\n"); // b --> -1 + 1 = 0
    printf ("\n");
    
    soma = a + b;
    printf ("A + B = %d\n", soma);

    subtracao = a - b;
    printf ("A - B = %d\n", subtracao);

    multiplicacao = a * b;
    printf ("A x B = %d\n", multiplicacao);

    if (b != 0) {
        divisao = a / b;
        printf("A : B = %d\n", divisao);
    
    }else{
        printf("A : B = impossivel realizar a operacao.\n");
    } // else

    return 0;

} // main