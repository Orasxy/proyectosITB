//Gabriel Cardenas
//DSN01

#include <iostream>
using namespace std;

int main(){
	int x=10, y=100;
	cout << "Hay " << y/x << " numeros naturales divisibles para " << x << " del 1 al " << y << " y son: ";
	for (int i = 1; i <= y; i++)
		if (i % x == 0) cout << i << " ";
	return 0;
}