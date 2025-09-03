#include <iostream>
using namespace std;

int main() {
    double a, b, resultado;
    char op;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese la operacion (+,-,*,/): ";
    cin >> op;
    switch(op) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/': if (b != 0) resultado = a / b; break;
        default: cout << "Operacion invalida" << endl; return 0;
    }
    cout << "Resultado: " << resultado << endl;
    return 0;
}
