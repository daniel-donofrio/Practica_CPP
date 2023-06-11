#include <iostream>
using namespace std;

int main() 
{
    // Declaración de variables //
    int lado;
    int espacios = lado - 2;
    // Ingreso de datos //
    cout << "Ingrese el lado del cuadrado: ";
    cin >> lado;
    // Validación //
    if (lado <= 0) {
        cout << "Ingrese un número de lados válido.";
    }
    // Dibujo //
    for (int i = 1; i <= lado; i++)
    {
        cout << "*  ";
    }
    cout << endl;
    for (int i = 1; i <= espacios; i++)
    {
        cout << "*  ";
        for (int i = 1; i <= espacios; i++)
        {
            cout << "   ";
        }
        cout << "*  " << endl;
    }
    for (int i = 1; i <= lado; i++)
    {
        cout << "*  ";
    }
    cout << endl;
    return 0;
}