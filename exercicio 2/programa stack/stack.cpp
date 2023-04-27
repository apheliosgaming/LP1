#include <iostream>
#include "stack.hpp"

using namespace std;

int vetor[5];
int top = -1;

bool vazio(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }

}

void add(int n){
    if(top==4){
        cout << "Pilha está cheia\n";
    }
    else{
        top++;
        vetor[top]=n;
    }
}

void tira(){
    if(vazio() == 1){
        cout << "Pilha vazia\n";
    }
    else{
        top--;
    }
}

void StackAtual(){
    if(vazio()==1){
        cout << "Pilha vazia\n";
    }
    else{
        for(int i=0; i <= top; i++){
            cout << vetor[i] << " ";
        }
    }
}