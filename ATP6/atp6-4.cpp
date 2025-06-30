#include <iostream>
using namespace std;

int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1; // Qualquer número elevado a 0 é 1
    }
    return base * potencia(base, expoente - 1); // Chamada recursiva
}

int main() {
    int base, expoente;
    cout << "Insira a base: ";
    cin >> base;
    cout << "Insira o expoente: ";
    cin >> expoente;

    if (expoente < 0) {
        cout << "Expoente deve ser positivo." << endl;
        return 1; // Termina o programa se o expoente for negativo
    }

    int resultado = potencia(base, expoente);
    cout << base << " elevado a " << expoente << " é: " << resultado << endl;

    return 0;
}