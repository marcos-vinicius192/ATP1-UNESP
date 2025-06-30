#include <iostream>
using namespace std;

bool estaPresente(int A[], int T, int x) {
    for (int i = 0; i < T; i++) {
        if (A[i] == x) {
            return true; // Retorna verdadeiro se o elemento for encontrado
        }
    }
    return false; // Retorna falso se o elemento não for encontrado
}

int main() {
    int T;
    cout << "Insira o tamanho do vetor: ";
    cin >> T;

    int A[T];
    cout << "Insira os elementos do vetor: ";
    for (int i = 0; i < T; i++) {
        cin >> A[i];
    }

    int x;
    cout << "Insira o elemento a ser verificado: ";
    cin >> x;

    if (estaPresente(A, T, x)) {
        cout << "O elemento " << x << " está presente no vetor." << endl;
    } else {
        cout << "O elemento " << x << " não está presente no vetor." << endl;
    }

    return 0;
}