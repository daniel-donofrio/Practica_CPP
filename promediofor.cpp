#include <iostream>
using namespace std;

int main() {
    double acumulador = 0;
    double numero, resultado;
    for (int x=0; x<5; x++) {
        cout << "Ingrese un número: ";
        cin >> numero;
        acumulador = acumulador + numero;
    }
    resultado = acumulador / 5;
    cout << "El promedio de los 5 numeros ingresados es: " << resultado << endl;
    return 0;
}