#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "paciente.c"

void menu ();
void cadastrar();

int main() {
    setlocale(LC_ALL, "Portuguese");

    menu();

    return 0;
}
