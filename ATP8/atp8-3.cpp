#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    int *vetor = new int[5];
    int i = 0, valor = 0;
    while (valor != -1) {
        cout << "Insira um valor para o vetor (ou -1 para sair): ";
        cin >> valor;
        if (valor != -1) {
            if (i >= 5) {
                // Redimensiona o vetor se necessário
                int *novo_vetor = new int[i + 5]; // Aumenta o tamanho em 5
                for (int j = 0; j < i; j++) {
                    novo_vetor[j] = vetor[j];
                }
                delete[] vetor; // Libera a memória do vetor antigo
                vetor = novo_vetor; // Atualiza o ponteiro do vetor
            }
            vetor[i++] = valor; // Armazena o valor e incrementa o índice
        }
    }
    delete[] vetor; // Libera a memória do vetor
    return 0;
}