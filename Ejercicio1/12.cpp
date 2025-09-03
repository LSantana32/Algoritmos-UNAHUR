#include <iostream>
using namespace std;

int main() {
    int totalSeg, dias, horas, minutos, segundos;
    cout << "Ingrese el tiempo en segundos: ";
    cin >> totalSeg;
    dias = totalSeg / 86400;
    totalSeg %= 86400;
    horas = totalSeg / 3600;
    totalSeg %= 3600;
    minutos = totalSeg / 60;
    segundos = totalSeg % 60;
    cout << dias << " dias, " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos" << endl;
    return 0;
}
