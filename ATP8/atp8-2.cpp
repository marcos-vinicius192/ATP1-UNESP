

#include <iostream>
using namespace std;

int main() {
    int n, i, vet[100], cont = 0;
    cout << "Insira o tamanho do vetor (até 100): ";
    cin >> n;
    if (n > 100 || n <= 0) {
        cout << "Tamanho inválido para o vetor." << endl;
        return 1; // Termina o programa se o tamanho for inválido
    }
    for (i = 0; i < n; i++) {
        cout << "Insira o valor do vetor na posição " << i + 1 << ": ";
        cin >> vet[i];
        cont++;
    }
    cout << "Valores do vetor: ";
    for (i = 0; i < cont; i++) {
        cout << vet[i] << " ";
    }
    return 0;
}