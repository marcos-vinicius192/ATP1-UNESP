#include <iostream>
using namespace std;

void inverterArray(int* arr, int tamanho) {
    int* inicio = arr;
    int* fim = arr + tamanho - 1;

    while (inicio < fim) {
        // Troca os valores apontados por inicio e fim
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        // Move os ponteiros
        inicio++;
        fim--;
    }
}

int main() {
    int tamanho;
    cout << "Insira o tamanho do array: ";
    cin >> tamanho;

    int* arr = new int[tamanho];
    cout << "Insira os elementos do array: ";
    for (int i = 0; i < tamanho; i++) {
        cin >> arr[i];
    }

    inverterArray(arr, tamanho);

    cout << "Array invertido: ";
    for (int i = 0; i < tamanho; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Libera a memória alocada
    return 0;
}