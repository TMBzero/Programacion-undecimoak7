
#include <iostream>
using namespace std;

int main() {
    const double cero_Absoluto = -273.15;
    const double comp1 = 331;
    const double comp2 = 0.6;
    double T;
    double v;

    cout << "Ingrese la temperatura del aire: ";
    cin >> T;
    cout << "Ingrese la velocidad del objeto: ";
    cin >> v;
    
    if (v < 0) {
        cout << "la velocidad no puede ser negativa";
        exit(0);
    } else if (T <= cero_Absoluto) {
        cout << "La temperatura no puede ser menor o igual al cero absoluto";
        exit(0);
    }

    double vs = ((comp1) + (comp2*T));
    double M = (v/vs);
    
    if (M < 0.8) {
        cout << "vs = " << vs << " m/s" << "\n";
        cout << "M = " << M << "\n";
        cout << "Regimen: Subsonico"; 
    } else if (M >= 0.8 && M < 1.2) {
        cout << "vs = " << vs << " m/s" << "\n";
        cout << "M = " << M << "\n";
        cout << "Regimen: Transonico"; 
    } else if (M >= 1.2 && M < 5) {
        cout << "vs = " << vs << " m/s" << "\n";
        cout << "M = " << M << "\n";
        cout << "Regimen: Supersonico"; 
    } else if (M >= 5) {
        cout << "vs = " << vs << " m/s" << "\n";
        cout << "M = " << M << "\n";
        cout << "Regimen: Hipersonico"; 
    }

    return 0;



}
