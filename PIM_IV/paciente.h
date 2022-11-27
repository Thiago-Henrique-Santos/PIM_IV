struct Endereco
{
    char rua[100];
    int numero;
    char bairro[100];
    char cidade[100];
    char estado[20];
    char cep[9];
} endereco;

struct Data
{
    int dia;
    int mes;
    int ano;
} data;

struct Paciente
{
    char nome[100];
    int idade;
    char cpf[11];
    char telefone[11];
    struct Endereco endereco;
    struct Data dataNascimento;
    char email[100];
    struct Data dataDiagnostico;
    int comorbidade;
} paciente;


void preencherPaciente();
void criarArquivo(struct Paciente paciente);
void lerArquivo();
