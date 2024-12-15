#include <iostream>
#include <string>
#include <locale.h>
#include <windows.h>
using namespace std;


int main() {
	setlocale(LC_ALL, "UTF-8");
	int respuesta = 0;
	int suma = 14;
	int i = 0;
	const int numeroIntentos = 3; // Defino una constante para facilitar modificar el número de intentos

	do {
			if (i > 0) {
			cout << "Has fallado, prueba de nuevo...\n";
		}
		Sleep(3000);
		system("cls");
		cout << "\nPara verificar que eres humano, por favor ingresa el resultado de 5 + 9: \n";
		cin >> respuesta;
		i++;

	} while (respuesta != suma && i < numeroIntentos);
	
	if (suma == respuesta) {
		cout << "Enhorabuena !! Bienvenido";
		return 0;
	}
	cout << "Eres un bot. Fuera!";

	return 0;
}