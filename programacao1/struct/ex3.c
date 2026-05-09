/*

3) Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:
Horário: composto de hora, minutos e segundos.

Data: composto de dia, mês e ano.

Compromisso: local, horário e texto que descreve o
compromisso.

*/

#include <stdio.h>

// Definição da estrutura Horario
typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

// Definição da estrutura Data
typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

// Definição da estrutura Compromisso
typedef struct {
    char local[100];
    Horario horario;
    Data data;
    char descricao[200];
} Compromisso;

int main() {
    
    Compromisso compromisso;

    // Data
    printf("Digite o dia do compromisso: \n");
    scanf("%d", &compromisso.data.dia);
    printf ("\n");

    printf("Digite o mes do compromisso: \n");
    scanf("%d", &compromisso.data.mes);
    printf ("\n");

    printf("Digite o ano do compromisso: \n");
    scanf("%d", &compromisso.data.ano);
    printf ("\n");

    // Hora do compromisso
    printf("Digite a hora do compromisso (HH MM SS): \n");
    scanf("%d %d %d", &compromisso.horario.hora, &compromisso.horario.minutos, &compromisso.horario.segundos);
    printf ("\n");

    // Local do compromisso
    printf("Digite o local do compromisso: ");
    getchar(); //
    fgets(compromisso.local, 100, stdin);
    compromisso.local[strcspn(compromisso.local, "\n")] = 0;
    printf ("\n");

    // Descrição do compromisso
    printf("Digite a descricao do compromisso: ");
    fgets(compromisso.descricao, 200, stdin);
    compromisso.descricao[strcspn(compromisso.descricao, "\n")] = 0;
    printf ("\n");

    // Exibe o compromisso
    printf ("\n");
    printf("Compromisso agendado:\n");
    printf("Data: %02d/%02d/%d\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf("Horario: %02d:%02d:%02d\n", compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos);
    printf("Local: %s\n", compromisso.local);
    printf("Descricao: %s\n", compromisso.descricao);

    return 0;
}