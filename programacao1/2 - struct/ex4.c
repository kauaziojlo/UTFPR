/*

4. Faça um programa que controla o consumo de energia
dos eletrodomésticos de uma casa e:

Crie e leia 5 eletrodomésticos que contém nome
(máximo 15 letras), potência (real, em kW) e tempo
ativo por dia (real, em horas).

Leia um tempo t (em dias), calcule e mostre o
consumo total na casa e o consumo relativo de cada
eletrodoméstico (consumo/consumo total) nesse
período de tempo. Apresente este último dado em
porcentagem.

*/

#include <stdio.h>
#define NUM_ELETRO 5

typedef struct {
    
    char nome[16]; // Nome do eletrodoméstico
    float potencia; // Potência em kW
    float tempoAtivo; // Tempo ativo por dia em horas

} Eletrodomestico;

int main() {
    
    Eletrodomestico eletros[NUM_ELETRO];
    float consumoTotal = 0.0, consumoEletro[NUM_ELETRO];
    int dias;

    // Leitura dos dados dos eletrodomésticos
    for (int linha = 0; linha < NUM_ELETRO; linha++) {
        
        printf("Digite o nome do eletrodomestico %d: \n", linha + 1);
        scanf("%15s", eletros[linha].nome); // Limita a leitura a 15 caracteres

        printf("Digite a potencia (kW) de %s: ", eletros[linha].nome);
        scanf("%f", &eletros[linha].potencia);

        printf("Digite o tempo ativo por dia (horas) de %s: ", eletros[linha].nome);
        scanf("%f", &eletros[linha].tempoAtivo);

        printf("\n");
    
    } // for 1

    // Numero de dias
    printf("Digite o tempo total (em dias): \n");
    scanf("%d", &dias);

    
    // Cálculo do consumo total
    for (int linha = 0; linha < NUM_ELETRO; linha++) {
        
        consumoEletro[linha] = eletros[linha].potencia * eletros[linha].tempoAtivo * dias;
        consumoTotal += consumoEletro[linha];
    
    } // for 2

    // Exibição dos resultados
    printf ("\n");
    printf("Consumo total da casa em %d dias: %.2f kWh \n", dias, consumoTotal);
    printf("Consumo relativo de cada eletrodomestico: \n");

    for (int linha = 0; linha < NUM_ELETRO; linha++) {
        
        float percentual = (consumoEletro[linha] / consumoTotal) * 100;
        printf("%s: %.2f kWh (%.2f%% do total) \n", eletros[linha].nome, consumoEletro[linha], percentual);
    
    } // for 3

    return 0;

} // main

