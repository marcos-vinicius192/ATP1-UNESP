

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int inicio, fim;
    cout << "Insira o valor inicial: ";
    cin >> inicio;
    cout << "Insira o valor final: ";
    cin >> fim;

    if (inicio < 2) inicio = 2; // O menor primo é 2

    for (int num = inicio; num <= fim; num++) {
        bool eh_primo = true;

        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                eh_primo = false;
                break;
            }
        }

        if (eh_primo) {
            cout << num << " é primo." << endl;
        }
    }

    return 0;
}