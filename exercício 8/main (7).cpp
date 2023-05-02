#include <iostream>

using namespace std;

int somaRecursiva(int n, int m){
    if(n < m){
        return n + somaRecursiva(++n, m); //soma dos valores
    }
    else{
        return 0;
    }
}

int main(){
    int A, B;
    int resultado;

    cout << "Informe o valor de A\n";
    cin >> A;

    cout << "Informe o valor B, o máximo\n";
    cin >> B;

    resultado = somaRecursiva(A, B);
    cout << resultado;

    return 0;
}