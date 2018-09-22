//Gabriel Cardenas
//DSN01

#include <iostream>
using namespace std;

int main() {
    int d = 0, mayor, menor;

    cout << "Digite el numero de valores a ingresar:" << "\n";
    cin >> d;

    int array[d];
    cout << "Ingrese los " << d << " numeros:" << "\n";
    for (int i = 0; i < d; i++){
        cout << "numero " << i+1 << " de " << d << ": ";
        cin >> array[i];
    }

    mayor = menor = array[0];
    for (int i = 1; i < d; i++) {
        if (array[i] > mayor)
            mayor = array[i];
        if (array[i] < menor)
            menor = array[i];
    }

    cout << "El numero mayor es el " << mayor << "\n";
    cout << "El numero menor es el " << menor << "\n";
    return 0;
}
