#include <iostream>
#include <cmath>
#include "triangulo.hpp"
#include "quadrado.hpp"
#include "circulo.hpp"
#include "retangulo.hpp"

using namespace std;

int main(){
    int x, raio, n, m;

cout << "Defina a área a ser calculada:\n";
cout << "1 - Círculo\n";
cout << "2 - Quadrado\n";
cout << "3 - Triângulo\n";
cout << "4 - Retângulo\n";

cin >> x;

if (x <= 0){
    cout << "Opcao invalida!\n";
}
else if(x == 1){
    cout << "Defina o raio:\n";
    cin >> raio;
    AreaCirculo(raio);
}
else if(x == 2){
    std::cout << "Defina o lado:\n";
    std::cin >> n;
    AreaQuadrado(n);
    
}
else if(x == 3){
    cout << "Defina a base:\n";
    cin >> n;
    cout << "Defina a altura:\n";
    cin >> m;
    AreaTriang(n, m);

}
else if(x == 4){
    cout << "Defina a base:\n";
    cin >> n;
    cout << "Defina a altura:\n";
    cin >> m;
    AreaRetangulo(n, m);

}
else{
    cout << "Opção inválida!\n";
}

return 0;
}

