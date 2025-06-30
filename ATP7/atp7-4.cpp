#include <iostream>
#include <vector>
using namespace std;

void imprimirElementosComuns(const vector<int>& A, const vector<int>& B) {
    cout << "Elementos comuns: ";
    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            if (A[i] == B[j]) {
                cout << A[i] << " ";
                break; // Para evitar imprimir o mesmo elemento várias vezes
            }
        }
    }
    cout << endl;
}

int main() {
    int T;
    cout << "Insira o tamanho dos vetores: ";
    cin >> T;

    vector<int> A(T), B(T);
    cout << "Insira os elementos do vetor A: ";
    for (int i = 0; i < T; i++) {
        cin >> A[i];
    }

    cout << "Insira os elementos do vetor B: ";
    for (int i = 0; i < T; i++) {
        cin >> B[i];
    }

    imprimirElementosComuns(A, B);

    return 0;
}