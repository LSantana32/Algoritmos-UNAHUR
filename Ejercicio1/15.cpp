#include <iostream>
using namespace std;

int main() {
    double num, suma = 0;
    do {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> num;
        suma += num;
        if(num != 0)
            cout << "Suma parcial: " << suma << endl;
    } while(num != 0);
    return 0;
}
