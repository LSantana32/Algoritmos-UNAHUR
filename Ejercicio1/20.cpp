#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, nombreMax, nombreMin;
    double salario, maxSalario = -1e9, minSalario = 1e9;
    char mas;
    do {
        cout << "Ingrese nombre: ";
        cin >> nombre;
        cout << "Ingrese salario: ";
        cin >> salario;
        if(salario > maxSalario) { maxSalario = salario; nombreMax = nombre; }
        if(salario < minSalario) { minSalario = salario; nombreMin = nombre; }
        cout << "Hay mas empleados? (s/n): ";
        cin >> mas;
    } while(mas == 's' || mas == 'S');
    cout << "Maximo: " << nombreMax << " con " << maxSalario << endl;
    cout << "Minimo: " << nombreMin << " con " << minSalario << endl;
    return 0;
}
