#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Decimal {
    int inteiro;
    int decimal;

    // Construtor para inicializar o número decimal
    Decimal(int i = 0, int d = 0) : inteiro(i), decimal(d) {
        if (decimal < 0 || decimal >= 10000) {
            throw invalid_argument("Decimal deve estar entre 0 e 9999");
        }
    }

    // Função para somar dois números decimais
    Decimal operator+(const Decimal& other) const {
        int new_decimal = decimal + other.decimal;
        int new_inteiro = inteiro + other.inteiro + new_decimal / 10000;
        new_decimal %= 10000;
        return Decimal(new_inteiro, new_decimal);
    }

    // Função para subtrair dois números decimais
    Decimal operator-(const Decimal& other) const {
        int new_decimal = decimal - other.decimal;
        int new_inteiro = inteiro - other.inteiro;
        if (new_decimal < 0) {
            new_decimal += 10000;
            new_inteiro--;
        }
        return Decimal(new_inteiro, new_decimal);
    }

    // Função para imprimir o número decimal
    void print() const {
        cout << inteiro << "." << setw(4) << setfill('0') << decimal << endl;
    }
};

int main() {
    try {
        Decimal num1(5, 1234); // 5.1234
        Decimal num2(3, 5678); // 3.5678

        cout << "Número 1: ";
        num1.print();
        cout << "Número 2: ";
        num2.print();

        Decimal soma = num1 + num2;
        cout << "Soma: ";
        soma.print();

        Decimal subtracao = num1 - num2;
        cout << "Subtração: ";
        subtracao.print();
    } catch (const invalid_argument& e) {
        cerr << "Erro: " << e.what() << endl;
    }

    return 0;
}