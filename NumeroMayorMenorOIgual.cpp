#include <iostream>
using namespace std;

int main() {
    //Declaro las variables.
    float Numero;

    //Solicito datos.
    cout << "Ingrese un número: ";
    cin >> Numero;

    //Verifico si el número ingesado es mayor, menor o igual a 10.
    if (Numero > 10) 
    {
        cout << "El número es mayor a 10." << endl;
    } 
    else if (Numero < 10) 
    {
        cout << "El número es menor a 10." << endl;
    } 
    else 
    { 
        cout << "El número es igual a 10." << endl;
    }
   
    return 0;
}