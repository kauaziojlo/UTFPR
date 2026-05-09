/*

4- Escreva uma função em C que receba a média final de um aluno (número real) como 
parâmetro e retorne seu conceito de acordo com a seguinte escala:

Média entre 9 e 10: Conceito A
Média entre 7 e 8.9: Conceito B
Média entre 5 e 6.9: Conceito C
Média entre 0 e 4.9: Conceito D

Na função main, solicite ao usuário que informe a média final, chame a função e 
exiba o conceito correspondente.

*/

#include <stdio.h>
#include <stdlib.h>

float funcaoConceito (float mediaF){

    if (mediaF >= 9 || mediaF == 10){

        printf ("Conceito A \n");

    }

    else if (mediaF >= 7 || mediaF == 8.9){

        printf ("Conceito B \n");

    }

    else if (mediaF >= 5 || mediaF == 6.9){

        printf ("Conceito C \n");

    }
    
    else if (mediaF >= 0 || mediaF == 4.9){

        printf ("Conceito D \n");

    }

    return 1;

} // função


int main (){

    float mediaF;

    printf ("Media do aluno: \n");
    scanf ("%f", &mediaF);

    funcaoConceito(mediaF);

    return 0;

} // main