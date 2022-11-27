
struct Endereco
{
    char rua[100];
    int numero[8];
    char bairro[100];
    char cidade[100];
    char estado[20];
    int cep[8];
} endereco;

struct Data
{
    int dia[2];
    int mes[2];
    int ano[4];
} data;

struct Paciente
{
    char nome[100];
    int idade[2];
    char cpf[11];
    char telefone[11];
    struct Endereco endereco;
    struct Data dataNascimento;
    char email[100];
    struct Data dataDiagnostico;
    enum {diabetes=1, obesidade=2, hipertencao=3, tuberculosi=4, outros=5} comorbidade;
} paciente;


void preencherPaciente();
void criarArquivo(struct Paciente paciente);
void lerArquivo();
