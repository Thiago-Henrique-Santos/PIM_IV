#include<stdio.h>
#include "login.h"
#include "menu.h"

void menu();

void telaLogin(){
    struct Login loginDefault = {"teste@teste.com", "Teste"};
    struct Login loginTela;

    printf("*************************************\n\n");
    printf("******Tela Login******\n\n");
    printf("*************************************\n\n");
    printf("Digite o Login: ");
    scanf("%s", loginTela.login);
    printf("Digite a Senha: ");
    scanf("%s", loginTela.senha);

    if(strcmp(loginDefault.login, loginTela.login) == 0 && strcmp(loginDefault.senha, loginTela.senha) == 0){
        menu();
    } else {
        telaLogin();
    }
}
