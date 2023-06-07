#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese el número que desea averiguar si es primo: ";
    cin >> numero;
    int contador=0;
    for (int x=1; x<=numero; x++) {
        if (numero%x == 0) {
            contador++;
        }
    }
    if (contador==2) {
        cout<< "El número es primo.";
        } else{
            cout << "El número no es primo.";
        }
    return 0;
}
