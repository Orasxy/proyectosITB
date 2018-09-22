//Gabriel Cardenas//
//DSN01

#include <iostream>
using namespace std;

int main() {
    int d = 5, r=0, s=0;
    int temperatura[d]{20, 23, 15, 10, 12};

    for (int i=0; i<d; i++)
        r+=temperatura[i];

    s = r/d;
    cout << "la temperatura media es: " << s << "\n";
    cout << "y las mayores a la media es/son: " << "\n";

    for (int i=0; i<d; i++){
        if (temperatura[i] > s)
            cout << temperatura[i] << "\n";
    }

    return 0;
}
