/*

1 - Ao iniciar sua jornada Pokémon, um treinador pode escolher entre três tipos de Pokémon iniciais. 
Crie um programa que utilize uma enumeração chamada TipoPokemon, com as opções: Fogo, Água e Grama

O programa deve pedir ao usuário para escolher um número (1 para Fogo, 2 para Água e 3 para Grama) 
e exibir uma mensagem motivadora baseada na escolha, por exemplo:

Fogo: "Você escolheu o caminho ardente da vitória!"
Água: "A correnteza te levará ao topo!"
Grama: "O crescimento e a estratégia são suas armas!"
Caso o usuário escolha um número inválido, o programa deve alertá-lo.

*/


#include <stdio.h>

typedef enum {FOGO = 1, AGUA, GRAMA} TipoPokemon;

int main (){

    int opcao;
    TipoPokemon pokemon;

    do {
        
        printf ("Digite 1, 2 ou 3:\n");
        scanf ("%d", &opcao);

        if (opcao < 1 || opcao > 3){
            printf("Numero inválido, digite 1, 2 ou 3.\n");
            return 1;
        } // verifica numeros invalidos

    } while (numero < 1 || numero > 3)

    pokemon = (TipoPokemon) opcao;

    switch (pokemon){

        case FOGO:
            printf ("Você escolheu o caminho ardente da vitória !\n");
            break;

        case AGUA:
            printf ("A correnteza te levará ao topo !\n");
            break;

        case GRAMA:
            printf ("O crescimento e a estratégia são suas armas !\n");
            break;

    } // switch

    return 0;

} // main