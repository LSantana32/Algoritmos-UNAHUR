#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double R, superficie, volumen;
    cout << "Ingrese el radio de la esfera: ";
    cin >> R;
    superficie = 4 * M_PI * R * R;
    volumen = (4.0 / 3.0) * M_PI * R * R * R;
    cout << "Superficie de la esfera: " << superficie << endl;
    cout << "Volumen de la esfera: " << volumen << endl;
    return 0;
}
