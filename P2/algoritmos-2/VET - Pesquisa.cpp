#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vect;
    int search;
    int input;

    while (cin >> input) {
        if (input == 0) break;

        vect.push_back(input);
    }

    cin >> search;

    for (int i = 0; i < vect.size(); i++) {
        if (vect[i] == search) {
            cout << "Elemento " << search << " encontrado na posicao " << i
                 << endl;
            return 0;
        }
    }

    cout << "Elemento " << search << " nao foi encontrado\n";
    return 0;
}
