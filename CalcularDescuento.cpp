#include <iostream>
using namespace std;

int main () {
    float importeVenta, litrosVendidos, importeFinal;

    cout << "Ingresar el importe total de la venta: ";
    cin >> importeVenta;
    cout << "Ingresar la cantidad de litros vendidos: ";
    cin >> litrosVendidos;

    if (litrosVendidos > 500) {
        importeFinal = importeVenta * 0.75;
        cout << "El importe final es: " << importeFinal;
    } else if (litrosVendidos <= 500 && litrosVendidos >= 301) {
        importeFinal = importeVenta * 0.85;
        cout << "El importe final es: " << importeFinal;
    } else if (litrosVendidos <= 300 && litrosVendidos >= 101) {
        importeFinal = importeVenta * 0.90;
        cout << "El importe final es: " << importeFinal;
    } else {
        importeFinal = importeVenta;
        cout << "El importe final es: " << importeFinal;
    }
    return 0;
}