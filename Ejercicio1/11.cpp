#include <iostream>
using namespace std;

int main() {
    int opcion;
    cout << "Menu:\n1 - Opcion 1\n2 - Opcion 2\n3 - Opcion 3\n4 - Opcion 4\n";
    cin >> opcion;
    switch(opcion) {
        case 1: cout << "Elegiste opcion 1" << endl; break;
        case 2: cout << "Elegiste opcion 2" << endl; break;
        case 3: cout << "Elegiste opcion 3" << endl; break;
        case 4: cout << "Elegiste opcion 4" << endl; break;
        default: cout << "Opcion incorrecta" << endl; break;
    }
    return 0;
}
