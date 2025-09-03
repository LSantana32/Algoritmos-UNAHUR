#include <iostream>
using namespace std;

int main() {
    double base, altura, perimetro, superficie;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;
    perimetro = 2 * (base + altura);
    superficie = base * altura;
    cout << "Perimetro: " << perimetro << endl;
    cout << "Superficie: " << superficie << endl;
    return 0;
}
