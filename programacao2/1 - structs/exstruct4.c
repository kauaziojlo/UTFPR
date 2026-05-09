/*

4) Faça um programa que controla o consumo de energia dos 
eletrodomésticos de uma casa e:

– Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), 
potência (real, em kW) e tempo ativo por dia (real, em horas).

– Leia um tempo t (em dias), calcule e mostre o consumo total na casa 
e o consumo relativo de cada eletrodoméstico (consumo/consumo total) 
nesse período de tempo. Apresente este último dado em porcentagem.

*/

#include <stdio.h>
#include <string.h>

typedef struct {

    int dia;

} Tempo;


typedef struct {

    float kw;
    int horas_ativo;

} Potencia;


typedef struct {

    char nome [15];
    Potencia potencia;
    Tempo tempo;
    float consumo;

} Eletro;

int main (){

    Eletro eletro1, eletro2, eletro3, eletro4, eletro5;

    for (int linha = 0; linha < 5; linha++){ // Não sei se podia fazer isso, professor, mas estava com bastante dificuldade nesse exercício.
        
        printf ("Digite a potencia do eletrodomestico %d: \n", linha + 1);
        scanf ("%f", &eletro[linha].potencia.kw);

        printf ("Horas por dia o eletro fica ativo: \n", linha + 1);
        scanf ("%d", &eletro[linha].potencia.horas_ativo);

        printf ("Quantidade de dias que o eletro fica ativo: \n", linha + 1);
        scanf ("%d", &eletro[linha].tempo.dia);

        eletro[linha].consumo = eletro[linha].potencia.kw * eletro[linha].potencia.horas_ativo / 1000;
        eletro.tempo = eletro[linha].tempo.dia * eletro[linha].potencia.horas_ativo;

    } // for

    for (int linha = 0; linha < 5; linha++){
        printf ("Consumo individual eletro %d: %f\n", eletro[linha], eletro[linha].consumo);
    } // for 2
    
    printf ("Consumo total dos eletros: %2.f \n", ); // Parei o código por aqui porque não sabia mais o que fazer, fiquei com dúvidas.

    return 0;

} // main