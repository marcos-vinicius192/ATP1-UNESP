/*
Faça um programa que imprime um número aleatório de 2 até 12 (incluso).
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));

    // Gera um número aleatório entre 2 e 12
    int numero_aleatorio = rand() % 11 + 2;

    // Imprime o número aleatório
    cout << "Número aleatório entre 2 e 12: " << numero_aleatorio << endl;

    return 0;
}