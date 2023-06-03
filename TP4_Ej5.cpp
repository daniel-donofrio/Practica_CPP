#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string palabra;
    cout << "Ingrese una palabra que no supere los 10 caracteres: ";
    cin >> palabra;
    int i=0;
    if (palabra.length()>10) {
        cout << "La palabra supera los 10 caracteres.";
    } else {
        do
    {
       cout << palabra[i]<<endl;
       i++;
    } while (i<palabra.length());   
    }
     
    return 0;
}