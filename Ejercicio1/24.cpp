#include <iostream>
using namespace std;

bool tieneRaicesReales(double a, double b, double c) {
    double discriminante = b*b - 4*a*c;
    return discriminante >= 0;
}

int main() {
    double a, b, c;
    cout << "Ingrese los coeficientes a, b y c: ";
    cin >> a >> b >> c;

    if (tieneRaicesReales(a, b, c)) {
        cout << "El polinomio tiene raices reales." << endl;
    } else {
        cout << "El polinomio NO tiene raices reales." << endl;
    }

    return 0;
}
