#include <iostream>

using namespace std;

// funçao recursiva
int potencia(int base, int expoente){
    if(expoente == 0){
        return 1;
    }
    else{
        return base * potencia(base, expoente - 1);
    }
}

int main(){
    int base, expoente;
    cout << "Digite os valores da base e expoente, respectivamente.\n";
    cin >> base;
    cin >> expoente;

    cout << "Valor da potência:\n";
    cout << potencia(base,expoente);


    return 0;
}