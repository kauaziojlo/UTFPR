/*

1) Determinar a quantidade de litros gastos em uma viagem por 
um automóvel que faz 12 km/litro. O tempo gasto na viagem é de 
35 min e a velocidade é 80 km/h.

*/ 

#include <stdio.h>
#include <stdlib.h>

int main (){

    float kmPlitro = 12;
    float velocidade = 80;
    float tempo = 35;
    float tempo_horas = 0;
    float distancia = 0;
    float consumo = 0;

    tempo_horas = tempo / 60;

    distancia = velocidade * tempo_horas;

    consumo = distancia / kmPlitro;

    printf ("O consumo de combustível numa viagem de 35 mins a 80 km/h eh de %.2f litros\n", consumo);

    return 0;

} // main