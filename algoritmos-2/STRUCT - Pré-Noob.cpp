#include <iomanip>
#include <iostream>
using namespace std;


struct pinto{
    int matricula;
    float np1;
    float np2;
};


int main() {
    pinto p1;
    cout << fixed << setprecision(2);

    cin >> p1.matricula >> p1.np1 >> p1.np2;

    cout << "Digite o seu numero de matricula:\nDigite a nota da primeira prova:\nDigite a nota da segunda prova:\nMatricula do aluno: ";
    cout << p1.matricula << "\nNota da primeira prova: " << p1.np1 << "\nNota da segunda prova: " << p1.np2 << endl;

    return 0;
}
