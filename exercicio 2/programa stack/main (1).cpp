#include <iostream>
#include "stack.hpp"

using namespace std;

int main(){

    int x = 0;
    cout << "Digite 5 números para preencher nossa stack\n";
    
    while(x < 5){
        int n;
        cin >> n;
        add(n);
        x++;
    }
    
    StackAtual();
    
    cout << "Se quiser retirar um número da pilha digite -\n";
    char n;
    cin >> n;
    
    if(n == '-'){
        cout << "Retirar números da pilha quantas vezes?\n";
        int vezes;
        cin >> vezes;
        if(vezes > 5 || vezes < 0){
            cout << "Impossível realizar essa operação\n";
        }
        else{
            int contador = 0;
            while(contador < vezes){
              tira();
              contador++;
            }
            StackAtual(); 
        }
    }

    return 0;
}