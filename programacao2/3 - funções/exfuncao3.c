/*

Implemente uma função em C que receba, via parâmetro, 
três notas de um aluno (valores reais) e um caractere 
indicando o tipo de cálculo a ser realizado:

'A' → Média aritmética das três notas.

'P' → Média ponderada, considerando os pesos: 5 para a 
primeira nota, 3 para a segunda e 2 para a terceira.

'S' → Soma das três notas.

A função deve retornar o valor calculado. Na função main, 
solicite ao usuário as três notas e a letra correspondente à 
operação desejada, chame a função e exiba o resultado na tela.

*/

#include <stdio.h>
#include <stdlib.h>

float Funcao (float nota1, float nota2, float nota3, char opcao){
    
    float valor, media;

    if (opcao == 'A' || opcao == 'a'){
        
        media = nota1 + nota2 + nota3;
        media = media / 3;
        valor = media;

        printf ("Media aritmetica das 3 notas: %.2f \n", valor);
    
    } 
    
    if (opcao == 'P' || opcao == 'p'){

        media = (nota1 * 5) + (nota2 * 3) + (nota3 * 2);
        media = media / 10;
        valor = media;
        
        printf ("Media Ponderada das 3 notas: %.2f \n", valor);
        
    } 
    
    if (opcao == 'S' || opcao == 's'){
        
        valor = nota1 + nota2 + nota3;
        printf ("Soma das 3 notas: %.2f \n" , valor);
    
    }

    return valor;

} // função

int main (){

    char opcao;
    float nota1, nota2, nota3;

    printf ("Nota 1: \n");
    scanf ("%f", &nota1);
    
    printf ("Nota 2: \n");
    scanf ("%f", &nota2);

    printf ("Nota 3: \n");
    scanf ("%f", &nota3);
        
    printf ("\nA -> Media aritmetica\n");
    printf ("P -> Media Ponderada\n");
    printf ("S -> Soma das 3 notas\n");
    scanf (" %c", &opcao);

    Funcao(nota1, nota2, nota3, opcao);
    
    return 0;

} // main