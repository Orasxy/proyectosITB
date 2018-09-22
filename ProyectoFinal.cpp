#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

const int MAX = 50, MAT = 10;

struct stMaterias
{
	string nombre[MAT];
	int nota[MAT];
	int count = 0;
};

struct stAlumno
{
	string nombre;
	string apellido;
	int edad;
	char genero;
	stMaterias materias;
	int promedio;
};

struct stLista
{
	stAlumno alumno[MAX];
	int count = 0;
} lista;

void agmaterias(int p)
{
	cout << "ingrese el numero de las materias cursadas: " << "\n";
	int d, r=0;
	cin >> d;
	cout << "detallelas acontinuacion" << "\n";
	for (int i = 0; i < d; i++)
	{
		cout << "Nombre: ";
		cin >> lista.alumno[p].materias.nombre[i];
		cout << "Calificacion: ";
		cin >> lista.alumno[p].materias.nota[i];
		lista.alumno[p].materias.count++;
		r += lista.alumno[p].materias.nota[i];
	}
	lista.alumno[p].promedio = (r/lista.alumno[p].materias.count++);
}

int promedio(){
	int r = 0, s;
	for (int i=0; i<lista.count; i++){
		r+= lista.alumno[i].promedio;
	}
	s = r/lista.count;
	return s;
}

void agregar(int p)
{
	cout << "Nombre: ";
	cin >> lista.alumno[p].nombre;
	cout << "Apellido: ";
	cin >> lista.alumno[p].apellido;
	cout << "Edad: ";
	cin >> lista.alumno[p].edad;
	cout << "Genero (m para masculino, f para femenino): ";
	cin >> lista.alumno[p].genero;
	agmaterias(p);
	lista.count++;
	cout << "El alumno " << lista.alumno[p].nombre << lista.alumno[p].apellido << " " << "ha sido ingresado." << '\n';
	getch();
}

void alista()
{
	for (int i = 0; i < lista.count; i++)
	{
		cout << lista.alumno[i].nombre << " ";
		cout << lista.alumno[i].apellido << " ";
		cout << "Promedio: ";
		cout << lista.alumno[i].promedio << "\n" ;
	}
}


int main()
{
	int d = 1, op = 0;
	bool run = true;
	system ("cls");
	cout << "Seleccione una de las siguientes opciones: " << "\n";
	while (run)
	{
		cout << "1. Agregar estudiante." << "\n";
		cout << "2. Lista de estudiantes." << "\n";
	  	cout << "3. Promedio general." << "\n";
  		cout << "4. promedio mayor" << "\n";
		cout << "Otro. Salir." << "\n";

		cin >> op;
		switch (op)
		{
		case 1:
			agregar(lista.count);
			break;
		case 2:
			alista();
			break;
		case 3:
		    cout <<"El promedio general es "<< promedio() <<"\n";
		    break;
//		case 4:

		default:
			run = false;
			break;
		}
		system ("cls");
	}

	return 0;
}
