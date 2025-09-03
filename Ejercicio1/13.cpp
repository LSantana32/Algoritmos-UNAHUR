#include <iostream>
using namespace std;

int main() {
    int inicio;
    cout << "Ingrese el numero inicial: ";
    cin >> inicio;
    for(int i = 0; i < 20; i++)
        cout << inicio + i << " ";
    cout << endl;
    return 0;
}
