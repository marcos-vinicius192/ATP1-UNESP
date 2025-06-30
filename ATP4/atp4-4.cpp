

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // a) Somar os inteiros ímpares entre 1 e 99
    int soma = 0;
    for (int contador = 1; contador < 100; contador += 2) {
        soma += contador;
    }
    cout << "Soma dos inteiros ímpares entre 1 e 99: " << soma << endl;

    // b) Imprimir o valor 333,546372 com diferentes precisões
    double valor = 333.546372;
    cout << fixed << left;
    for (int precisao = 1; precisao <= 5; ++precisao) {
        cout << setprecision(precisao) << setw(15) << valor << endl;
    }

    // c) Calcular 2.5 elevado à potência 3
    double resultado = pow(2.5, 3);
    cout << "2.5 elevado à potência 3: " << setw(10) << setprecision(2) << resultado << endl;

    // d) Imprimir os inteiros de 1 a 20 usando um loop while
    int x = 1; // Inicializando x
    while (x <= 20) {
        cout << x;
        if (x % 5 == 0) {
            cout << endl; // Nova linha a cada cinco números
        } else {
            cout << "\t"; // Tabulação para outros números
        }
        x++;
    }
    cout << endl;

    // e) Repetir o exercício d) usando uma estrutura for
    for (int i = 1; i <= 20; i++) {
        cout << i;
        if (i % 5 == 0) {
            cout << endl; // Nova linha a cada cinco números
        } else {
            cout << "\t"; // Tabulação para outros números
        }
    }
    
    return 0;
}