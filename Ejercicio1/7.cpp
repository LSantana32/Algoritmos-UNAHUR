#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    if (a > b)
        cout << "El mayor es: " << a << endl;
    else if (b > a)
        cout << "El mayor es: " << b << endl;
    else
        cout << "Son iguales" << endl;
    return 0;
}
