#include <iostream>
using namespace std;

int main() 
{
    //Declaro las variables.
    int Numero1, Numero2;
    
    //Solicito los datos
    cout << "Ingresar un número entero: ";
    cin >> Numero1;
    cout << "Ingresar el segundo número entero: ";
    cin >> Numero2;

    //Verifico cual número es mayor y lo muestro en pantalla.
    if (Numero1 < Numero2) 
    {
        cout << "El numero menor es: " << Numero1;
    } 
    else 
    {
        cout << "El número menor es: " << Numero2;
    }

    return 0;
}