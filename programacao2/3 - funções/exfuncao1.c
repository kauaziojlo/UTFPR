/*

1- Implemente uma função em C que receba três números inteiros como parâmetros 
e retorne o maior deles. Na função main, chame essa função com diferentes valores 
de teste e exiba o resultado na tela.

*/

#include <stdio.h>
#include <stdlib.h>

int maiorValor (int valor1, int valor2, int valor3){

    int maior = valor1;

    if (valor2 > valor1){
        maior = valor2;
    
    } 
    
    if (valor3 > valor2){
        maior = valor3;
    }
    
    return maior;

} // função

int main (){
    
    int valor1, valor2, valor3;
    int maior_val;
    
    printf ("Digite o valor 1: \n");
    scanf ("%d", &valor1);

    printf ("Digite o valor 2: \n");
    scanf ("%d", &valor2);

    printf ("Digite o valor 3: \n");
    scanf ("%d", &valor3);

    maior_val = maiorValor (valor1, valor2, valor3);
    printf ("O maior valor digitado foi %d.", maior_val);

    return 0;

} // main