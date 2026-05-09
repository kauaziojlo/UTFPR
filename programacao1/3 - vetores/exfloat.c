#include <stdio.h>

int main(){
    //Declara as variaveis e inicializa A e B
    float A, B;
    float soma, subtracao, multiplicacao, divisao, resto;
  
    printf("Digite A: \n");
    scanf("%i", &A);
    printf("Digite B: \n");
    scanf("%i", &B);
  
    printf("\nO valor de A = %i e o valor de B = %d\n\n", A, B);
  
    //Realiza as 4 operações
    soma = A + B;
    subtracao = A - B;
    multiplicacao  = A * B;
    divisao  = A / B;
    resto = A % B;
  
    //Exibe os resultados
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %i\n", multiplicacao);
    printf("Divisao: %i // Resto %i \n\n", divisao, resto);
  
    //Incrementa a variável B
    B++;
  
    printf("Novo valor de B depois do incremento: %i\n", B);
  
    //Repete as 4 operações
    soma  = A + B;
    subtracao  = A - B;
    multiplicacao  = A * B;
    divisao  = A / B;
    resto = A % B;
  
    //Exibe novamente os resultados
    printf("Soma: %d \n", soma);
    printf("Subtracao: %d n", subtracao);
    printf("Multiplicacao: %i \n", multiplicacao);
    printf("Divisao: %i // Resto %i \n", divisao, resto);
  
    return 0;

}//main