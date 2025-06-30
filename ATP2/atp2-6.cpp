#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Equilátero" << endl;
        } else if (a == b || b == c || a == c) {
            cout << "Isósceles" << endl;
        } else {
            cout << "Escaleno" << endl;
        }
    } else {
        cout << "Inválido" << endl;
    }
    return 0;
}