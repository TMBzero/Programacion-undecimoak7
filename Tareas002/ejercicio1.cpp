#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool es_palindromo(string palabra) {
    string palindromo = ""; // string para darle vuelta a la palabra
    int largo = palabra.length(); // largo de la palabra
    
    for (int i = 0; i < largo; i++) {
        palindromo += tolower(palabra[palabra.length() -1 - (i)]); // se le concatena el ultimo caracter en minuscula
    }
    for (int i = 0; i < largo; i++) {
        palabra[i] = tolower(palabra[i]); // convertimos en minusculas toda la palabra
    }
    
    if (palindromo == palabra) {
        return true; // si son iguales retorna true
    } else if (palindromo != palabra) {
        return false; // si son diferentes retorna false
    }
}

int main() {
    string palabra; // definimos la palabra
    cout << "Ingrese su palabra" << '\n';
    cin >> palabra; // se ingresa la palabra
    if (es_palindromo(palabra) == true) { // si la funcion retorna true, se indica que es palindromo
        cout << "'<" << palabra << ">' es palindromo" << '\n';
    } else if (es_palindromo(palabra) == false) {
        cout << "'<" << palabra << ">' no es palindromo" << '\n';
    }
}

