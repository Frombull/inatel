#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;


struct pinto{
    string name;
    int points;
};


int main(){
    vector<pinto> vect;
    int num_inputs;
    int highest_score = 0;
    int best_index = 0;
    float med_sum = 0;

    cin >> num_inputs;

    for(int i=0; i<num_inputs; i++){
        vect.push_back(pinto());
        cin.ignore();
        getline(cin, vect[i].name);
        cin >> vect[i].points;
    }

    // for each struct
    for(int i=0; i<vect.size(); i++){
        if(vect[i].points > highest_score){
            highest_score = vect[i].points;
            best_index = i;
        }
        med_sum += vect[i].points;
    }

    cout << "Padawan com mais pontos: " << vect[best_index].name << endl;
    cout << "Pontos: " << vect[best_index].points << endl;
    cout << fixed << setprecision(2);
    cout << "Media da turma: " << med_sum/vect.size() << " pontos\n";

    return 0;
}
