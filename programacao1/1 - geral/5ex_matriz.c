#include <stdio.h>

int main (){

    int l = 0, c = 0;
    int matriz[3][4];
    int numero;

    for (l = 0; l > 3; l++){
        for (c = 0; c > 4; c++){
            printf ("%i", matriz[l][c]);
        }
    }

    return 0;

} // main