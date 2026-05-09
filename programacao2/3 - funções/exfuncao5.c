/*

5 - Implemente uma função em C que receba um número inteiro positivo N como 
parâmetro e retorne o seu fatorial. O fatorial de N é definido como:

N! = N × (N−1) × (N−2) × ... ×1

*/

#include <stdio.h>
#include <stdlib.h>

int Fatorial(int numero){

    int fatorial = 1;
    int contador;

    for (contador = 1; contador <= numero; contador++){

        if (contador != numero){
            printf (" %d *", contador);
        }
    
        else {
            printf ("%d", contador);
            printf ("\n");
        }

        fatorial = fatorial * contador;

    } // for

    return fatorial;

} // função

int main (){

    int numero;
    int resultado = 0;

    printf ("Digite um numero: \n");
    scanf ("%d", &numero);
    printf ("\n");

    resultado = Fatorial(numero);

    printf ("O fatorial do numero digitado eh de: %d", resultado);

    return 0;

} // main