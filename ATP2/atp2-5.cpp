#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Insira três números inteiros: ";
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);

    cout << "Números ordenados: " << a << ", " << b << ", " << c << endl;

    return 0;
}