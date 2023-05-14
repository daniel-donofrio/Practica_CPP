#include <iostream>
using namespace std;

int main() {
    int num1 = 2, num2 = 5;
    int resultado = num1 + num2;
    cout << "La suma de los números es: " << resultado << endl;

    num1 = 10;
    resultado = num1 - num2;
    cout << "La resta de los números es: " << resultado << endl;

    resultado = num1 / num2;
    cout << "La división de los números es: " << resultado << endl;
    return 0;
}