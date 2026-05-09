#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int dia, mes, ano;
} Data;

typedef union {
    char cpf [21];
    char passaporte [31];
} Documento;

typedef enum {BRASILEIRO = 1, ESTRANGEIRO = 2} Nacionalidade;

typedef struct {
    char nome[31];
    int idade;
    float altura;
    float peso;
} Pessoa;

typedef struct {
    Pessoa pessoa;
    Nacionalidade nacionalidade;
    Data datanascimento;
    Documento documento;
} Cadastro;

int main() {
    Cadastro cadastro;
    int opcao;

    printf("Nome da pessoa: \n");
    fgets(cadastro.pessoa.nome, 31, stdin);
    cadastro.pessoa.nome[strcspn(cadastro.pessoa.nome, "\n")] = '\0';

    printf("Idade: \n");
    scanf("%d", &cadastro.pessoa.idade);
    getchar();

    printf("Dia de nascimento: \n");
    scanf("%d", &cadastro.datanascimento.dia);
    
    printf("Mes de nascimento: \n");
    scanf("%d", &cadastro.datanascimento.mes);
    
    printf("Ano de nascimento: \n");
    scanf("%d", &cadastro.datanascimento.ano);
    getchar();

    do {
        printf("Nacionalidade (1 para brasileiro, 2 para estrangeiro): \n");
        scanf("%d", &opcao);
        getchar();
    } while (opcao < 1 || opcao > 2);
    
    cadastro.nacionalidade = (Nacionalidade)opcao;

    if (cadastro.nacionalidade == BRASILEIRO) {
        printf("CPF: \n");
        fgets(cadastro.documento.cpf, 21, stdin);
        cadastro.documento.cpf[strcspn(cadastro.documento.cpf, "\n")] = '\0';
    } else {
        printf("Passaporte: \n");
        fgets(cadastro.documento.passaporte, 31, stdin);
        cadastro.documento.passaporte[strcspn(cadastro.documento.passaporte, "\n")] = '\0';
    }

    printf("Peso: \n");
    scanf("%f", &cadastro.pessoa.peso);
    
    printf("Altura: \n");
    scanf("%f", &cadastro.pessoa.altura);

    printf ("\n");
    
    printf("--- DADOS CADASTRADOS --- \n");
    printf("Nome: %s \n", cadastro.pessoa.nome);
    printf("Idade: %d \n", cadastro.pessoa.idade);
    printf("Data de nascimento: %d/ %d /%d \n", cadastro.datanascimento.dia, cadastro.datanascimento.mes, cadastro.datanascimento.ano);
    printf("Nacionalidade: %s \n", cadastro.nacionalidade == BRASILEIRO ? "Brasileiro" : "Estrangeiro");

    if (cadastro.nacionalidade == BRASILEIRO) {
        printf("CPF: %s \n", cadastro.documento.cpf);
    } else {
        printf("Passaporte: %s \n", cadastro.documento.passaporte);
    }

    printf("Peso: %.2f \n", cadastro.pessoa.peso);
    printf("Altura: %.2f \n", cadastro.pessoa.altura);

    return 0;

} // main