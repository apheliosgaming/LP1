#include <iostream>
#include <list>

using namespace std;

list<int> q;

bool vazio(){
    return q.empty();
    cout << "A fila está vazia";
}

void add(int x){
    q.push_back(x);
}

void tira(){
    if(vazio()==true){
        cout << "A fila já está vazia";
    }
    else{
        q.pop_front();
    }
}

void QueueAtual(){
    if(vazio()==true){
        cout << "Não tem elementos na lista";
        return;
    }
    else{
         //auto deixa a critério do compilador decidir o tipo da variavel
        for(auto count = q.begin(); count != q.end(); count++){
            cout << *count << " ";
        }
    }
    cout << endl;
}


int main(){

    int opcao = 0;
    int opcao2;
    int x;
    cout << "Escolha o que deseja fazer com a fila\n";
    cout << "1- Adicionar números/Push back\n";
    cout << "2- Retirar números/Pop front\n";
    cout << "3- Mostrar a fila/queue\n";
    cout << "4- Para sair do programa\n";
    
    
while(opcao2 < 4){
    cin >> opcao;
    switch (opcao){
        case 1:
            cout << "Qual número?\n";
            cin >> x;
            add(x);
            break;
        case 2:
            tira();
            cout << "Retirado\n";
            break;
        case 3:
        cout << "Está é a queue atual:\n";
            QueueAtual();
            break;
        default:
            cout << "Por favor, escolha uma opção.\n";
}
}

return 0;
}
