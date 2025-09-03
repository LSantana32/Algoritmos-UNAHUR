#include <iostream>
using namespace std;

int main() {
    int N;
    double num, sumaTotal = 0;
    int cuentaTotal = 0;
    cout << "Ingrese N: ";
    cin >> N;
    for(int i = 1; i <= N; i++) {
        double sumaLote = 0;
        int cuentaLote = 0;
        cout << "Lote " << i << ": ";
        do {
            cin >> num;
            if(num != 0) { sumaLote += num; cuentaLote++; sumaTotal += num; cuentaTotal++; }
        } while(num != 0);
        if(cuentaLote != 0)
            cout << "Media lote " << i << ": " << sumaLote / cuentaLote << endl;
    }
    if(cuentaTotal != 0)
        cout << "Media total: " << sumaTotal / cuentaTotal << endl;
    return 0;
}
