#include "circulo.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int AreaCirculo(int raio){
    double area;
    area = M_PI * pow(raio, 2);
    cout << "A área do círculo é: " << area << endl;
}