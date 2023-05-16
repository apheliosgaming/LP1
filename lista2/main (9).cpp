#include <iostream>
#include <vector>

using namespace std;

class Aluno
{
    string nomeCompleto;
    string cpf;
    string idade;
    string serie;
    long int matricula;

public:
    Aluno() //construtor vazio
    {
    }

//construtor parametrizado
Aluno(string nomeCompleto, string cpf, long int matricula, string idade, string serie)
    {
        this->nomeCompleto = nomeCompleto;
        this->cpf = cpf;
        this->matricula = matricula;
        this->idade = idade;
        this->serie = serie;
    }

// gets e sets

    string getNome()
    {
        return this->nomeCompleto;
    }
    void setNome(string nomeCompleto)
    {
        this->nomeCompleto = nomeCompleto;
    }
    string getCpf()
    {
        return this->cpf;
    }
    void setCpf(string cpf)
    {
        this->cpf = cpf;
    }

    string getSerie(){
        return this->serie;
    }
    void setSerie(string serie){
        this->serie = serie;
    }

    long int getMatricula()
    {
        return this->matricula;
    }
    void setMatricula(long int matricula)
    {
        this->matricula = matricula;
    }

    string getIdade()
    {
        return this->idade;
    }
    void setIdade(string idade)
    {
        this->idade = idade;
    }

};


class Funcionario
{
    string nomeCompleto;
    string cpf;
    string idade;
    string cargo;
    long int matricula;
    float salario;

public:

// construtor vazio
    Funcionario()
    {
    }

//construtor parametrizado
Funcionario(string nomeCompleto, string cpf, string idade, string cargo, long int matricula, float salario){
    this->nomeCompleto = nomeCompleto;
    this->cpf = cpf;
    this->idade = idade;
    this->cargo = cargo;
    this->matricula = matricula;
    this->salario = salario;
}

//gets e sets

    string getNome()
    {
        return this->nomeCompleto;
    }
    void setNome(string nomeCompleto)
    {
        this->nomeCompleto = nomeCompleto;
    }
    string getCpf()
    {
        return this->cpf;
    }
    void setCpf(string cpf)
    {
        this->cpf = cpf;
    }

    string getCargo(){
        return this->cargo;
    }
    void setCargo(string cargo){
        this->cargo = cargo;
    }

    long int getMatricula()
    {
        return this->matricula;
    }
    void setMatricula(long int matricula)
    {
        this->matricula = matricula;
    }

    string getIdade()
    {
        return this->idade;
    }
    void setIdade(string idade)
    {
        this->idade = idade;
    }
    float getSalario(){
        return this->salario;
    }
    void setSalario(float salario){
        this->salario = salario;
    }
};
    
class Escola
{
    string nomeEscola;
    string cnpj;
    Funcionario *funcs = new Funcionario[5];
    Aluno *alunos = new Aluno[10];
    int con = 0;
    int c = 0;

public:
    Escola(string nomeEscola, string cnpj)
    {
        this->nomeEscola = nomeEscola;
        this->cnpj = cnpj;
    }

// gets e sets

 string getNome()
    {
        return this->nomeEscola;
    }
    void setNome(string nomeEscola)
    {
        this->nomeEscola = nomeEscola;
    }
    string getCnpj()
    {
        return this->cnpj;
    }
    void setCnpj(string cnpj)
    {
        this->cnpj = cnpj;
    }
    
// funções

void listarAlunos() {
        cout << "###### Alunos ######" << endl;
        for (int i = 0; i < c; i++) {
            cout << i+1 << " - Nome completo: " << alunos[i].getNome() << endl; 
            cout << "CPF: " << alunos[i].getCpf() << endl;
            cout << "Idade: " << alunos[i].getIdade() << endl;
            cout << "Série: " << alunos[i].getSerie() << endl;
            cout <<"Matrícula: " << alunos[i].getMatricula() << endl;
        }
    };
    
void listarFuncs() {
        cout << "###### Funcionarios ######" << endl;
        for (int i = 0; i < con; i++) {
            cout << i+1 << " - Nome completo: " << funcs[i].getNome() << endl;
            cout << "CPF: " << funcs[i].getCpf() << endl;
            cout << "Idade: " << funcs[i].getIdade() << endl;
            cout << "Cargo: " << funcs[i].getCargo() << endl;
            cout << "Matrícula: " << funcs[i].getMatricula() << endl;
            cout << "Salário: " << funcs[i].getSalario() << endl;
        }
    };

void AddAluno(string nomeCompleto, string cpf, string idade, string serie, long int matricula){
    if(c < 10){
        alunos[c].setNome(nomeCompleto);
        alunos[c].setCpf(cpf);
        alunos[c].setIdade(idade);
        alunos[c].setMatricula(matricula);
        alunos[c].setSerie(serie);
        c++;
    }
    else{
        cout << "Limite de alunos já preenchido\n";
    }
};

void AddFunc(string nomeCompleto, string cpf, string idade, string cargo, long int matricula, float salario){

    if(con < 5){
        funcs[con].setNome(nomeCompleto);
        funcs[con].setCpf(cpf);
        funcs[con].setIdade(idade);
        funcs[con].setCargo(cargo);
        funcs[con].setMatricula(matricula);
        funcs[con].setSalario(salario);
        con++;
    }
    else{
        cout << "Limite de Funcionários já preenchido.\n";
    }
};

float SomaSalario(){
    float soma = 0;
    for(int i = 0; i < 5; i++){
        soma += funcs[i].getSalario();
    }
    return soma;
    
}

};
    
int main(){
    int opcao;

    Escola *QSMP = new Escola("ahhh_sla", "666.666");
    QSMP->AddAluno("Pactw", "078.874.874-13", "ideal","terceirao", 13133.13);
    QSMP->AddFunc("Vinicius13", "874.454.784-98", "321", "minecrafter", 1280.00, 13000);
    QSMP->AddFunc("Mike", "078.874.874-14", "70", "cientista", 9976.82, 100000);
    
    QSMP->listarAlunos();

    QSMP->listarFuncs();


    float salarios = QSMP->SomaSalario();
    
    cout << "\nTotal dos salários: " << salarios << endl;
    
    while(0==0){
    cout << "\nDeseja fazer alguma ação?\n";
    cout << "1 - Listar Alunos\n";
    cout << "2 - Listar Funcionários\n";
    cout << "3 - Adicionar alunos\n";
    cout << "4 - Adicionar Funcionários\n";
    cout << "5 - Mostrar a soma dos salários dos funcionários\n";
    cout << "6 - Não deseja fazer ação alguma\n";
    
    cin >> opcao;
    if(opcao == 1){
        QSMP->listarAlunos();
    }
    else if(opcao == 2){
        QSMP->listarFuncs();
    }
    else if(opcao == 3){
        string nomeCompleto, cpf, idade, serie;
        long int matricula;

        cout << "Qual o nome completo do aluno?\n";
        getline(cin >> ws, nomeCompleto);
        cout << "Qual o CPF do aluno?\n";
        getline(cin >> ws, cpf);
        cout << "Qual a idade do aluno?\n";
        getline(cin >> ws, idade);
        cout << "Qual a série do aluno?\n";
        getline(cin >> ws, serie);
        cout << "Qual será a matrícula do aluno?\n";
        cin >> matricula;

        QSMP->AddAluno(nomeCompleto, cpf, idade, serie, matricula);
    }
    else if(opcao == 4){
        string nomeCompleto, cpf, idade, cargo;
        float salario;
        long int matricula;

        cout << "Qual o nome completo do funcionário?\n";
        getline(cin >> ws, nomeCompleto);
        cout << "Qual o CPF do funcionário?\n";
        getline(cin >> ws, cpf);
        cout << "Qual a idade do funcionário?\n";
        getline(cin >> ws, idade);
        cout << "Qual o cargo do funcionário?\n";
        getline(cin >> ws, cargo);
        cout << "Qual será a matrícula do funcionário?\n";
        cin >> matricula;
        cout << "Qual será o salário do funcionário\n";
        cin >> salario;

        QSMP->AddFunc(nomeCompleto, cpf, idade, cargo, salario, matricula);
    }
    else if(opcao == 5){
        float salarios2 = QSMP->SomaSalario();
         cout << "\nTotal dos salários: " << salarios2 << endl;
    }
    else if(opcao == 6){
        cout << "Encerrando o programa...";
        break;
    }
    else{
        cout << "Por favor, digite um número válido.\n";
    }
}
    

    return 0;
}