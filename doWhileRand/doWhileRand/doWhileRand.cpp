#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));  // Initialize random seed
    int nSecreto = rand() % 100 + 1;  // Generate a random number between 1 and 100
    int intento;
    int contadorIntentos = 0;
    int intentosPermitidos = 6;

    cout << "Adivina el número del 1 al 100\n";

    do {
        cout << "Inténtalo: ";
        cin >> intento;
        contadorIntentos++;

        if (intento < nSecreto) {
            cout << "No, el número que debes adivinar es mayor que " << intento << endl;
        }
        else if (intento > nSecreto) {
            cout << "No, el número que debes adivinar es menor que " << intento << endl;
        }
        else {
            cout << "¡Acertaste, eres superdotado!\n";
            break;
        }

        if (contadorIntentos == intentosPermitidos) {
            cout << "Lo siento, se te acabaron los intentos. El número secreto era " << nSecreto << endl;
            break;
        }
    } while (intento != nSecreto && contadorIntentos < intentosPermitidos);

    return 0;
}
