struct Funcionario {
    char nome[100];
    char nascimento[11];
    char rg[14];
    int numero_endereco;
    char telefone [13];
    char email [100];
    int rua [100];
    int bairro [50];
    char cep [9];
    int cidade [30];
    int estado [2];
    int area_atuacao [20];
} funcionario;

void cadastrarFuncionario();
