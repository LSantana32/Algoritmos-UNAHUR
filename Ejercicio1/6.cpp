#include <iostream>
using namespace std;

int main() {
    double num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if (num > 0)
        cout << "Mayor que cero" << endl;
    else if (num < 0)
        cout << "Menor que cero" << endl;
    else
        cout << "Igual a cero" << endl;
    return 0;
}
