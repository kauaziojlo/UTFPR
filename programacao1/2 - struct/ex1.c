/*

1) Construa uma estrutura aluno com nome, curso e 4
notas, média e situação. Leia as informações nome,
curso e notas do teclado, calcule a média e armazene a
situação do aluno:

*/

#include <stdio.h>
#include <string.h>

int main(){

    typedef struct Aluno {

    char nome[50];
    char curso [30];
    float nota[4];
    float media;
    char situacao [20];
    
    } Aluno;

    Aluno aluno;
    
    // Nome do aluno
    printf ("Digite o nome do aluno: \n");
    fgets(aluno.nome, 50, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = 0;
    printf ("\n");

    // Curso do aluno
    printf ("Digite o curso do aluno: \n");
    fgets(aluno.curso, 30, stdin);
    aluno.curso[strcspn(aluno.curso, "\n")] = 0;
    printf ("\n");

    // Medias do aluno
    for (int linha = 0; linha < 4; linha++){
        printf ("Digite a nota %d do aluno \n", linha + 1);
        scanf ("%f", &aluno.nota[linha]);
        printf ("\n");
    } // for

    // Cálculo da media das notas
    aluno.media = (aluno.nota[0] + aluno.nota[1] + aluno.nota[2] + aluno.nota[3]) / 4;

    if (aluno.media >= 7) { // Se média igual maior ou igual 7
        strcpy(aluno.situacao, "Aprovado");
    
    } else if (aluno.media >= 3){ // Se média maior ou igual a 3
        strcpy(aluno.situacao, "Exame");
    
    } else { // Se média menor que 3
        strcpy(aluno.situacao, "Reprovado");
    }

    
    // Exibe os resultados
    printf ("\n");
    printf ("Aluno: %s \n", aluno.nome);   
    printf ("Media: %.2f \n", aluno.media);
    printf ("Situacao: %s \n", aluno.situacao);

    return 0;

} // main