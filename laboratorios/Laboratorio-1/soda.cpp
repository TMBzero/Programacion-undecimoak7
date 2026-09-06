
#include <vector>
#include <iostream>
#include <utility>
#include <string>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

int main() {

    const int N = 2;
    vector <pair<int, string>> pedidos;
    queue<string> orden;
    stack<string> historial;
    for (int i = 0; i < N; i++) {
        string nom;
        int cost;

        cin >> nom >> cost;

        pedidos.push_back({cost, nom});
        orden.push(nom);
    }

    sort(pedidos.begin(), pedidos.end());
    cout << "Pedidos ordenamos por monto: " << '\n';
    for (const auto& p : pedidos) {
        cout << p.second << ": " << p.first<< '\n';
    }

    auto mayor = max_element(pedidos.begin(), pedidos.end());

    cout << "Pedido mayor: " << mayor->second << " (" << mayor->first << ')' << '\n';

    string duda;
    cin >> duda;

    
    for (const auto& p : pedidos) {
        if (p.second == duda) {
            cout << duda << " pidio por " << p.first << " colones" << '\n';
        }
    }

    for (int i = 0; i < N; i++) {
        string aten = orden.front();
        orden.pop();

        cout << "Atendido: " << aten << '\n';

        historial.push(aten);
    }

    string mensaje;
    cin >> mensaje;

    if (mensaje == "deshacer") {
        string ultimo = historial.top();
        historial.pop();

        orden.push(ultimo);
        cout << ultimo << " vuelve a la fila" << '\n';
    }
}


