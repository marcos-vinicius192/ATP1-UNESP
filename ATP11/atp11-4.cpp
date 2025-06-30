/*
Faça um programa que calcule a soma de duas matrizes quadradas de inteiros que
são passadas em um arquivo matriz.txt, a primeira linha do arquivo indica as
dimensões da matriz
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
    ifstream arquivo("matriz.txt");
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    int n;
    arquivo >> n; // Lê a dimensão da matriz
    vector<vector<int>> matriz1(n, vector<int>(n));
    vector<vector<int>> matriz2(n, vector<int>(n));
    vector<vector<int>> resultado(n, vector<int>(n));

    // Lê a primeira matriz
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arquivo >> matriz1[i][j];
        }
    }

    // Lê a segunda matriz
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arquivo >> matriz2[i][j];
        }
    }

    // Calcula a soma das matrizes
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Exibe o resultado
    cout << "Resultado da soma das matrizes:" << endl;
    for (const auto& linha : resultado) {
        for (const auto& valor : linha) {
            cout << setw(4) << valor; // Formatação para melhor visualização
        }
        cout << endl;
    }

    arquivo.close();
    return 0;
}