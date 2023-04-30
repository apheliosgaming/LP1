#include <iostream>
#include <fstream> // para salvar e ler arquivos
#include <map>
#include <string>

using namespace std;

// Função para escrever no arquivo
void escrever_arquivo(string nome_arquivo) {
    ofstream arquivo(nome_arquivo, ios::app); // Stream class to write on files

    string nome;
    double x, y, z;

    cout << "Digite o nome do aluno(a):\n";
    getline(cin, nome);

    cout << "Digite as três notas do aluno:\n";
    cin >> x;

    cin >> y;

    cin >> z;

    // escreve os dados do aluno no arquivo
    arquivo << nome << " " << x << " " << y << " " << z;

    arquivo.close();
}

map<string, double> ler_arquivo(string nome_arquivo) {
    ifstream arquivo(nome_arquivo); //Stream class to read from files

    string nome;
    double nota1, nota2, nota3;

    map<string, double> notas;

    
    while (arquivo >> nome >> nota1 >> nota2 >> nota3) {
        double media = (nota1 + nota2 + nota3) / 3.0;
        notas[nome] = media;
    }

    arquivo.close();

    return notas;
}

int main() {
    string nome_arquivo = "notas.txt";

    int opcao;
    
    while(opcao != 3){
        cout << "Escolha uma opção:\n";
        cout << "1 - Adicionar aluno e suas notas\n";
        cout << "2 - Imprimir média das notas dos alunos\n";
        cout << "3 - Sair\n";
        cin >> opcao;

        cin.ignore(); // ignora o caractere de quebra de linha deixado pelo cin

        switch (opcao) {
            case 1:
                escrever_arquivo(nome_arquivo);
                break;
            case 2: {
                map<string, double> notas = ler_arquivo(nome_arquivo);

                cout << "Média dos alunos:\n";
                for (auto it = notas.begin(); it != notas.end(); it++) {
                    cout << it->first << ": " << it->second << endl; 
                }

                break;
            }
            case 3:
                cout << "Fechando...";
                break;
            default:
                cout << "Por favor, escolha uma opção.\n";
                break;
        }
    }

    return 0;
}
