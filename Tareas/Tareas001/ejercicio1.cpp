#include <iostream> 
using namespace std;

int main() {
    const double G = 9.8;
    double y;
    double t;
    
    cout << "ingrese el tiempo que tarda en recorrer la venta: ";
    cin >> t;
    cout << "Ingrese la altura de la ventana: ";
    cin >> y;
    
        /*Procedimiento para calcular la h
        1. Tomamos como punto de referencia la parte superior de la ventana
        2. Se divide el sistema en dos sistemas diferentes para sacar la velocidad en la parte superior de la ventana
        3. La velocidad superior se define como v^2 = v₀^2 -2g(-h). Con la gravedad y la h en negativo por el cambio de la altura,
        y sale que v = (2gh)^(1/2)
        4. utilizamos la formula de y = y₀ + vt -(gt^2)/2, 
        por lo que queda v= ((gt^2)/2-y)/t
        5. se iguala y se despeja h, por lo que queda h= ((gt^2-y)/t)^2/2g*/
    if (y < 0) {
        cout << "La altura de la ventana debe ser positiva";
    } else if (t < 0) {
        cout << "El tiempo debe de ser positivo" << "\n";
    } else if (y >= 0 && t >= 0) {
        double v1 = (G*(t*t)/2); //definimos valor 1(v1) para disminuir terminos en la formula final
        double h = (((v1-y)/t)*((v1-y)/t))/(2*G);
        if (h <= 0) {
            cout << "los valores ingresados implican h <= 0; el objeto no pudo haber sido soltado por encima del borde superior de la ventan";
        } else if (h > 0) {
            cout << h << " m";
        }
        
        

    }
    
    








    return 0;
} 