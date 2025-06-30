
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <string>

using namespace std;
int main() {
    ifstream menu("menu.txt");
    int qtdItens = 0;
    string linha;
    while (getline(menu, linha)) {
        if (linha.empty()) {
            break;
            }
            qtdItens++;
    }
    menu.clear(); // Limpa o estado do stream
    menu.seekg(0); // Volta para o início do arquivo
    vector<string> itens(qtdItens);
    for (int i = 0; i < qtdItens; i++) {
        getline(menu, itens[i]);
    }
    menu.close();
    ofstream boleto("boleto.txt");
    boleto << "Boleto de Pedido" << endl;
    boleto << "=================" << endl;
    boleto << "Menu:" << endl;
    for (int i = 0; i < qtdItens; i++) {
        boleto << i + 1 << ". " << itens[i] << endl;
    }
    boleto << "=================" << endl;
    boleto << "Digite o número do item que deseja pedir (0 para sair): ";
    int escolha = 0;
    while (escolha != 0) {
        cin >>
        escolha;
        if (escolha > 0 && escolha <= qtdItens) {
            boleto << "Você escolheu: " << itens[escolha - 1] << endl;
        } else if (escolha != 0) {
            boleto << "Escolha inválida. Tente novamente." << endl;
        }
    }
    boleto.close();
    return 0;
}