#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;


struct pinto {
    string name;
    int base;
};


int main() {
    vector<pinto> vect;
    string search_name;
    int num_inputs;

    cin >> num_inputs;

    // Gets the inputs
    for (int i = 0; i < num_inputs; i++) {
        vect.push_back(pinto());
        cin.ignore();
        getline(cin, vect[i].name);
        cin >> vect[i].base;
    }

    // Get the name to seach for
    cin.ignore();
    getline(cin, search_name);

    // Search name in the struct
    for (int i = 0; i < vect.size(); i++) {
        if (vect[i].name == search_name) {
            cout << "Este cavaleiro esta na base " << vect[i].base << endl;
            return 0;
        }
    }

    // If the name was not found
    cout << "Este cavaleiro nao esta cadastrado" << endl;
    return 0;
}
