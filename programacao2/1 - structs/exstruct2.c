/*

2. Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:

 Horário: composto de hora, minutos e segundos.
 Data: composto de dia, mês e ano.
 Compromisso: nome do compromisso, local, data, horário

*/

#include <stdio.h>
#include <string.h>


typedef struct {
    
    int hora, minuto, segundo;
    
} Horario;


typedef struct {
    
    int dia, mes, ano;
    
} Data;

typedef struct {

    char nome[31];
    char local [31];
    Data data;
    Horario horario;

} Compromisso;

int main (){

    Compromisso compromisso;

    printf ("Nome do compromisso: \n\n");
    fgets (compromisso.nome, 31, stdin);
    compromisso.nome[strcspn (compromisso.nome, "\n")] = '\0';
    setbuff (stdin, NULL);

    printf ("Local do compromisso: \n\n");
    fgets (compromisso.local, 31, stdin);
    compromisso.local[strcspn (compromisso.local, "\n")] = '\0';
    setbuff (stdin, NULL);

    printf ("Dia: \n");
    scanf ("%d", &compromisso.data.dia);

    printf ("Mes: \n");
    scanf ("%d", &compromisso.data.mes);

    printf ("Ano: \n");
    scanf ("%d", &compromisso.data.ano);

    printf ("Hora(s): \n\n");
    scanf ("%d", &compromisso.horario.hora);

    printf ("Minuto(s): \n");
    scanf ("%d", &compromisso.horario.minuto);

    printf ("Segundo(s): \n");
    scanf ("%d", &compromisso.horario.segundo);

    printf ("Exibindo o compromisso... \n");
    printf ("Nome: %s \n", compromisso.nome);
    printf ("Local: %s \n", compromisso.local);
    printf ("Data: %d / %d / %d", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf ("Horario: %d / %d / %d", compromisso.horario.hora, compromisso.horario.minuto, compromisso.horario.segundo); 

    return 0;

} // main