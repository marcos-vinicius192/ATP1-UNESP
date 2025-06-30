#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int n = 3, m = 3;
    int* v = new int[n*m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            v[i * m + j] = 0; // Preenche a matriz com 0
        }
    }

    cout << "Matriz 3x3 preenchida com 0:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i * m + j] << " "; // Imprime o elemento da matriz
        }
        cout << endl; // Nova linha após cada linha da matriz
    }
    delete[] v; // Libera a memória alocada
    return 0;
}