#include <iomanip>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;


struct person {
    string name = {};
    vector<int> notas = {};
};


int main() {
    vector<person> vect;
    int num_inputs;
    int input;
    int winner_score = 0;
    string name_input;
    string winner;

    cin >> num_inputs;

    for (int i = 0; i < num_inputs; i++) {
        vect.push_back(person());

        cin.ignore();
        getline(cin, name_input);
        vect[i].name = name_input;

        for (int j = 0; j < 4; j++) {   // pega as 4 notas da pessoa
            cin >> input;
            vect[i].notas.push_back(input);
        }
    }

    for (int i = 0; i < num_inputs; i++) {  // para cada struct
        int sum = accumulate(vect[i].notas.begin(), vect[i].notas.end(), 0);    //soma das notas
        if (sum >= winner_score) {  //se a soma for a maior encontrada
            winner = vect[i].name;
            winner_score = sum;
        }
    }

    cout << "Vencedor: " << winner << endl;

    return 0;
}
