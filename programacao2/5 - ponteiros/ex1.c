/*

1. Escreva um programa que contenha duas variáveis inteiras. Compare os
endereços e exiba o endereço e o conteúdo do maior endereço.

*/

#include <stdio.h>

int main (){

    int var1 = 5, var2 = 10;
    int *ptr1, *ptr2;
    
    ptr1 = &var1;
    ptr2 = &var2;

    // Comparação entre os ponteiros das variáveis
    if (ptr1 < ptr2){
        printf ("Conteudo que ptr2 aponta = %d\n", *ptr2);
        printf ("Endereco de memoria de ptr2 = %p\n", ptr2);
    } // if
    
    else {
        printf ("Conteudo que ptr1 aponta = %d \n", *ptr1);
        printf ("Endereco de memoria de ptr1 = %p \n", ptr1);
    } // else

    return 0;

} // main