#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string,int> map;
    // poderia ser const char* em vez da string

cout << "Digite o nome do aluno\n";

string nome;
/*
std::string strtmp;
cin >> strtmp;
const char* mapa = strtmp.c_str();
maneira de obter um nome sem #include <string>
*/

getline(cin,nome);

cout << "Digite as três notas do aluno\n";

int x, y, z;
cin >> x;
cin >> y;
cin >> z;

    map["notas"] = (x + y + z)/3;
   int total;
   float media;

   for(auto c = map.begin(); c != map.end(); c++){
    total = c->second;
    // c->second indica que a variável está apontando pra o segundo valor do map,
    //nesse caso as notas
   }
   media = total/map.size();

    cout << "A média dos alunos é:\n";
   
    cout << media;

    return 0;
}