#include <stdio.h>
#include <stdlib.h>
#include "paciente1.h"

void preencherPaciente(struct Paciente novoPaciente){
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
     scanf("%d", &novoPaciente.dataDiagnostico);
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
     setPaciente(novoPaciente);
}

void setPaciente(struct Paciente novoPaciente){
     struct Paciente paciente = novoPaciente;
     FILE *f = fopen("paciente.txt", "w");
     fwrite(&paciente, sizeof(paciente), 1, f);
     fclose(f);
}