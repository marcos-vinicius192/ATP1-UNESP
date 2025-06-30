
#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

struct Matrix {
    Node* head;
    int rows;
    int cols;

    Matrix(int r, int c) : rows(r), cols(c), head(nullptr) {}

    void addValue(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void print() {
        Node* temp = head;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (temp) {
                    cout << temp->value << " ";
                    temp = temp->next;
                } else {
                    cout << "0 "; // Preenche com 0 se não houver mais valores
                }
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;
    cout << "Insira o número de linhas e colunas da matriz: ";
    cin >> rows >> cols;

    Matrix matrix(rows, cols);

    cout << "Insira os valores da matriz (total de " << rows * cols << " valores):" << endl;
    for (int i = 0; i < rows * cols; i++) {
        int value;
        cin >> value;
        matrix.addValue(value);
    }

    cout << "Matriz:" << endl;
    matrix.print();

    return 0;
}