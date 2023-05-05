#include <iostream>
using namespace std;

int main() {
    float numero1, numero2;
    //Pido los datos
    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese el segundo número: ";
    cin >> numero2;
    //Verifico qué número es mayor o si son iguales.
    if (numero1 > numero2) {
        cout << "El número mayor es: " << numero1;
    } else if (numero1 < numero2) {
        cout << "El número mayor es: " << numero2;
    } else {
        cout << "Los números son iguales.";
    }

    return 0;
}