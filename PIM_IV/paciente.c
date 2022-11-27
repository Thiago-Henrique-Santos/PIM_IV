#include <stdio.h>
#include <stdlib.h>
#include "paciente.h"
#include "menu.h"

void menu();
void preencherPaciente(){
    struct Paciente novoPaciente;
    printf("<<<<Formulario de Paciente>>>>\n");
    printf("Nome:");
    scanf("%s", novoPaciente.nome);
    printf("Idade:");
    scanf("%d", &novoPaciente.idade);
    printf("Telefone:");
    scanf("%d", &novoPaciente.telefone);
    printf("CPF:");
    scanf("%s", novoPaciente.cpf);
    printf("Email:");
    scanf("%s", novoPaciente.email);
    printf("Data do Diagnostico:");
    scanf("%d %d %d", &novoPaciente.dataDiagnostico.dia,  &novoPaciente.dataDiagnostico.mes,  &novoPaciente.dataDiagnostico.ano);
    printf("Comodidade:");
    scanf("%d", &novoPaciente.comorbidade);
    printf("Data de Nascimento:");
    scanf("%d %d %d", &novoPaciente.dataNascimento.dia,  &novoPaciente.dataNascimento.mes,  &novoPaciente.dataNascimento.ano);
    printf("\n<<<<Endereco>>>>\n");
    printf("Rua:");
    scanf("%s", novoPaciente.endereco.rua);
    printf("Numero:");
    scanf("%d", &novoPaciente.endereco.numero);
    printf("Bairro:");
    scanf("%s", novoPaciente.endereco.bairro);
    printf("Cidade:");
    scanf("%s", novoPaciente.endereco.cidade);
    printf("Estado:");
    scanf("%s", novoPaciente.endereco.estado);
    printf("CEP:");
    scanf("%d", &novoPaciente.endereco.cep);
    criarArquivo(novoPaciente);
}

void criarArquivo(struct Paciente novoPaciente){
    FILE *f;
    f = fopen("paciente.txt", "r");
    if(f == NULL){
        f = fopen("paciente.txt", "a");
        fprintf(f, "nome, idade, telefone, cpf, email, dataDiagnostico, comorbidade, dataNascimento, rua, numero, bairro, cidade, estado, cep\n");
    }
    else{
        f = fopen("paciente.txt", "a");
    }

    fprintf(f, "%s, %d, %d, %s, %s, %d/%d/%d, %d, %d/%d/%d, %s, %d, %s, %s, %s, %d\n", novoPaciente.nome, novoPaciente.idade, novoPaciente.telefone, novoPaciente.cpf, novoPaciente.email, novoPaciente.dataDiagnostico.dia,
              novoPaciente.dataDiagnostico.mes,  novoPaciente.dataDiagnostico.ano, novoPaciente.comorbidade, novoPaciente.dataNascimento.dia,  novoPaciente.dataNascimento.mes,  novoPaciente.dataNascimento.ano,
              novoPaciente.endereco.rua, novoPaciente.endereco.numero, novoPaciente.endereco.bairro, novoPaciente.endereco.cidade, novoPaciente.endereco.estado, novoPaciente.endereco.cep);
    fclose(f);
    menu();
}

void lerArquivo(){
    FILE *f = fopen("paciente.txt", "r");
    char ch;
    do {
        ch = fgetc(f);
        printf("%c", ch);

        // Checking if character is not EOF.
        // If it is EOF stop eading.
    } while (ch != EOF);

    // Closing the file
    fclose(f);
    menu();
}
