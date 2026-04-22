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
} // se comprueban los 3 casos y que se cumpla en los tres, si en uno solo no se comple, retorna false
}

string tipo_triangulo(int a, int b, int c) {
    if (a==b && a==c) { //si todos son iguales
        return "Equilatero";
    } else if ((a == b && a != c) || (b == c && b != a) || (a == c && a != b)) { // si solo 2 son iguales, con los 3 casos
        return "Isosceles";
    } else { // si ninguno se cumple, los 3 diferentes
        return "escaleno";
    }

}

int calcular_perimetro(int a, int b, int c) {
    return a+b+c; //se suman para el perimetro

}

void describir_triangulo(int a, int b, int c) {
    string Tipo; // definimos variables
    int perimetro; 
    if (es_valido(a, b, c) == true) { // llamamos y validamos
        Tipo = tipo_triangulo(a, b, c); // llamamos y definimos al tipo
        perimetro = calcular_perimetro(a, b, c); // llamamos y definimos el perimetro
        cout << "Tipo: " << Tipo << '\n'; // imprimimos
        cout << "Perimetro: " << perimetro << '\n'; // imprimimos
    } else {
        cout << "Triangulo invalido" << '\n'; // si no es valido, lo indica y salta las llamadas
    }
    

}

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c; // definimos e ingresamos 
    describir_triangulo(a, b, c); // llamamos a la funcion 
}





