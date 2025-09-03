#include <iostream>
using namespace std;

int main() {
    int N, num, mayor, menor, contMayor = 0, contMenor = 0;
    cout << "Ingrese N: ";
    cin >> N;
    if(N <= 0) return 0;
    cin >> num;
    mayor = menor = num;
    contMayor = contMenor = 1;
    for(int i = 2; i <= N; i++) {
        cin >> num;
        if(num > mayor) { mayor = num; contMayor = 1; }
        else if(num == mayor) contMayor++;
        if(num < menor) { menor = num; contMenor = 1; }
        else if(num == menor) contMenor++;
    }
    cout << "Mayor: " << mayor << " aparece " << contMayor << " veces" << endl;
    cout << "Menor: " << menor << " aparece " << contMenor << " veces" << endl;
    return 0;
}
