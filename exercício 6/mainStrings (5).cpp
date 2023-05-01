#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){

    int n;
    ofstream arquivo("musicas.txt");

    cout << "Insira o número de músicas e que estarão na playlist.\n";
    cin >> n;
    string nomes[n];

    cout << "Insira o nome de cada música\n";
    
    if (arquivo.is_open()) {
        cin.ignore();
        for(int i = 0; i < n; i++){
            getline(cin, nomes[i]);
            for(auto&& musica : nomes[i]){
                arquivo << musica << "\n";
                
        }
        }
            arquivo.close();
    }
    else{
        cout << "Erro ao abrir arquivo!";
        return 1;
    }

    cout << "Escolha qual das músicas o programa deve selecionar\n";
    
    ifstream arquivo_leitura("musicas.txt");
    
    int p = 0;
    
    
    if (arquivo_leitura.is_open()) {
        string escolhida;
        getline(cin,escolhida);
        //cout << escolhida;
       
        for(int i = 0; i < n; i++){
            if(nomes[i] == escolhida){
                cout << "A música escolhida é:\n";
                cout << nomes[i];
                p++;
        }
    }
        if(p == 0){
            cout << "Música não existe na playlist do arquivo\n";
    }
        arquivo_leitura.close();
    }
    else{
        cout << "Erro ao abrir arquivo\n";
        return 1;
    }
    
return 0;

}
