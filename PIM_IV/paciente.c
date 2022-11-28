#include <stdio.h>
#include <stdlib.h>
#include "paciente.h"
#include "menu.h"
#include "util.h"

void menu();
void preencherPaciente(){
    struct Paciente novoPaciente;
    printf("<<<<Formulario de Paciente>>>>\n");
    printf("Nome:");
    scanf("%s", novoPaciente.nome);
    printf("Telefone:");
    scanf("%s", novoPaciente.telefone);
    printf("CPF:");
    scanf("%s", novoPaciente.cpf);
    printf("Email:");
    scanf("%s", novoPaciente.email);
    printf("Data do Diagnostico:");
    scanf("%d %d %d", &novoPaciente.dataDiagnostico.dia,  &novoPaciente.dataDiagnostico.mes,  &novoPaciente.dataDiagnostico.ano);
    printf("Comorbidade:");
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
    scanf("%s", novoPaciente.endereco.cep);
    criarArquivo(novoPaciente);
}

void criarArquivo(struct Paciente novoPaciente){
    FILE *f;
    f = fopen("paciente.txt", "r");
    if(f == NULL){
        f = fopen("paciente.txt", "a");
        fprintf(f, "nome, telefone, cpf, email, dataDiagnostico, comorbidade, dataNascimento, rua, numero, bairro, cidade, estado, cep\n");
    }
    else{
        f = fopen("paciente.txt", "a");
    }

    fprintf(f, "%s, %s, %s, %s, %d/%d/%d, %d, %d/%d/%d, %s, %d, %s, %s, %s, %s\n", novoPaciente.nome, novoPaciente.telefone, novoPaciente.cpf, novoPaciente.email, novoPaciente.dataDiagnostico.dia,
              novoPaciente.dataDiagnostico.mes,  novoPaciente.dataDiagnostico.ano, novoPaciente.comorbidade, novoPaciente.dataNascimento.dia,  novoPaciente.dataNascimento.mes,  novoPaciente.dataNascimento.ano,
              novoPaciente.endereco.rua, novoPaciente.endereco.numero, novoPaciente.endereco.bairro, novoPaciente.endereco.cidade, novoPaciente.endereco.estado, novoPaciente.endereco.cep);
    fclose(f);
    menu();
}

void lerArquivo(){
    FILE *f = fopen("paciente.txt", "r");
    struct Paciente paciente;
    char ch, auxData[3][4], auxNumero[10], numComorbidade;
    do {
        for (int caracteres = 0; fscanf(f, "%c", &ch)=='\n'; caracteres++) {
            int virgula = 0;
            if (ch==',') {
                virgula++;
            } else {
                switch (virgula) {
                    case 0:
                        for (int i = 0;; i++) {
                            if (!paciente.nome[i]) {
                                paciente.nome[i] = ch;
                                break;
                            }
                        }
                        break;
                    case 1:
                        if (ch!=' ') {
                            for (int i = 0;; i++) {
                                if (!paciente.telefone[i]) {
                                    paciente.telefone[i] = ch;
                                    break;
                                }
                            }
                        }
                        break;
                    case 2:
                        if (ch!=' ') {
                            for (int i = 0;; i++) {
                                if (!paciente.telefone[i]) {
                                    paciente.cpf[i] = ch;
                                    break;
                                }
                            }
                        }
                        break;
                    case 3:
                        if (ch!=' ') {
                            for (int i = 0;; i++) {
                                if (!paciente.telefone[i]) {
                                    paciente.email[i] = ch;
                                    break;
                                }
                            }
                        }
                        break;
                    case 4:
                        if (ch!='/' && ch!=' ') {
                            for (int i = 0; i < 3; i++) {
                                for (int j = 0; j < 4; j++) {
                                    if (i < 2 && j > 1) {
                                        break;
                                    }

                                    if (!auxData[i][j]) {
                                        auxData[i][j] = ch;
                                        i = 3;
                                        break;
                                    }
                                }
                            }
                        }

                        if (auxData[2][3]) {
                            paciente.dataDiagnostico.dia = atoi(auxData[0]);
                            paciente.dataDiagnostico.mes = atoi(auxData[1]);
                            paciente.dataDiagnostico.ano = atoi(auxData[2]);
                            for (int i = 0; i < 3; i++) {
                                for (int j = 0; j < 4; j++){
                                    auxData[i][j] = '\0';
                                }
                            }
                        }
                        break;
                    case 5:
                        if (ch!=' ') {
                            numComorbidade = ch;
                            paciente.comorbidade = numComorbidade - '0';
                        }
                        break;
                    case 6:
                        if (ch!='/' && ch!=' ') {
                            for (int i = 0; i < 3; i++) {
                                for (int j = 0; j < 4; j++) {
                                    if (i < 2 && j > 1) {
                                        break;
                                    }

                                    if (!auxData[i][j]) {
                                        auxData[i][j] = ch;
                                        i = 3;
                                        break;
                                    }
                                }
                            }
                        }

                        if (auxData[2][3]) {
                            paciente.dataNascimento.dia = atoi(auxData[0]);
                            paciente.dataNascimento.mes = atoi(auxData[1]);
                            paciente.dataNascimento.ano = atoi(auxData[2]);
                            for (int i = 0; i < 3; i++) {
                                for (int j = 0; j < 4; j++){
                                    auxData[i][j] = '\0';
                                }
                            }
                        }
                        break;
                    case 7:
                        if (ch!=' ') {
                            for (int i = 0;; i++) {
                                if (!paciente.endereco.rua[i]) {
                                    paciente.endereco.rua[i] = ch;
                                    break;
                                }
                            }
                        }
                        break;
                    case 8:
                        if (ch!=' ') {
                            for (int i = 0;; i++) {
                                if (!auxNumero[i]) {
                                    auxNumero[i] = ch;
                                    break;
                                }
                            }
                            paciente.endereco.numero = atoi(auxNumero);
                        }
                        break;
                    case 9:
                        if (ch!=' ') {
                            for (int i = 0;; i++) {
                                if (!paciente.endereco.bairro[i]) {
                                    paciente.endereco.bairro[i] = ch;
                                    break;
                                }
                            }
                        }
                        break;
                    case 10:
                        if (ch!=' ') {
                            for (int i = 0;; i++) {
                                if (!paciente.endereco.cidade[i]) {
                                    paciente.endereco.cidade[i] = ch;
                                    break;
                                }
                            }
                        }
                        break;
                    case 11:
                        if (ch!=' ') {
                            for (int i = 0;; i++) {
                                if (!paciente.endereco.estado[i]) {
                                    paciente.endereco.estado[i] = ch;
                                    break;
                                }
                            }
                        }
                        break;
                    case 12:
                        if (ch!=' ') {
                            for (int i = 0;; i++) {
                                if (!paciente.endereco.cep[i]) {
                                    paciente.endereco.cep[i] = ch;
                                    break;
                                }
                            }
                        }
                        break;
                }
            }
        }
    } while (ch != EOF);

    fclose(f);
    menu();
}
