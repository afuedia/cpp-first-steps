#include <iostream>
#include <locale.h>
using namespace std;

void piramideNormal(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "#";
        }
        cout << endl;
    }
}

void piramideInversa(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "#";
        }
        cout << endl;
    }
}

void diamante(int n) {
    piramideNormal(n);
    piramideInversa(n);    
}

int main()
{
    int n = 0;
    cout << "Introduce un número: ";
    cin >> n;

    int orientacion;
    cout << "Introduce 1 para ver una pirámide normal o 2 para una pirámide inversa. Introduce 3 y tendrás un diamante.: ";
    cin >> orientacion;
    switch (orientacion)
    {
    case 1:
        piramideNormal(n);
        break;

    case 2:
        piramideInversa(n);

    case 3:
        diamante(n);
    }
    return 0;
}