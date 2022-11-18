#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    //Declaração das variaveis
    char name[80];
    int idade;
    char cpf[14];
    char rua[80];
    char numero[10];
    char bairro[80];
    char cidade[80];
    char estado[80];
    char cep[80];
    int dataNascimento[3];
    char comorbidadePaciente[100];

    //Inicio do formulario
    printf("Nome: ");
    scanf("%s",name);
    printf("Idade:");
    scanf("\n%d",&idade);
    printf("cpf: ");
    scanf("%s",cpf);
    printf("rua: ");
    scanf("%s",rua);
    printf("número:");
    scanf("%s",numero);
    printf("bairro:");
    scanf("%s",bairro);
    printf("cidade:");
    scanf("%s",cidade);
    printf("estado:");
    scanf("%s",estado);
    printf("cep:");
    scanf("%s",cep);
    printf("data de nascimento - dia:  ");
    scanf("%d",&dataNascimento[0]);
    printf("data de nascimento - mes:  ");
    scanf("%d",&dataNascimento[1]);
    printf("data de nascimento - ano:  ");
    scanf("%d",&dataNascimento[2]);
    printf("comorbidade de Paciente:");
    scanf("%s",comorbidadePaciente);



    //Teste para verificar o que está sendo escrito nas variaveis
    printf("%s\n", name);
    printf("%d\n", idade);
    printf("%s\n", cpf);
    printf("%d\n", rua);
    printf("%s\n", numero);
    printf("%d\n", bairro);
    printf("%s\n", cidade);
    printf("%d\n", estado);
    printf("%s\n", cep);
    printf("%d/%d/%d\n", dataNascimento[0], dataNascimento[1], dataNascimento[2]);
    printf("%s\n", comorbidadePaciente);

    return 0;
}
