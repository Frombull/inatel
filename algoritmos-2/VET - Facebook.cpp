#include <limits.h>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int num_inputs;
    int input;
    int max_found = 0;
    int min_found = INT_MAX;

    cin >> num_inputs;

    for (int i = 0; i < num_inputs; i++) {
        cin >> input;
        if (input > max_found) max_found = input;
        if (input < min_found) min_found = input;
    }

    cout << "Menor numero de contatos: " << min_found << endl;
    cout << "Maior numero de contatos: " << max_found << endl;

    return 0;
}
