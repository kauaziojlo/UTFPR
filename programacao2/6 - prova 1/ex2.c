/*

2) Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:

- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: local, data, horário e texto que descreve o
compromisso.

*/

#include <stdio.h>
#include <string.h>

typedef struct {

    int horas, minutos, segundos;

} Horario;


typedef struct {

    int dia, mes, ano;

} Data;


typedef struct {

    char local [31];
    char descricao [31];
    Horario horario;
    Data data;

} Compromisso;


int main (){

    Compromisso compromisso;

    printf ("COMPROMISSO (DATA) \n");
    
    printf ("Dia: \n");
    scanf ("%d", &compromisso.data.dia);

    printf ("Mes: \n");
    scanf ("%d", &compromisso.data.mes);

    printf ("Ano: \n");
    scanf ("%d", &compromisso.data.ano);

    printf ("\n");

    printf ("COMPROMISSO (HORARIO) \n");

    printf ("Hora(s): \n");
    scanf ("%d", &compromisso.horario.horas);

    printf ("Minuto(s): \n");
    scanf ("%d", &compromisso.horario.minutos);

    printf ("Segundo(s): \n");
    scanf ("%d", &compromisso.horario.segundos);
    setbuf (stdin, NULL);


    printf ("\n");

    printf ("COMPROMISSO (DESCRIÇÃO) \n");

    printf ("Local: \n");
    fgets (compromisso.local, 31, stdin);
    compromisso.local [strcspn (compromisso.local, "\n")] = '\0';
    setbuf (stdin, NULL);

    printf ("Descrição: \n");
    fgets (compromisso.descricao, 31, stdin);
    compromisso.descricao [strcspn (compromisso.descricao, "\n")] = '\0';
    setbuf (stdin, NULL);

    printf ("\n");

    printf ("COMPROMISSO: \n");

    printf ("Local: %s \n", compromisso.local);
    printf ("Descricao: %s \n", compromisso.descricao);
    printf ("Data: %d / %d / %d \n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf ("Horario: %d : %d : %d \n", compromisso.horario.horas, compromisso.horario.minutos, compromisso.horario.segundos);

    return 0;

} // main