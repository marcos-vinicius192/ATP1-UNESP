
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;
int main() {
    int tamanho;
    cout << "Insira o tamanho do array: ";
    cin >> tamanho;

    // Aloca o array dinamicamente
    int* array = new int[tamanho];

    // Lê os valores do array
    cout << "Insira os valores do array:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> array[i];
    }

    // Imprime os valores do array
    cout << "Valores do array original:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << setw(4) << array[i];
    }
    cout << endl;

    // Realoca a memória para metade do tamanho
    int novoTamanho = tamanho / 2;
    int* novoArray = new int[novoTamanho];
    
    for (int i = 0; i < novoTamanho; i++) {
        novoArray[i] = array[i];
    }

    // Libera a memória do array original
    delete[] array;

    // Imprime os valores restantes do novo array
    cout << "Valores do novo array (metade):" << endl;
    for (int i = 0; i < novoTamanho; i++) {
        cout << setw(4) << novoArray[i];
    }
    cout << endl;

    // Libera a memória do novo array
    delete[] novoArray;

    return 0;
}