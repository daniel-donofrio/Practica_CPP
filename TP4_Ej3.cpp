#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout << "Ingrese la cantidad de números naturales que quiera sumar: ";
    cin >> numero;
    int i=2;
    int acumulador=1;
    while (i<=numero)
    {
        acumulador = acumulador + i;
        i++;
    }
    cout << "El resultado es: " << acumulador;
    return 0;
}