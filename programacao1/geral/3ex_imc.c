/* 

Tendo a Altura da pessoa definida como uma constante, 
calcule seu peso ideal utilizando a seguinte fórmula:
peso ideal = 72.7 x altura – 58

*/

#include <stdio.h>
#include <stdlib.h>
#define altura 1.70

int main (){

    float pesoideal;

    pesoideal = 72.7 * altura - 58;
    printf ("O seu peso ideal eh de %.2f Kg", pesoideal);

    return 0;

} // main