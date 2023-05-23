#include <iostream>
using namespace std;

int main() {
    char tipoMembresia;
    float importeCompra;

    cout << "Ingrese el importe total de la compra: ";
    cin >> importeCompra;

    cout << "Ingrese el tipo de membresía del cliente: ";
    cin >> tipoMembresia;

    if (tipoMembresia == 'A'|| tipoMembresia == 'a') {
        cout << "El importe de la compra con descuento es de: " << importeCompra * 0.90 << endl;
    } else if (tipoMembresia == 'B'||tipoMembresia == 'b') {
        cout << "El importe de la compra con descuento es de: " << importeCompra * 0.85 << endl;
    } else if (tipoMembresia == 'C'|| tipoMembresia =='c') {
        cout << "El importe de la compra con descuento es de: " << importeCompra * 0.80 << endl;
    } else {
        cout << "Ingrese un tipo de membresía válido." << endl;
    }
    return 0;
}