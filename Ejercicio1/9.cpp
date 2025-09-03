#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Ingrese M: ";
    cin >> M;
    cout << "Ingrese N: ";
    cin >> N;
    if (N != 0 && M % N == 0)
        cout << "M es divisible por N" << endl;
    else
        cout << "M no es divisible por N" << endl;
    return 0;
}
