/*

2- Implemente uma função em C que receba como parâmetros o sexo ('M' para masculino e 'F' para feminino) 
e a altura (número real) de uma pessoa. A função deve calcular e retornar o peso ideal usando as seguintes 
fórmulas:

Homens: (72.7 * altura) - 58
Mulheres: (62.1 * altura) - 44.7

Na função main, chame essa função com diferentes valores de teste e exiba o resultado na tela.

*/

#include <stdio.h>
#include <stdlib.h>

float IMC (char sexo, float altura){

    float pesoideal;

    if (sexo == 'M' && sexo == 'm'){
        pesoideal = (72.7 * altura) - 58;
    }

    if (sexo == 'F' && sexo == 'f'){
        pesoideal = (62.1 * altura) - 44.7;
    }

    return pesoideal;

} // função IMC

int main (){

    char sexo;
    float altura;
    float peso;

    do {
    
        printf ("\nSexo (M ou F): \n");
        scanf (" %c", &sexo);
        
        if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f'){
            printf ("\nInvalido, digite M ou F. \n");
        } // Verifica numero inválido
    
    } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

    printf ("Altura (ex: 1.70): \n");
    scanf ("%f", &altura);

    peso = IMC (sexo, altura);

    printf ("Seu peso ideal eh: %.2f . \n", peso);

    return 0;

} // main