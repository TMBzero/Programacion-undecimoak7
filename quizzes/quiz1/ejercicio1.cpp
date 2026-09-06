
#include <iostream>
using namespace std;

int main () {
    const double e_nino = 2500;
    const double e_adulto = 4000;
    const double e_mayor = 2000;
    double edad;
    int dia;
    double recargo_Nino = e_nino/5;
    double recargo_Adulto = e_adulto/5;
    double recargo_Mayor = e_mayor/5;
    
    cout << "ingrese la edad del espectator: ";
    cin >> edad;
    cout << "ingrese el tipo de dia (1 = entre semana, 2 = fin de semana): ";
    cin >> dia;

    if (edad < 18) {
        cout << "Categoria: Nino"<< "\n";
        cout << "Precio base: " << e_nino << "\n";
        if (dia == 1) {
            cout << "Recargo : 0" << "\n";
            cout << "Total: " <<  e_nino; 
        } else {
            cout << "Recargo: " << recargo_Nino << "\n";
            cout << "Total: " << recargo_Nino + e_nino ; 
        }
               
    

    }
    if (edad >= 18 && edad <60) {
        cout << "Categoria: Adulto"<< "\n";
        cout << "Precio base: " << e_adulto << "\n";
        if (dia == 1) {
            cout << "Recargo : 0" << "\n";
            cout << "Total: " <<  e_adulto; 
        
        } else {
            cout << "Recargo: " << recargo_Adulto << "\n";
            cout << "Total: " << recargo_Adulto + e_adulto;
        }
                
    

    }
    if (edad >= 60) {
        cout << "Categoria: Adulto mayor"<< "\n";
        cout << "Precio base: " << e_mayor << "\n";
        if (dia == 1) {
            cout << "Recargo : 0" << "\n";
            cout << "Total: " <<  e_mayor; 
        
        } else {
            cout << "Recargo: " << recargo_Mayor << "\n";
            cout << "Total: " << recargo_Mayor + e_mayor; 
        }
               
    

    }


    return 0;

}