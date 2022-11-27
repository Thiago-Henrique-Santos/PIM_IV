#include <stdio.h>
#include <stdlib.h>
#include "paciente.h"
#include "menu.h"

void menu();
void preencherPaciente(){
    struct Paciente novoPaciente;
    FILE *f = fopen("paciente.txt", "w");
    printf("<<<<Formulario de Paciente>>>>\n");
    printf("Nome:");
    scanf("%s", novoPaciente.nome);
    fprintf(f, "Nome = %s\n", novoPaciente.nome);
    printf("Idade:");
    scanf("%d", &novoPaciente.idade);
    fprintf(f, "Idade = %d\n", novoPaciente.idade);
    printf("Telefone:");
    scanf("%d", &novoPaciente.telefone);
    fprintf(f, "Telefone = %d\n", novoPaciente.telefone);
    printf("CPF:");
    scanf("%s", novoPaciente.cpf);
    fprintf(f, "CPF = %s\n", novoPaciente.cpf);
    printf("Email:");
    scanf("%s", novoPaciente.email);
    fprintf(f, "Email = %s\n", novoPaciente.email);
    printf("Data do Diagnostico:");
    scanf("%d", &novoPaciente.dataDiagnostico);
    fprintf(f, "Data do Diagnostico = %d\n", &novoPaciente.dataDiagnostico);
    printf("Comodidade:");
    scanf("%d", &novoPaciente.comorbidade);
    fprintf(f, "Comodidade = %d\n", &novoPaciente.dataDiagnostico);
    printf("Data de Nascimento:");
    scanf("%d %d %d", &novoPaciente.dataNascimento.dia,  &novoPaciente.dataNascimento.mes,  &novoPaciente.dataNascimento.ano);
    fprintf(f, "Data de Nascimento = %d/%d/%d \n", &novoPaciente.dataNascimento.dia,  &novoPaciente.dataNascimento.mes,  &novoPaciente.dataNascimento.ano);
    printf("\n<<<<Endereco>>>>\n");
    printf("Rua:");
    scanf("%s", novoPaciente.endereco.rua);
    fprintf(f, "Rua = %s\n", novoPaciente.endereco.rua);
    printf("Numero:");
    scanf("%d", &novoPaciente.endereco.numero);
    printf("Bairro:");
    scanf("%s", novoPaciente.endereco.bairro);
    fprintf(f, "Bairro = %s\n", novoPaciente.endereco.bairro);
    printf("Cidade:");
    scanf("%s", novoPaciente.endereco.cidade);
    fprintf(f, "Cidade = %s\n", novoPaciente.endereco.cidade);
    printf("Estado:");
    scanf("%s", novoPaciente.endereco.estado);
    fprintf(f, "Estado = %s\n", novoPaciente.endereco.estado);
    printf("CEP:");
    scanf("%d", &novoPaciente.endereco.cep);
    fclose(f);
    menu();
}
