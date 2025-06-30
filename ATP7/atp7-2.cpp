
#include <iostream>

using namespace std;
int main() {
    int A[5], B[5];
    cout << "Insira 5 valores para o vetor A: ";
    for (int i = 0; i < 5; i++) {
        cin >> A[i];
    }
    cout << "Insira 5 valores para o vetor B: ";
    for (int i = 0; i < 5; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << A[i] << " " << B[i] << " ";
    }
    return 0;
}