//Gabriel Cardenas
//DSN01

#include <iostream>
using namespace std;

int main() {
    unsigned int dimension = 0, result = 0;
    cout << "Ingrese el numero de calificaciones a evaluar, tenga en cuenta que ";
    while (dimension <= 0) {
        cout << "el numero debe ser mayor a 0" << endl;
        cin >> dimension;
    }

    typedef int aNotes[dimension];
    aNotes noteA, noteB;

    cout << "A continuacion ingrese las calificaciones:" << endl;
    for (int i = 0; i < dimension; i++){
        cout << "Nota " << i+1 << " de " << dimension << ": ";
        cin >> noteA[i];
    }

    cout << endl << "Primeras Notas:" << endl ;
    for (int i = 0; i < dimension; i++){
        noteB[i] = noteA[dimension-i-1];
        std::cout << "nota " << i+1 << " : "<< noteA[i] << endl;
    }

    cout << endl << "Notas Invertidas:" << endl ;
    for (int i = 0; i < dimension; i++){
        cout << "nota " << i+1 << " : "<< noteB[i] << endl;
        result += noteA[i];
    }

    cout << endl << "El promedio es: " << result << endl;

    return 0;
}
