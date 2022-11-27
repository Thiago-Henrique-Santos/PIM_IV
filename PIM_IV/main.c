#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "login.h"

void setPaciente(struct Paciente);
void telaLogin();
int main(){
    setlocale(LC_ALL, "Portuguese");
    telaLogin();
    //struct Paciente paciente;
    //preencherPaciente(paciente);
    return 0;
}
