/*

3) Construa uma estrutura aluno com nome, curso e 4 notas,
média e situação. Leia as informações nome, curso e notas do
teclado, calcule a média e armazene a situação do aluno.
 media ≥ 7 → Aprovado;
 3 ≤ media < 7 → Exame;
 media < 3 → Reprovado;

*/

#include <stdio.h>
#include <string.h>

typedef struct {

    char nomecurso [31];
    float nota [4];
    char situacao [15];

} Curso;


typedef struct {

    char nome [31];
    Curso curso;

} Aluno;


int main (){

    Aluno aluno;
    float media;

    printf ("Nome do aluno: \n");
    fgets (aluno.nome, 31, stdin);
    aluno.nome[strcspn (aluno.nome, "\n")] = '\0';
    setbuf (stdin, NULL);
    printf ("\n");

    printf ("Curso: \n");
    fgets (aluno.curso.nomecurso, 31, stdin);
    aluno.curso.nomecurso[strcspn (aluno.curso.nomecurso, "\n")] = '\0';
    setbuf (stdin, NULL);
    printf ("\n");

    for (int linha = 0; linha < 4; linha++){
        printf ("Nota da p%d: \n", linha + 1);
        scanf ("%f", &aluno.curso.nota[linha]);
        printf ("\n");
    } // for

    media = aluno.curso.nota [0] + aluno.curso.nota [1] + aluno.curso.nota [2] + aluno.curso.nota [3]; // Calculo da media das 4 provas do aluno
    media = media / 4;

    if (media >= 7){ // Media maior ou igual a 7
        strcpy(aluno.curso.situacao, "Aprovado!");
    
    }else if (media > 3 || media < 7){ // Media maior ou igual a 3
        strcpy(aluno.curso.situacao, "Exame.");
    
    }else if (media < 3){ // Se media for menor que 3
        strcpy(aluno.curso.situacao, "Reprovado.");
    }
    
    printf ("Aluno: %s \n", aluno.nome);
    printf ("Curso: %s \n", aluno.curso.nomecurso);
    printf ("Notas: P1 %.1f  P2 %.1f   P3 %.1f  P4 %.1f \n", aluno.curso.nota[0], aluno.curso.nota[1], aluno.curso.nota[2], aluno.curso.nota[3]);
    printf ("Media: %.1f \n", media);
    printf ("Situacao: %s \n", aluno.curso.situacao);

    return 0;

} // main