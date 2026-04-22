#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool es_palindromo(string palabra) {
    string palindromo = "";
    int largo = palabra.length();
    
    for (int i = 0; i < largo; i++) {
        palindromo += tolower(palabra[palabra.length() -1 - (i)]);
    }
    for (int i = 0; i < largo; i++) {
        palabra[i] = tolower(palabra[i]);
    }
    
    if (palindromo == palabra) {
        return true;
    } else if (palindromo != palabra) {
        return false;
    }
}

int main() {
    string palabra;
    cout << "Ingrese su palabra" << '\n';
    cin >> palabra;
    if (es_palindromo(palabra) == true) {
        cout << "'<" << palabra << ">' es palindromo" << '\n';
    } else if (es_palindromo(palabra) == false) {
        cout << "'<" << palabra << ">' no es palindromo" << '\n';
    }
}

