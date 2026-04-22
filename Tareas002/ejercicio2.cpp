#include <cmath>
#include <iostream>
#include <string>
using namespace std;


bool es_valido(int a, int b, int c) {
    if (a+b > c){
        if (b+c > a) {
            if (c+a > b){
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        return false;
}
}

string tipo_triangulo(int a, int b, int c) {
    if (a==b && a==c) {
        return "Equilatero";
    } else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b)) {
        return "Isosceles";
    } else {
        return "escaleno";
    }

}

int calcular_perimetro(int a, int b, int c) {
    return a+b+c;

}

void describir_triangulo(int a, int b, int c) {
    string Tipo;
    int perimetro;
    if (es_valido(a, b, c) == true) {
        Tipo = tipo_triangulo(a, b, c);
        perimetro = calcular_perimetro(a, b, c);
        cout << "Tipo: " << Tipo << '\n';
        cout << "Perimetro: " << perimetro << '\n';
    } else {
        cout << "Triangulo invalido" << '\n';
    }
    

}

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    describir_triangulo(a, b, c);
}





