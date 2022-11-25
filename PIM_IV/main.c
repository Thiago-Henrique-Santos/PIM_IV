#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void menu ();
void cadastrar();

int main() {
    setlocale(LC_ALL, "Portuguese");

    menu();

    return 0;
}

void menu () {
    printf("este é o menu");
}

void cadastrar() {
     //Declaração das variaveis
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
    printf("número:");
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



    //Teste para verificar o que está sendo escrito nas variaveis
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
