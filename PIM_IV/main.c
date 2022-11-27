#include <stdio.h>
#include <stdlib.h>
#include "paciente1.h"

void setPaciente(struct Paciente);

int main(){
  struct Paciente paciente;
  preencherPaciente(paciente);
  return 0;
}