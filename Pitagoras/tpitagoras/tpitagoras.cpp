#include <iostream>  // Biblioteca para entrada y salida estándar (cout, cin)
#include <cmath>     // Biblioteca para funciones matemáticas como hypot(), sqrt() y pow()

using namespace std;

int main() {
    // Declaración de variables para los catetos (uso double por si acaso hay decimales)
    double cateto1, cateto2;

    // Solicitar al usuario que introduzca los dos catetos
    cout << "Introduce el valor del primer cateto: ";
    cin >> cateto1;  // Leer el valor del primer cateto

    cout << "Introduce el valor del segundo cateto: ";
    cin >> cateto2;  // Leer el valor del segundo cateto

    // Cálculo de la hipotenusa utilizando la función hypot()
    // La función hypot(cateto1, cateto2) calcula directamente la hipotenusa usando el teorema de Pitágoras
    double hipotenusa_hypot = hypot(cateto1, cateto2);

    // Mostrar el resultado de la hipotenusa calculada con hypot()
    cout << "La hipotenusa (usando la función hypot) es: " << hipotenusa_hypot << endl;

    // Cálculo manual de la hipotenusa usando pow() para elevar al cuadrado y sqrt() para obtener la raíz cuadrada
    // Primero calculamos el cuadrado de los catetos (cateto1^2 y cateto2^2)
    double cateto1_cuadrado = pow(cateto1, 2);
    double cateto2_cuadrado = pow(cateto2, 2);

    // Luego sumamos los cuadrados y sacamos la raíz cuadrada del resultado
    double hipotenusa_manual = sqrt(cateto1_cuadrado + cateto2_cuadrado);

    // Mostrar el resultado de la hipotenusa calculada manualmente
    cout << "La hipotenusa (calculada manualmente con sqrt y pow) es: " << hipotenusa_manual << endl;

    return 0;
}