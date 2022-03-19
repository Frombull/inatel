#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int student_amount;
    int approved = 0;
    int not_approved = 0;
    float grades_sum = 0.f;
    float input = 0.f;

    cout << fixed << setprecision(2);
    cin >> student_amount;

    for (int i = 0; i < student_amount; i++) {
        cin >> input;
        grades_sum += input;

        input >= 60.00 ? approved++ : not_approved++;
    }

    cout << "Media da turma = " << grades_sum / student_amount << endl;
    cout << "Alunos com nota abaixo da media: " << not_approved << endl;
    cout << "Alunos com nota acima da media: " << approved << endl;

    return 0;
}
