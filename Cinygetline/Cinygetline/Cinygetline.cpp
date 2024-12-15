#include <iostream>  // Biblioteca para la entrada y salida de datos (ej: cout, cin)
#include <string>    // Biblioteca para el uso de cadenas (strings)

using namespace std; // Esto permite usar elementos del namespace `std` sin tener que poner `std::` cada vez

int main() {
    // Declaramos dos variables de tipo string para almacenar el nombre y el apellido
    string nombre, apellido;

    // Solicitar al usuario que introduzca su nombre
    // `cout` se usa para mostrar un mensaje en pantalla
    cout << "Por favor, introduce tu nombre: ";

    // `getline` se usa para leer una línea completa de texto (incluye espacios)
    // Aquí leemos el nombre del usuario
    getline(cin, nombre);

    // Solicitar al usuario que introduzca su apellido
    cout << "Por favor, introduce tu apellido: ";

    // De nuevo, usamos `getline` para leer el apellido
    getline(cin, apellido);

    // Concatenar (unir) el nombre y apellido con un espacio en medio
    // Guardamos el resultado en la variable `nombreCompleto`
    string nombreCompleto = nombre + " " + apellido;

    // Mostrar el nombre completo
    cout << "Tu nombre completo es: " << nombreCompleto << endl;

    // Acceder a la primera letra del nombre (la inicial)
    // `nombre[0]` accede al primer carácter de la cadena `nombre`
    cout << "La inicial de tu nombre es: " << nombre[0] << endl;

    // Con el siguiente buble construyo una nueva variable string en la que se elimina espacios y guiones del nombre
    string nombreSinEspacios = "";  // Aquí declaro la variable que nombro en el último comentario
    for (char c : nombre) {
        if (c != ' ' && c != '-') { // Solo añadimos el carácter si no (!=) es un espacio o un guion
            nombreSinEspacios += c;
        }
    }

    // Y para acabar, mando imprimir (cout) el resultado de aplicar la función .length()
    cout << "La cantidad de caracteres de tu nombre (sin contar espacios ni guiones) es: " << nombreSinEspacios.length() << endl;

    return 0;
}
