#include <stdio.h>
struct Endereco
{
    char rua[100];
    int numero[8];
    char bairro[100];
    char cidade[100];
    char estado[20];
    int cep[8];
} endereco;

struct DataNascimento
{
    int dia[2];
    int mes[2];
    int ano[4];
} dataNascimento;

struct Paciente
{
    char nome[100];
    int idade[2];
    char cpf[11];
    char telefone[11];
    struct Endereco endereco;
    struct DataNascimento dataNascimento;
    char email[100];
    int dataDiagnostico[8];
    enum {diabetes=1, obesidade=2, hipertencao=3, tuberculosi=4, outros=5} comorbidade;
} paciente;


void preencherPaciente(struct Paciente paciente);
void setPaciente(struct Paciente novoPaciente);