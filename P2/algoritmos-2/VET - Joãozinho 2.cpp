#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

void insert_int(vector<int> &V, int inputs) {
    int input;
    for (int i = 0; i < inputs; i++) {
        cin >> input;
        V.push_back(input);
    }
}

void insert_char(vector<char> &V, int inputs) {
    char input;
    for (int i = 0; i < inputs; i++) {
        cin >> input;
        V.push_back(input);
    }
}

int main() {
    vector<int> X;
    vector<int> Y;
    vector<char> Op;
    int num_inputs;

    cout << fixed << setprecision(2);
    cin >> num_inputs;

    insert_int(X, num_inputs);
    insert_int(Y, num_inputs);
    insert_char(Op, num_inputs);

    for (int i = 0; i < num_inputs; i++) {
        switch (Op.at(i)) {
            case '+':
                cout << X.at(i) << " + " << Y.at(i) << " = ";
                cout << X.at(i) + Y.at(i) << endl;
                break;
            case '-':
                cout << X.at(i) << " - " << Y.at(i) << " = ";
                cout << X.at(i) - Y.at(i) << endl;
                break;
            case '*':
                cout << X.at(i) << " * " << Y.at(i) << " = ";
                cout << X.at(i) * Y.at(i) << endl;
                break;
            case '/':
                cout << X.at(i) << " / " << Y.at(i) << " = ";
                cout << (float)X.at(i) / Y.at(i) << endl;
                break;
        }
    }

    return 0;
}
