#include <iostream>
#include "ArithProgress.h"
#include "GeomProgress.h"
#include "FibonacciProgress.h"

using namespace std;

int main(){
    cout << "Progresion aritmetica: "<< endl;
    for (auto i: ArithProgress{1, 10, 2})
        cout << i << " ";
    cout << "\n" <<endl;

    cout << "Progresion geometrica: "<< endl;

    for (auto i: GeomProgress{1, 10, 3})
        cout << i << " ";
    cout << "\n" << endl;

    cout << "Progresion fibonacci: "<< endl;
    for (auto i: FibonacciProgress{50})
        cout << i << " ";
    cout << "\n" << endl;
    return 0;
}