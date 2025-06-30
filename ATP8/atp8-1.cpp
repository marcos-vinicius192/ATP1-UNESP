
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Insira o tamanho do vetor: ";
    cin >> n;

    if (n <= 0) {
        cout << "Tamanho inválido para o vetor." << endl;
        return 1; // Termina o programa se o tamanho for inválido
    }

    int* vetor = new int[n]; // Aloca um vetor de inteiros com n posições

    // Preenche o vetor com valores sequenciais
    for (int i = 0; i < n; i++) {
        vetor[i] = i + 1; // Preenche com valores de 1 a n
    }

    // Imprime os valores do vetor
    cout << "Valores do vetor: ";
    for (int i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete[] vetor; // Libera a memória alocada
    return 0;
}