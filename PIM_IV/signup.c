/*#include<stdio.h>
#include "signup.h"

void cadastrarFuncionario () {
    FILE *arq;
    arq = fopen("cad_funcionario.txt", "a");
    if (arq == NULL) {
        printf("ERRO! O arquivo não foi aberto!\n");
    }
    system("cls");
    printf("\tCadastro de Funcionário\n"); printf("\nDigite o nome: "); fflush(stdin);
    fgets(cadastro[0].nome, 30, stdin);


    fputs(cadastro[0].nome, arq);
    printf("Digite a data do nascimento: "); fflush(stdin);
    fgets(cadastro[0].nascimento, 11, stdin); fputs(cadastro[0].nascimento, arq);
    printf("Digite o RG: "); fflush(stdin);
    fgets(cadastro[0].rg, 14, stdin); fputs(cadastro[0].rg, arq);
    printf("Digite o número de Telefone: "); fflush(stdin);
    fgets(cadastro[0].telefone, 13, stdin); fputs(cadastro[0].telefone, arq);;
    printf("Digite o E-mail: "); fflush(stdin);
    fgets(cadastro[0].email, 30, stdin); fputs(cadastro[0].email, arq);
    printf("Digite o nome da rua: "); fflush(stdin);
    fgets(cadastro[0].rua, 30, stdin); fputs(cadastro[0].rua, arq);


    printf("Digite o número do endereço: "); fflush(stdin);
    fgets(cadastro[0].numero_endreco, 4, stdin); fputs(cadastro[0].numero_endreco, arq);
    printf("Digite o nome do bairro: "); fflush(stdin);
    fgets(cadastro[0].bairro, 30, stdin); fputs(cadastro[0].bairro, arq);
    printf("Digite o CEP da rua: "); fflush(stdin);
    fgets(cadastro[0].cep, 9, stdin); fputs(cadastro[0].cep, arq);
    printf("Digite o nome da cidade: "); fflush(stdin);
    fgets(cadastro[0].cidade, 25, stdin); fputs(cadastro[0].cidade, arq);
    printf("Digite as iniciais do estado: "); fflush(stdin);
    fgets(cadastro[0].estado, 3, stdin); fputs(cadastro[0].estado, arq);
    printf("Digite a área de atuação do funcionário: "); fflush(stdin);


    fgets(cadastro[0].area_atuacao, 20, stdin); fputs(cadastro[0].area_atuacao, arq);
    fclose(arq);
}

*/
