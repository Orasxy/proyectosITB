//Gabriel Cardenas//
//DSN01

#include <iostream>
using namespace std;

int main() {

    int d = 5;
    typedef int aArray[d];
    aArray array;

    array[0] = 121;
    array[1] = 156;
    array[2] = 513;
    array[3] = 455;
    array[4] = 554;

    for (int i = 0; i < d; i++){
        if (array[i] % 2 == 0){
            std::cout << "el numero "<< array[i] << " es par."<< '\n';
        }
        else{
            std::cout << "el numero "<< array[i] << " es impar."<< '\n';
        }
    }

    return 0;
}
