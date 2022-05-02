#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> V;
    int input = 0;
    int low = 0;
    int high = 20;
    int id = 0;

    while (cin >> input) {
        if (input != -1)
            V.push_back(input);
        else
            break;
    }

    cin >> id;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (V[mid] == id) {
            cout << "Possui acesso\n";
            return 0;
        }
        if (V[mid] < id)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Nao possui acesso\n";
    return 0;
}
