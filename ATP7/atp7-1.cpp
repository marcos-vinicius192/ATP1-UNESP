#include <iostream>
#include <string>

using namespace std;

int main() {
    string palavra;
    cout << "Insira uma palavra: ";
    cin >> palavra;
    cout << palavra << " comeca com " << palavra[0] << endl;
    return 0;
}