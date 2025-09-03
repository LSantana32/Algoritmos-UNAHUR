#include <iostream>
using namespace std;

int main() {
    double num, maximo, minimo;
    int pos = 0, posMax = 0, posMin = 0;
    char mas;
    cout << "Ingrese un numero: ";
    cin >> num;
    maximo = minimo = num;
    pos++;
    posMax = posMin = pos;
    cout << "Hay mas numeros? (s/n): ";
    cin >> mas;
    while(mas == 's' || mas == 'S') {
        cout << "Ingrese un numero: ";
        cin >> num;
        pos++;
        if(num > maximo) { maximo = num; posMax = pos; }
        if(num < minimo) { minimo = num; posMin = pos; }
        cout << "Hay mas numeros? (s/n): ";
        cin >> mas;
    }
    cout << "Maximo: " << maximo << " en posicion " << posMax << endl;
    cout << "Minimo: " << minimo << " en posicion " << posMin << endl;
    return 0;
}
