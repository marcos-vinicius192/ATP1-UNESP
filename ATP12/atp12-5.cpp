
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Produto {
    string nome;
    float preco;
    int quantidade;

    Produto(string n = "", float p = 0.0, int q = 0) : nome(n), preco(p), quantidade(q) {}
};

struct Menu {
    vector<Produto> produtos;

    void adicionarProduto(const Produto& produto) {
        produtos.push_back(produto);
    }

    void exibirMenu() const {
        cout << "Menu de Produtos:" << endl;
        for (size_t i = 0; i < produtos.size(); ++i) {
            cout << i + 1 << ". " << produtos[i].nome 
                 << " - Preço: R$" << fixed << setprecision(2) << produtos[i].preco 
                 << " - Quantidade: " << produtos[i].quantidade << endl;
        }
    }
};

Produto inicializarProduto() {
    string nome;
    float preco;
    int quantidade;

    cout << "Insira o nome do produto: ";
    cin.ignore(); // Limpa o buffer do cin
    getline(cin, nome);
    cout << "Insira o preço do produto: ";
    cin >> preco;
    cout << "Insira a quantidade do produto: ";
    cin >> quantidade;

    return Produto(nome, preco, quantidade);
}

int main() {
    Menu menu;
    int opcao;

    do {
        cout << "\nMenu Interativo:" << endl;
        cout << "1. Adicionar Produto" << endl;
        cout << "2. Exibir Menu de Produtos" << endl;
        cout << "3. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                Produto produto = inicializarProduto();
                menu.adicionarProduto(produto);
                cout << "Produto adicionado com sucesso!" << endl;
                break;
            }
            case 2:
                menu.exibirMenu();
                break;
            case 3:
                cout << "Saindo do programa." << endl;
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }
    } while (opcao != 3);

    return 0;
}