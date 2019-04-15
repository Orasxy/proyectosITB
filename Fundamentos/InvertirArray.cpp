//Gabriel Cardenas
//DSN01

#include <iostream>
using namespace std;

int main() {

   int d = 20;
   typedef int aArray[d];
   aArray array;

   cout << "Ingrese " << d << " numeros:" << endl;

   for (int i = 0; i < d; i++){
       cout << "numero " << i+1 << " de " << d << ": ";
       cin >> array[i];
   }

   cout << endl << "numeros invertidos:" << endl ;

   for (int i = 0; i < d; i++){
       cout << "numero " << i+1 << ": "<< array[d-i-1] << endl;
   }

   return 0;
}
