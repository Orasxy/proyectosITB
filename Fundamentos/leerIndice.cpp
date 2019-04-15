//Gabriel Cardenas
//DSN01

#include <iostream >
using namespace std;

int main() {
    int d = 8, number;
    typedef int aArray[d];
    aArray array;

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 100;
    array[4] = 23;
    array[5] = 2;
    array[6] = 2;
    array[7] = 1;

    cin >> number;

    cout << "se encuentra en los siguientes indices:" << '\n';
    for (int i = 0; i < d; i++) {
        if (number == array[i]) {
            cout << i << '\n';
        }
    }

}
