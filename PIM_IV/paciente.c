#include <stdio.h>

struct Pessoa {
    int id;
    char nome[100];
    int idade;
};

/*
    Abaixo est�o as fun��es que estavam na main antes
    Antes de continu�-las, � necess�rio adaptar �s structs
    Structs necess�rias:
    *Pessoa
    *Usu�rio (funcion�rios)
    *Paciente

    O arquivo pode ser renomeado mais para frente,
    dependendo da organiza��o das classes que fizermos
*/

void menu () {
    printf("este � o menu");
}

void cadastrar() {
     //Declara��o das variaveis
    char name[80];
    int idade;
    char cpf[14];
    char rua[80];
    int numero;
    char bairro[80];
    char cidade[80];
    char estado[80];
    char cep[80];
    int dataNascimento[3];
    char comorbidadePaciente[100];

    char lixo[100];
    char lixoChar;

    //Inicio do formulario
    printf("Nome: ");
    scanf("%[^\n]s", name);
    printf("Idade:");
    scanf("\n%d", &idade);
    printf("cpf: ");
    scanf("%s", cpf);
    printf("rua: ");
    scanf("%s", rua);
    scanf("%s", lixo);
    printf("n�mero:");
    scanf("%d", &numero);
    scanf("%c", &lixoChar);
    printf("bairro:");
    scanf("%[^\n]s", bairro);
    printf("cidade:");
    scanf("\n%[^\n]s", cidade);
    printf("estado:");
    scanf("\n%[^\n]s", estado);
    printf("cep:");
    scanf("\n%[^\n]s", cep);
    printf("data de nascimento - dia:  ");
    scanf("%d", &dataNascimento[0]);
    printf("data de nascimento - mes:  ");
    scanf("%d", &dataNascimento[1]);
    printf("data de nascimento - ano:  ");
    scanf("%d", &dataNascimento[2]);
    printf("comorbidade de Paciente:");
    scanf("%s", comorbidadePaciente);



    //Teste para verificar o que est� sendo escrito nas variaveis
    printf("%s\n", name);
    printf("%d\n", idade);
    printf("%s\n", cpf);
    printf("%d\n", rua);
    printf("%d\n", numero);
    printf("%d\n", bairro);
    printf("%s\n", cidade);
    printf("%d\n", estado);
    printf("%s\n", cep);
    printf("%d/%d/%d\n", dataNascimento[0], dataNascimento[1], dataNascimento[2]);
    printf("%s\n", comorbidadePaciente);

}