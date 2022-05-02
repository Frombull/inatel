#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;


int main(){
    vector<int> V;
    int entrada = 0;
    int procurado = 0;

    while(cin >> entrada){
        if (entrada != -1)
            V.push_back(entrada);
        else
            break;
    }

    cin >> procurado;

    for(int i=0; i<V.size(); i++){
        if(V[i] == procurado){
            cout << procurado << " encontrado na posicao " << i <<endl;
            return 0;
        }
    }

    cout << procurado << " nao encontrado\n";
    return 0;
}
