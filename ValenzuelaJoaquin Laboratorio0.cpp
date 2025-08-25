#include <iostream>
#include <string>
using namespace std;

// Función para determinar si un número es par
bool esPar(int numero) {
    return (numero % 2 == 0);
}

// Función para calcular la longitud de un string
int longitudString(string texto) {
    return texto.length();
}

int main() {
    //  Parte 1: Leer un número y mostrarlo 
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    cout << "El número ingresado es: " << numero << endl;

    //  Parte 2: Determinar si el número ingresado es par o impar 
    if (esPar(numero)) {
        cout << numero << " es par." << endl;
    } else {
        cout << numero << " es impar." << endl;
    }

    //  Parte 3: Usar la función esPar con números del 1 al 10 
    cout << "\nNúmeros del 1 al 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " -> " << (esPar(i) ? "par" : "impar") << endl;
    }

    //  Parte 4: Determinar la longitud de un string ingresado por el usuario 
    string textoUsuario;
    cout << "\nIngrese un texto: ";
    cin.ignore(); // Limpiar buffer
    getline(cin, textoUsuario);
    cout << "La longitud de \"" << textoUsuario << "\" es: " << longitudString(textoUsuario) << endl;

    //  Parte 5: Determinar la longitud de un string fijo 
    string textoFijo = "Bioinformatica";
    cout << "La longitud de \"" << textoFijo << "\" es: " << longitudString(textoFijo) << endl;

    return 0;
}
