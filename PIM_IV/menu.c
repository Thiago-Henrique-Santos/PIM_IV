#include<stdio.h>
#include "menu.h"
#include "paciente.h"

void preencherPaciente();
void lerArquivo();

void menu(){
    int opcao;
    printf("*********************************************\n\n");
    printf("******BEM VINDO AO CADASTRO DE PACIENTE******\n\n");
    printf("*********************************************\n\n");

    printf("1) - CADASTRO DE PACIENTE\n");
    printf("2) - LISTAR PACIENTES\n");
    printf("3) - SAIR DO SISTEMA\n\n");
    printf("DIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &opcao);

     switch (opcao)
        {
            case 1 :
                preencherPaciente();
            break;
            case 2 :
                lerArquivo();
            break;
            case 3 :
                break;
            default :
                printf("Opção Invalida!\n");
                menu();
            break;
        }
}
