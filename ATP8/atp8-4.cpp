#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n, i, j, k, *V, *S, *aux, cont = 0;
    cout << "Insira o tamanho do vetor: ";
    cin >> n;
    if (n <= 0) {
        cout << "Tamanho inválido para o vetor." << endl;
        return 1; // Termina o programa se o tamanho for inválido
    }
    V = new int[n]; // Aloca o vetor V
    cout << "Insira os valores do vetor: ";
    for (i = 0; i < n; i++) {
        cin >> V[i];
    }
    // Conta quantos números pares existem no vetor V
    for (i = 0; i < n; i++) {
        if (V[i] % 2 == 0) {
            cont++;
        }
    }
    // Aloca o vetor S com o tamanho de cont
    S = new int[cont];
    // Preenche o vetor S com os números pares de V
    k = 0;
    for (i = 0; i < n; i++) {
        if (V[i] % 2 == 0) {
            S[k++] = V[i];
        }
    }
    // Imprime o vetor S
    cout << "Vetor S com os números pares: ";
    for (i = 0; i < cont; i++) {
        cout << S[i] << " ";
    }
    cout << endl;
    // Libera a memória alocada
    delete[] V; // Libera o vetor V
    delete[] S; // Libera o vetor S 
    return 0;
}