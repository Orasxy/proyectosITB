//Gabriel Cardenas
//DSN01

#include <iostream>
using namespace std;

int main() {
    int d = 0, higher;

    cout << "Ingrese un numero:" << endl;
    cin >> d;

    typedef int aArray[d];
    aArray array;

    cout << "Ingrese " << d << " numeros:" << endl;
    for (int i = 0; i < d; i++){
        cout << "numero " << i+1 << " de " << d << ": ";
        cin >> array[i];
    }

    higher = array[0];

    for (int i = 0; i < d; i++) {
        if (higher < array[i]) {
            higher = array[i];
        }
    }

    cout << "El numero mayor es el " << higher << '\n';
    return 0;
}
