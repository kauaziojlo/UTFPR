/*
Faça um programa para verificar se a pessoa é adulto, adolescente ou criança.
*/


#include <stdio.h>
#include <stdlib.h>

int main (){

    int idade = 0;

    printf ("===== VERIFICADOR DE IDADE =====\n"); // TÍTULO
    printf ("\n");
    printf ("Aperte enter para começar a verificacao...\n");
    getchar ();

    printf ("Digite sua idade:\n");
    scanf ("%i", &idade);

    if (idade >= 18){ // Se maior/igual a 18 anos...
        printf ("\n");
        printf ("Voce eh maior de idade.  :) \n");
    
    } else {
        if (idade >= 12 && idade < 18){ // Senão se maior/igual a 12 anos & menor que 18 anos...
            printf ("\n");
            printf ("Voce eh adolescente.  :/ \n");
        
        } else {
            if (idade < 12){ // Senão se menor que 12 anos...
            printf ("\n");
            printf ("Voce eh crianca.  :( \n");

            } // if 2
        
        } // else interno
    
    } // else externo

    return 0;

}