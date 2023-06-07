#include <iostream>
using namespace std;

int main() 
{
    double numero, factorial;
    cout << "Ingrese un número: ";
    cin >> numero;
    for (int i=numero; i>1; i--) 
    {
        factorial=numero * (i-1);
        numero = factorial;
    }
    cout << "El factorial del número ingresado es: " << factorial << endl;
    return 0;
}