/*

Fazer um programa para calcular consumo de combustível
de uma viagem a partir de 3 informações:

Velocidade (km/h), Tempo (minutos) e Km's por Litro.

*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    float velocidade = 0;
    float tempo = 0;
    float kmPlitro = 0;

    float tempo_horas = 0;
    float distancia = 0;
    float consumo = 0;


    printf ("===== CALCULADORA DE CONSUMO DE COMBUSTIVEL =====\n");
    printf ("\n");
    
    printf ("Aperte enter para começar... \n");
    getchar ();

   
    printf ("Digite a velocidade media da viagem: (EX: 80, 110) \n");
    scanf ("%f", &velocidade);

    printf ("\n");
    
    printf ("Digite o tempo da viagem em minutos: (EX: 35, 75)\n");
    scanf ("%f", &tempo);

    printf ("\n");

    printf ("Digite a quantidade de quilômetros por litro do automovel: (EX: 12, 24)\n");
    scanf ("%f", &kmPlitro);


    tempo_horas = tempo / 60;

    distancia = tempo_horas * velocidade;

    consumo = distancia / kmPlitro;

    printf ("\n");
    printf ("O consumo sera de %.2f litro(s)\n", consumo);

    return 0;

} // main