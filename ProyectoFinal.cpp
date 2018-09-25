#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <string.h>

using namespace std;

const int MAX = 40, MAT = 6;

const string mensajeError = "La lista de estudiantes esta vacia, por favor ingrese un estudiante e intentelo nuevamente.";

////////////////////////////////////////////////////////////////////////////////
struct stMaterias
{
	string nombre[MAT];
	int nota[MAT];
	int count = 0;
};

struct stAlumno
{
	string nombre = "", apellido = "";
	int edad = 0, promedio = 0;
	char genero = 'm';
	stMaterias materias;
};

struct stLista
{
	stAlumno alumno[MAX];
	int count = 0;
} lista;

////////////////////////////////////////////////////////////////////////////////
void encabezado()
{
	system ("cls");
	cout << "*****       SISTEMA ACADEMICO - C++ ACADEMIC       *****\n";
	cout << "========================================================\n";
	cout << "\n////////////////////////////////////////////////////////\n";
}

void menu()
{
	encabezado();
	cout << "\n	    --MENU PRINCIPAL--\n\n";

	cout << "	1. Agregar estudiante.\n";
	cout << "	2. Lista de estudiantes.\n";
	cout << "	3. Busqueda de estudiante.\n";
	cout << "	4. Promedio general.\n";
	cout << "	5. Estudiante con mayor edad.\n";
	cout << "	6. Estudiante con menor edad.\n";
	cout << "	7. Creditos.\n";
	cout << "	8. Salir.\n";

	cout << "\n//////////////////////////////////////////////////////\n";
	cout << "\nElija una opcion [1 - 8]: --> ";
}

void agmaterias(int p)
{
	cout << "Ingrese el numero de las materias cursadas: " << "\n";
	int d=0, r=0;
	cin >> d;

	if (d!=0){
		cout << "Detallelas a continuacion" << "\n";
		for (int i = 0; i < d; i++)
		{
			cout << "Nombre: ";
			cin >> lista.alumno[p].materias.nombre[i];
			cout << "Calificacion: ";
			cin >> lista.alumno[p].materias.nota[i];
			lista.alumno[p].materias.count++;
			r += lista.alumno[p].materias.nota[i];
		}
		lista.alumno[p].promedio = (r/lista.alumno[p].materias.count);
	}
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
	cout << "El alumno " << lista.alumno[p].nombre << " " << lista.alumno[p].apellido << " se ingreso correctamente." << "\n";
}

void datosEstudiante(int i)
{
	cout << setw(2) << i+1 << ". ";
	cout << setw(10) << lista.alumno[i].nombre << "\t  ";
	cout << setw(10) << lista.alumno[i].apellido << "\t    ";
	cout << setw(2) << lista.alumno[i].edad << "\t" ;

	switch (lista.alumno[i].genero) {
		case 'm': cout << "    masculino" << '\n'; break;
		case 'f': cout << "    femenino" << '\n'; break;
		default: cout << "   desconocido." << '\n'; break;
	}
}

void datosMaterias(int i)
{
	cout << "----------------------------------\n";
	cout << setw(10) <<"Materias:" << "\n";
	cout << "----------------------------------\n";
	for (int r = 0; r < lista.alumno[i].materias.count; r++)
	{
		cout << "Nombre: " << setw(10) << lista.alumno[i].materias.nombre[r] << "\t";
		cout << "Nota: " << setw(2) << lista.alumno[i].materias.nota[r] << "\n";
	}
}

void alista()
{
	if (lista.count == 0)
		cout << mensajeError << "\n";
	else
	{
		encabezado();
		cout << "========================================================\n";
		cout << "|| Nombre\t || Apellido\t|| Edad ||   Genero   ||" << "\n";
		cout << "========================================================\n";

		for (int i = 0; i < lista.count; i++)
		{
			datosEstudiante(i);
		}

		//cout << "\n======================================================\n";
		cout << "\n\n\nPresione cualquier tecla para salir.";
	}
}

void busqueda()
{
	string n;
	int count = 0, i;
	cout << "Ingrese el nombre o el apellido del estudiante. (respetando las mayusculas.)" << "\n";
	cin >> n;
	system("cls");
	cout << "\n Resultado de la busqueda:" << "\n";
	cout << "========================================================\n";
	cout << "|| Nombre\t || Apellido\t|| Edad ||   Genero   ||" <<  "\n";
	cout << "========================================================\n";

	for (i = 0; i < lista.count; i++) {
		if (lista.alumno[i].nombre == n || lista.alumno[i].apellido == n)
			datosEstudiante(i);
	}
}

void promedio()
{
	int r = 0, s = 0;
	if (lista.count == 0)
		cout << mensajeError << "\n";
	else
	{
		for (int i = 0; i < lista.count; i++){
			r += lista.alumno[i].promedio;
		}
		s = r / lista.count;
		cout <<"El promedio general es "<< s << "\n";
	}

}

void promedioMayor()
{
	int r = 0, s = 0;
	if (lista.count == 0)
		cout << mensajeError << "\n";
	else
	{
		int mayor = lista.alumno[0].promedio, r = 0;
    	for (int i = 1; i < lista.count; i++) {
        	if (mayor < lista.alumno[i].promedio) {
            	mayor = lista.alumno[i].promedio;
				r = i;
        	}
		}
		cout << "el estudiante con mejor promedio es " << lista.alumno[r].nombre << " "<< lista.alumno[r].apellido;
		cout << " con "<< mayor << "pt. \n";
    }
}

////////////////////////////////////////////////////////////////////////////////
int main()
{
	system ("color 9F");
	int op = 0;
	string n = "";
	bool run = true;
	while (run)
	{
		menu();
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
		    busqueda();
			break;

        case 4:
			promedioMayor();
			break;

		default:
			run = false;
			break;
		}
		getch();

	}

	return 0;
}
