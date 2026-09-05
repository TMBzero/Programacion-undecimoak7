#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <cmath>
#include <set>
#include <numeric>
#include <algorithm>
using namespace std;

class EstacionMeterologica {

private:

    string nombre;
    vector<double> lecturas = {};

public:
    EstacionMeterologica() {
        nombre = "Estacion sin nombre";
    }
    EstacionMeterologica(string nombre) {
        this->nombre = nombre;
    }
   
    bool registrarLectura(double temperatura) {
        if (temperatura >= -50 && temperatura <= 60) {
            lecturas.push_back(temperatura);
            return true;
        } else {
            return false;
        }
    }

    double promedio() {
        if (lecturas.size() > 0) {
        double total = accumulate(lecturas.begin(), lecturas.end(), 0.0);
        double promedio = (double)(total)/(lecturas.size());
        return promedio;
    } else {
        return 0;
    }
    }
    double maximo() {
        if (lecturas.size() > 0) {
        double maxima = *max_element(lecturas.begin(), lecturas.end());
        return maxima;
    } else {
        return 0;
    }
    }
    string getNombreEstacion() {
        return nombre;
    }
    int getCantidadLecturas() {
        return lecturas.size();
    }


};

int main() {
    string nombre;
    cin >> nombre;
    EstacionMeterologica EstacionMeterologica(nombre);
    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        string orden;
        cin >> orden;
        if (orden == "registrar") {
            double temp;
            cin >> temp;
            bool registro = EstacionMeterologica.registrarLectura(temp);
            if (registro == true) {
                cout << "Lectura registrada: " << temp << '\n';
            } else {
                cout << "Error: La temperatura debe estar entre -50 y 60" << '\n';
            }
        }
        else if (orden == "promedio") {
            double promedio = EstacionMeterologica.promedio();
            if (promedio > 0) {
                cout << "Promedio: " << promedio << '\n';
            } else {
                cout << "Sin lecturas registradas" << '\n';
            }
        }
        else if (orden == "maxima") {
            double maximo = EstacionMeterologica.maximo();
            if (maximo > 0) {
                cout << "Maxima: " << maximo << '\n';
            } else {
                cout << "Sin lecturas registradas" << '\n';
            }
        }
        else if (orden == "cantidad") {
            cout << EstacionMeterologica.getNombreEstacion() << " - lecturas registradas: " << EstacionMeterologica.getCantidadLecturas();
        }
    }  
}