/*
Crie um programa que gere cartelas de BINGO no formato .csv, onde cada linha é
uma cartela com 5 números únicos por coluna (B-I-N-G-O):
● Coluna B: números 1-15
● Coluna I: números 16-30
● Coluna N: números 31-45 (com um espaço livre no meio, "FREE")
● Coluna G: números 46-60
● Coluna O: números 61-75
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
    // Abre o arquivo para escrita
    ofstream arquivo("cartelas.csv", ios::out);
    if (!arquivo.is_open()) {
        cerr << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    // Define os intervalos para cada coluna
    vector<int> colunaB, colunaI, colunaN, colunaG, colunaO;
    for (int i = 1; i <= 15; ++i) colunaB.push_back(i);
    for (int i = 16; i <= 30; ++i) colunaI.push_back(i);
    for (int i = 31; i <= 45; ++i) colunaN.push_back(i);
    for (int i = 46; i <= 60; ++i) colunaG.push_back(i);
    for (int i = 61; i <= 75; ++i) colunaO.push_back(i);
    // Gera 100 cartelas
    for (int i = 0; i < 100; ++i) {
        // Embaralha os números de cada coluna
        random_shuffle(colunaB.begin(), colunaB.end());
        random_shuffle(colunaI.begin(), colunaI.end());
        random_shuffle(colunaN.begin(), colunaN.end());
        random_shuffle(colunaG.begin(), colunaG.end());
        random_shuffle(colunaO.begin(), colunaO.end());

        // Escreve a cartela no arquivo
        arquivo << colunaB[0] << "," << colunaI[0] << "," << colunaN[0] << ",FREE," << colunaG[0] << "," << colunaO[0] << endl;
    }
    arquivo.close();
    return 0;
}