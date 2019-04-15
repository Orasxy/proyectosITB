#include<iostream>
#include <stdlib.h>

using namespace std;
const int MAX = 10;

struct stArray
{
	int elementos[MAX];
	int count = 0;
} array;

void insertar()
{
    int x, y;
    cout << "\t>> Que elemento desea insertar: ";
    cin >> x;
    cout <<"\t>> En que posicion desea insertar: ";
    cin >> y;
    for(int i = array.count - 1; i >=y ;i--)
    {
        array.elementos[i+1] = array.elementos[i];
        if(y == i)
            array.elementos[y] = x;
    }
}

void eliminar()
{
    int x;
    cout << "\t>> Que posicion desea eliminar: "; cin >> x;
    for(int i = x; i < array.count; i++)
        array.elementos[i] = array.elementos[i+1];
    array.count--;
}

void agregar()
{
    int x;
    cout << "\t>> Que elemento desea agregar : ";
    cin >> x;
    array.elementos[array.count] = x;
    array.count++;
}


int main()
{

    int op;
    bool run = true;

    while (run) {
        system("cls");
        cout << "MENU PRINCIPAL\n\n";
    	cout << "1. Agregar.\n";
    	cout << "2. Insertar.\n";
    	cout << "3. Eliminar.\n";
        cout << "4. Salir.\n";

        cout << "\nContenido actual del array: [";
        for (int i = 0; i < MAX; i++)
            cout << array.elementos[i] << " ";
        cout << "]" << '\n';

        cout << "\nElija una opcion [1 - 4]: --> ";
        cin >> op;

        switch (op) {
            case 1: agregar(); break;
            case 2: insertar(); break;
            case 3: eliminar(); break;
            case 4: run = false; break;
        }

    }
    return 0;
}
