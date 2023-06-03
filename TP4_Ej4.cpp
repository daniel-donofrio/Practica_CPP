#include <iostream>
using namespace std;

int main() 
{
    int numero, divisor;
    cout << "Ingrese el número del cual quiera averiguar sus divisores: ";
    cin >> numero;
    cout << "Los divisores de " << numero << " son: ";
    for (int i=1; i<=numero; i++)
    {
        if (numero%i==0) {
            cout << i;
            if (i != numero) {
                cout << ", ";
            } else {
                cout << ".";
            }
        }
    }
    return 0;
}