#include <iostream>
using namespace std;

int main() {
    //Declaración de variable
    int numero;

    //Entrada del usuario
    cout << "Ingrese un número: ";
    cin >> numero;

    //Cálculo del cuadrado
    int cuadrado = numero * numero;

    //Salida del resultado
    cout << "El cuadrado de " << numero << " es: " << cuadrado << endl;

    return 0;
}
