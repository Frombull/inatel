#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;


struct pinto{
    int id;
    float IM;
    float FA;
};


int main(){
    vector<pinto> storm;
    int num_inputs = 0;
    int best_id;
    float best_score = 0;
    float trooper_score;
    float a, b, c;


    while(cin >> a){
        if(a == 0)
            break;

        cin >> b >> c;

        storm.push_back(pinto());
        storm[num_inputs].id = a;
        storm[num_inputs].IM = b;
        storm[num_inputs].FA = c;
        num_inputs++;
    }

    // Finds the best trooper of the vector
    for(int i=0; i<num_inputs; i++){
        trooper_score = (storm[i].IM+storm[i].FA)/2.f;
        if(trooper_score > best_score){
            best_score = trooper_score;
            best_id = storm[i].id;
        }
    }

    cout << "Stormtrooper escolhido: " << best_id << endl;
    cout << "GA = " << best_score << endl;
    return 0;
}
