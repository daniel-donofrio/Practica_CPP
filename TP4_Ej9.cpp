#include <iostream>
using namespace std;

int main() 
{
    // Declaración de variables //
    int lado;
    // Ingreso de datos //
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    // Dibujo //
    if (lado <= 0) {
        cout << "Ingrese un número de lados válido.";
    }
    for (int i=1; i<=lado; i++) 
    {
        for (int i=1; i<=lado; i++) 
        {
        cout << "*  ";
        }
        cout << endl;
    }
    
    return 0;
}