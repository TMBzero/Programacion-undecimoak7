#include <iostream>
using namespace std;

int main() {
    
    int kWh; 
    int tarifa;

    cout << "Ingrese su consumo mensual en kWh: ";
    cin >> kWh;
    cout << "ingrese si tiene tarifa social (1 para si, 0 para no): ";
    cin >> tarifa;

    if (kWh <= 200) {
        cout << "subtotal: " << kWh*75 << "\n";
        if (tarifa == 1) {
            cout << "Descuento: " << (kWh*2)/5<< "\n";
            cout << "Total: " << kWh*75 - (kWh*2)/5 << "\n";
    } else {
        cout << "Descuento: 0" << "\n";
        cout << "Total: " << kWh*75;
    }
    } 
    
    else if (kWh > 200 && kWh <= 400) {
        cout << "subtotal: " << ((kWh-200)*110 + (200*75)) << "\n";
        if (tarifa == 1) {
            cout << "Descuento: " << ((kWh-200)*110 + (200*75))/5<< "\n";
            cout << "Total: " <<((kWh-200)*110 + (200*75)) - ((kWh-200)*110 + (200*75))/5 << "\n";
    } else {
        cout << "Descuento: 0" << "\n";
        cout << "Total: " << ((kWh-200)*110 + (200*75));
    }
    }
    
}
