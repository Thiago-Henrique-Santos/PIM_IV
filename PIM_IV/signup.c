#include<stdio.h>
#include "signup.h"

void cadastrarFuncionario () {
    struct Funcionario cadastro;
    FILE *arq;
    arq = fopen("cad_funcionario.txt", "a");
    if (arq == NULL) {
        printf("ERRO! O arquivo não foi aberto!\n");
    }
    system("cls");
    printf("\tCadastro de Funcionário\n"); printf("\nDigite o nome: "); fflush(stdin);
    fgets(cadastro.nome, 100, stdin);


    fputs(cadastro.nome, arq);
    printf("Digite a data do nascimento: "); fflush(stdin);
    fgets(cadastro.nascimento, 11, stdin); fputs(cadastro.nascimento, arq);
    printf("Digite o RG: "); fflush(stdin);
    fgets(cadastro.rg, 14, stdin); fputs(cadastro.rg, arq);
    printf("Digite o número de Telefone: "); fflush(stdin);
    fgets(cadastro.telefone, 13, stdin); fputs(cadastro.telefone, arq);;
    printf("Digite o E-mail: "); fflush(stdin);
    fgets(cadastro.email, 100, stdin); fputs(cadastro.email, arq);
    printf("Digite o nome da rua: "); fflush(stdin);
    fgets(cadastro.rua, 100, stdin); fputs(cadastro.rua, arq);


    printf("Digite o número do endereço: "); fflush(stdin);
    fgets(cadastro.numero_endereco, 4, stdin); fputs(cadastro.numero_endereco, arq);
    printf("Digite o nome do bairro: "); fflush(stdin);
    fgets(cadastro.bairro, 50, stdin); fputs(cadastro.bairro, arq);
    printf("Digite o CEP da rua: "); fflush(stdin);
    fgets(cadastro.cep, 9, stdin); fputs(cadastro.cep, arq);
    printf("Digite o nome da cidade: "); fflush(stdin);
    fgets(cadastro.cidade, 30, stdin); fputs(cadastro.cidade, arq);
    printf("Digite as iniciais do estado: "); fflush(stdin);
    fgets(cadastro.estado, 2, stdin); fputs(cadastro.estado, arq);
    printf("Digite a área de atuação do funcionário: "); fflush(stdin);


    fgets(cadastro.area_atuacao, 20, stdin); fputs(cadastro.area_atuacao, arq);
    fclose(arq);
}

