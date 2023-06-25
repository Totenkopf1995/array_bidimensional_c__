#include <iostream>
using namespace std;

int main() {

    int miMatriz[2][2];
    int contador = 1;

    for (int fila = 0; fila < 2; ++fila) {

        for (int columna = 0; columna < 2; ++columna) {

            cout << "Escribe el número " << contador << "["<< fila <<"]" << "["<< columna <<"]" <<": ";
            cin >> miMatriz[fila][columna];
            contador++;
        }
    }

    cout << "Visualizamos valores:" << endl;

    for (int fila = 0; fila < 2; ++fila) {

        for (int columna = 0; columna < 2; ++columna) {

            cout << miMatriz[fila][columna] << " ";
        }
        cout << endl;
    }

    return 0;
}
