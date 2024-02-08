#include <iostream>
using namespace std;
// Laboratorio 1 - Jeferson Alejandro Ailón Aguilar - 5090 23 1070
// Declaración de funciones
float suma(float num1, float num2);
float resta(float num1, float num2);
float multiplicacion(float num1, float num2);
float division(float num1, float num2);

int main() {
    float num1, num2, resultado;
    char operador;

    // Solicitar al usuario que ingrese los números y el operador
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese lo siguiente (Sumar (s), Restar (r), Multiplicar (m), Dividir (d)): ";
    cin >> operador;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Realizar la operación según el operador ingresado
    switch (operador) {
        case 's':
            resultado = suma(num1, num2);
            break;
        case 'r':
            resultado = resta(num1, num2);
            break;
        case 'm':
            resultado = multiplicacion(num1, num2);
            break;
        case 'd':
            // Verificar si el divisor es cero antes de realizar la división
            if (num2 != 0) {
                resultado = division(num1, num2);
            } else {
                cout << "Error: No se puede dividir por cero.\n";
                return 1;  // Salir del programa con código de error
            }
            break;
        default:
            cout << "Error: Operador no válido.\n";
            return 1;  // Salir del programa con código de error
    }

    // Mostrar el resultado de la operación
    cout << "Resultado: " << resultado << endl;

    return 0;
}

// Definición de funciones
float suma(float num1, float num2) {
    return num1 + num2;
}

float resta(float num1, float num2) {
    return num1 - num2;
}

float multiplicacion(float num1, float num2) {
    return num1 * num2;
}

float division(float num1, float num2) {
    return num1 / num2;
}
