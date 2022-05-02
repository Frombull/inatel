#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int num_inputs;
    int input;
    int max = 0;
    int min = 0;
    int media = 0;

    cout << fixed << setprecision(2);
    cin >> num_inputs;

    for (int i = 0; i < num_inputs; i++) {
        cin >> input;
        input >= 60 ? max++ : min++;
        media += input;
    }

    cout << "Media da turma: " << (float)media/num_inputs << endl;
    cout << "Alunos com nota acima da media: " << max << endl;
    cout << "Alunos com nota abaixo da media: " << min << endl;

    return 0;
}
